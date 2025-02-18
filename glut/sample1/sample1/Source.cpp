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

int main() {
	
	return 0;
}