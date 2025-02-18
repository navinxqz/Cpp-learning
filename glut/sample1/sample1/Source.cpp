#include <GL/glut.h>
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

	gluPerspective(45.0f, fAspect, 1.0f, 225.0f);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
void RenderScene() {
	static float fMoonRot = 0.0f;
	static float fEarthRot = 0.0f;

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();

	glTranslatef(0.0f, 0.0f, -300.0f);
	glColor3b(255, 255, 0);
	glutSolidSphere(15.0f, 15, 15);
	glEnable(GL_LIGHTING);

	glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
	glRotatef(fEarthRot, 0.0f, 1.0f, 0.0f);

	glColor3ub(0, 0, 255);	//earth draw
	glTranslatef(105.0f, 0.0f, 0.0f);
	glutSolidSphere(15.0f, 15, 15);
	glColor3ub(200, 200, 200);	//moon draw & rotation
	glRotatef(fMoonRot, 0.0f, 1.0f, 0.0f);
	glTranslatef(30.0f, 0.0f, 0.0f);
	fMoonRot += 15.0f;
	if (fMoonRot > 360.0f) { fMoonRot = 0.0f; }
	glutSolidSphere(6.0f, 15, 15);

	glPopMatrix();
	fEarthRot += 5.0f;
	if (fEarthRot > 360.0f) { fEarthRot = 0.0f; }
	glutSwapBuffers();
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutCreateWindow("OpenGL Solar System");
	glutReshapeFunc(ChangeSize);
	glutDisplayFunc(RenderScene);

	glutMainLoop();
	return 0;
}