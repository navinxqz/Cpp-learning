#include <GL/glut.h>
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

GLfloat lightPos[] = { 0.0, 0.0, 0.0, 1.0 };

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

	glTranslatef(0.0f, 0.0f, -400.0f);
	glColor3ub(255, 255, 0);
	glDisable(GL_LIGHTING);
	glutSolidSphere(30.0f, 30,30);
	glEnable(GL_LIGHTING);

	glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
	glRotatef(fEarthRot, 0.0f, 1.0f, 0.0f);

	glColor3ub(0, 0, 255);	//earth draw
	glTranslatef(105.0f, 0.0f, 0.0f);
	glutSolidSphere(15.0f, 15, 15);
	glColor3ub(200, 200, 200);	//moon draw & rotation
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

	glEnable(GL_DEPTH_TEST);	//for hidden surface rm
	glFrontFace(GL_CCW);	//counter clockwise
	glEnable(GL_CULL_FACE);
	glEnable(GL_LIGHTING);

	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientLight);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuseLight);
	glEnable(GL_LIGHT0);
	glEnable(GL_COLOR_MATERIAL);
	glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
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