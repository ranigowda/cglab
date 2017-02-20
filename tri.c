#include<GL/glut.h>
void triangle()
{
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_LINE_LOOP);
glVertex3i(10,10,0);
glColor3f(1.0,0.0,0.0);
glVertex3i(50,100,0);
glColor3f(0.0,0.0,1.0);
glVertex3i(100,10,0);
glColor3f(0.0,1.0,0.0);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex3i(50,10,0);
glColor3f(0.0,0.0,1.0);
glVertex3i(27,50,0);
glColor3f(1.0,0.0,0.0);
glVertex3i(75,55,0);
glColor3f(0.0,1.0,0.0);
glEnd();
glFlush();
}
int main(int argc,char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowPosition(50,20);
glutInitWindowSize(500,250);
glutCreateWindow("sample");
glClearColor(1.0,1.0,1.0,0.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0,500,0,500);
glutDisplayFunc(triangle);
glutMainLoop();
return 0;
}
