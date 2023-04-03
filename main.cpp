#include <GL/glut.h>

void drawScene()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.0f);
    glColor3f(0.0f, 0.0f, 0.0f);

    // draw face 1
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.0f, 0.4f);
    glVertex2f(0.3f, 0.4f);
    glVertex2f(0.3f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glEnd();

    // draw face 2
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.0f, 0.4f);
    glVertex2f(0.2f, 0.5f);
    glVertex2f(0.5f, 0.5f);
    glVertex2f(0.3f, 0.4f);
    glEnd();

    // draw face 3
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.3f, 0.4f);
    glVertex2f(0.5f, 0.5f);
    glVertex2f(0.5f, 0.15f);
    glVertex2f(0.3f, 0.0f);
    glEnd();

    // draw triangle 1
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.3f, 0.1f);
    glVertex2f(0.0f, 0.4f);
    glVertex2f(0.3f, 0.4f);
    glEnd();

    // draw triangle 2
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.3f, 0.1f);
    glVertex2f(0.3f, 0.4f);
    glVertex2f(0.3f, 0.0f);
    glEnd();

    // draw triangle 3
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.3f, 0.1f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.3f, 0.0f);
    glEnd();

    glFlush();
}

// main function
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Fallen pyramid");
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glutDisplayFunc(drawScene);
    glutMainLoop();
    return 0;
}
