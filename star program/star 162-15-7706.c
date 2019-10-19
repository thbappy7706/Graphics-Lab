#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);

glColor3f (1.0, 0.2, 0.5);
glBegin(GL_POLYGON);
glVertex2d (100,400);
glVertex2d (500,500);
glVertex2d (100,600);
glVertex2d (0,1000);
glVertex2d (-100,600);
glVertex2d (-500,500);
glVertex2d (-100,400);
glVertex2d (0,0);

glEnd();
glFlush ();





}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-1000,1000,-1000,1000);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("162-15-7706");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */}
