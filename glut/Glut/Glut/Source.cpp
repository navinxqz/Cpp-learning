#include <GL/glut.h>
#include <math.h>

float ballX = 0.0f; 
float ballY = 0.0f;

float ballXSpeed = 0.02f, ballYSpeed = 0.02f;
float ballRadius = 0.1f;

// Window size
float xMin = -1.0f, xMax = 1.0f;
float yMin = -1.0f, yMax = 1.0f;

void drawBall() {
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 0.0f, 0.0f); // Red color
    glVertex2f(ballX, ballY);
    for (int i = 0; i <= 360; i += 10) {
        float theta = i * 3.14159f / 180.0f;
        glVertex2f(ballX + ballRadius * cos(theta), ballY + ballRadius * sin(theta));
    }
    glEnd();
}

void update(int value) {
    // Move the ball
    ballX += ballXSpeed;
    ballY += ballYSpeed;

    // Check for collisions with window edges
    if (ballX + ballRadius > xMax || ballX - ballRadius < xMin) {
        ballXSpeed = -ballXSpeed; // Reverse direction
    }
    if (ballY + ballRadius > yMax || ballY - ballRadius < yMin) {
        ballYSpeed = -ballYSpeed; // Reverse direction
    }

    glutPostRedisplay(); // Redraw scene
    glutTimerFunc(16, update, 0); // Call update every 16 ms (~60 FPS)
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    drawBall();
    glFlush();
}

void init() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black background
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(xMin, xMax, yMin, yMax); // Set coordinate system
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Bouncing Ball Animation");

    init();
    glutDisplayFunc(display);
    glutTimerFunc(16, update, 0); // Start animation loop

    glutMainLoop();
	return 0;
}