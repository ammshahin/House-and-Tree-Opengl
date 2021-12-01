#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{
/* clear all pixels */
glClear(GL_COLOR_BUFFER_BIT);


//House
glBegin(GL_TRIANGLES);
glColor3ub(0,0,255);

glVertex3f(75,60,0);
glVertex3f(195,60,0);
glVertex3f(135,80,0);

glBegin(GL_TRIANGLES);
glColor3ub(0,255,0);

glVertex3f(20,68,0);
glVertex3f(32.5,76,0);
glVertex3f(45,68,0);


glEnd();



glBegin(GL_QUADS);
glColor3ub(255,0,0);

glVertex3f(80,20,0);
glVertex3f(190,20,0);
glVertex3f(190,60,0);
glVertex3f(80,60,0);

glBegin(GL_QUADS);
glColor3ub(50,4,0);

glVertex3f(90,30,0);
glVertex3f(105,30,0);
glVertex3f(105,50,0);
glVertex3f(90,50,0);

glBegin(GL_QUADS);
glColor3ub(50,4,0);

glVertex3f(165,30,0);
glVertex3f(180,30,0);
glVertex3f(180,50,0);
glVertex3f(165,50,0);

glBegin(GL_QUADS);
glColor3ub(100,40,60);

glVertex3f(125,25,0);
glVertex3f(145,25,0);
glVertex3f(145,55,0);
glVertex3f(125,55,0);


//Tree

glBegin(GL_QUADS);
glColor3ub(100,40,60);

glVertex3f(30,20,0);
glVertex3f(35,20,0);
glVertex3f(35,70,0);
glVertex3f(30,70,0);






glEnd();


glFlush ();
}


void init (void)
{
/* select clearing (background) color */
glClearColor (255,255, 255, 0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();


glOrtho(0, 200, 0, 200, -10.0, 10.0);
}


int main(int argc, char** argv)
{

glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);


glutInitWindowSize (600, 600);
glutInitWindowPosition (100, 100);
glutCreateWindow ("PC-C");
init ();
glutDisplayFunc(display);



glutMainLoop();


return 0;
}
