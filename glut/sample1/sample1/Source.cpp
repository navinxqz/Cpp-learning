#include <GL/glut.h>
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

GLfloat lightPos[] = { 0.0, 0.0, 0.0, 1.0 };
const int numStars = 70; // Number of stars

void ChangeSize(GLsizei w, GLsizei h) {
	GLfloat fAspect;
	if (h == 0) { h = 1; }

	glViewport(0, 0, w, h);
	fAspect = (GLfloat)w / (GLfloat)h;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	gluPerspective(45.0f, fAspect, 1.0, 1000.0);	//fieldview 45 degree
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
void RenderScene() {
	static float fMoonRot = 0.0f;
	static float fEarthRot = 0.0f;

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();

	glDisable(GL_LIGHTING);
	glColor3ub(255, 255, 255); // White color for stars
	glPointSize(1.0f);
	glBegin(GL_POINTS);
	srand(static_cast<unsigned int>(time(0)));
	for (int i = 0; i < numStars; i++) {
		GLfloat x = static_cast<GLfloat>(rand() % 800 - 400); // Random x position
		GLfloat y = static_cast<GLfloat>(rand() % 800 - 400); // Random y position
		GLfloat z = static_cast<GLfloat>(rand() % 800 - 800); // Random z position (behind the sun)
		glVertex3f(x, y, z);
	}
	glEnd();
	glEnable(GL_LIGHTING);

	glTranslatef(0.0f, 0.0f, -400.0f);	//sun draw
	glColor3ub(255, 255, 0);
	glDisable(GL_LIGHTING);
	glutSolidSphere(30.0f, 30,30);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	// Draw the halo effect
	int numLayers = 50;
	float maxRadius = 45.0f;
	for (int i = 0; i < numLayers; i++) {
		float alpha = 0.5f * (1.0f - (float)i / numLayers); // Decreasing alpha value, more faded
		float radius = 30.0f + (maxRadius - 30.0f) * (float)i / numLayers; // Increasing radius
		glColor4f(1.0f, 1.0f, 0.0f, alpha); // Yellow color with varying alpha
		glBegin(GL_TRIANGLE_FAN);
		glVertex3f(0.0f, 0.0f, 0.0f); // Center of the sun
		for (int j = 0; j <= 360; j += 10) {
			float angle = j * 3.1416 / 180.0f;
			glVertex3f(cos(angle) * radius, sin(angle) * radius, 0.0f);
		}
		glEnd();
	}
	glDisable(GL_BLEND);
	glEnable(GL_LIGHTING);

	glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
	glRotatef(fEarthRot, 0.0f, 1.0f, 0.0f);

	glColor3ub(11, 158, 210);	//earth draw
	glTranslatef(105.0f, 0.0f, 0.0f);
	glutSolidSphere(15.0f, 15, 15);
	glColor3ub(246, 241, 213);	//moon draw & rotation
	glRotatef(fMoonRot, 0.0f, 1.0f, 0.0f);
	glTranslatef(30.0f, 0.0f, 0.0f);
	glutSolidSphere(6.0f, 15, 15);
	glPopMatrix();

	fEarthRot += 5.0f;
	if (fEarthRot > 360.0f) { fEarthRot = 0.0f; }

	fMoonRot += 15.0f;
	if (fMoonRot > 360.0f) { fMoonRot = 0.0f; }
	
	glutSwapBuffers();
}
void SetupRC() {
	GLfloat ambientLight[] = { 0.3f, 0.3f, 0.3f, 1.0f };
	GLfloat diffuseLight[] = { 0.7f, 0.7f, 0.7f, 1.0f };
	GLfloat specularLight[] = { 1.0f, 1.0f, 1.0f, 1.0f };
	GLfloat specref[] = { 1.0f, 1.0f, 1.0f, 1.0f };

	glEnable(GL_DEPTH_TEST);	//for hidden surface rm
	glFrontFace(GL_CCW);	//counter clockwise
	glEnable(GL_CULL_FACE);
	glEnable(GL_LIGHTING);

	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientLight);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuseLight);
	glLightfv(GL_LIGHT0, GL_SPECULAR, specularLight);
	glEnable(GL_LIGHT0);
	glEnable(GL_COLOR_MATERIAL);
	glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
	glMaterialfv(GL_FRONT, GL_SPECULAR, specref);
	glMateriali(GL_FRONT, GL_SHININESS, 128);
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}
void Timer(int value) {
	glutPostRedisplay();
	glutTimerFunc(100, Timer, 1);
}
int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutCreateWindow("OpenGL Solar System");
	glutReshapeFunc(ChangeSize);
	glutDisplayFunc(RenderScene);
	glutTimerFunc(33, Timer, 1);

	SetupRC();
	glutMainLoop();
	return 0;
}