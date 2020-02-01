#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>

void display();
void reshape(int,int);

void init()
{
    glClearColor(1.0,1.0,1.0,1.0);
}

int main(int argc , char** argv)
{
    glutInit(&argc , argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(0,0);
    glutInitWindowSize(1920,1080);

    glutCreateWindow("HUT");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    init();

    glutMainLoop();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glLineWidth(2);

    glBegin(GL_POLYGON); //Left Square
    //glColor3f(1.0,0.992,0.816);
    glColor3f(0.984,0.917,0.454);

    glVertex2f(-20,20);
    glVertex2f(-20,0);
    glVertex2f(10,0);
    glVertex2f(10,20);


    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2f(-20,20);
    glVertex2f(-20,0);

    glVertex2f(-20,0);
    glVertex2f(10,0);

    glVertex2f(10,0);
    glVertex2f(10,20);

    glVertex2f(10,20);
    glVertex2f(-20,20);


    glEnd();

    glBegin(GL_POLYGON); //Main Part

    //glColor3f(1.0,0.992,0.816);
    glColor3f(0.984,0.917,0.454);


    glVertex2f(10,0);
    glVertex2f(40,0);
    glVertex2f(40,25);
    glVertex2f(25,40);
    glVertex2f(10,25);

    glEnd();

    glBegin(GL_LINES);

    glColor3f(0.0,0,0);

    glVertex2f(10,0);
    glVertex2f(40,0);

    glVertex2f(40,0);
    glVertex2f(40,25);

    glVertex2f(40,25);
    glVertex2f(25,40);

    glVertex2f(25,40);
    glVertex2f(10,25);

    glVertex2f(10,25);
    glVertex2f(10,0);

    glEnd();

    glBegin(GL_POLYGON); //Roof

    //glColor3f(0.91,0.68,0.53);
    //glColor3f(0.73,0.56,0.44);
glColor3f(0.901,0.509,0.215);


    glVertex2f(-23,20);
    glVertex2f(10,20);
    glVertex2f(10,25);
    glVertex2f(16.5,31.5);
    glVertex2f(-18,31.5);

    glEnd();

    glBegin(GL_LINES);

    glColor3f(0,0,0);

    glVertex2f(10,20);
    glVertex2f(10,25);

    glVertex2f(10,25);
    glVertex2f(16.5,31.5);

    glVertex2f(16.5,31.5);
    glVertex2f(-18,31.5);

    glVertex2f(-18,31.5);
    glVertex2f(-23,20);

    glEnd();

    glBegin(GL_POLYGON); //Roof Cover

    //glColor3f(0.51,0.26,0.0);
    glColor3f(0.901,0.509,0.215);

    glVertex2f(7,22);
    glVertex2f(25,40);
    glVertex2f(25,43);
    glVertex2f(6,24);

    glEnd();

    glBegin(GL_POLYGON); //Roof Cover

    //glColor3f(0.51,0.26,0.0);
    glColor3f(0.901,0.509,0.215);

    glVertex2f(25,40);
    glVertex2f(43,22);
    glVertex2f(44,24);
    glVertex2f(25,43);

    glEnd();

    glBegin(GL_LINES);

    glColor3f(0.0,0.0,0.0);

    glVertex2f(7,22);
    glVertex2f(25,40);

    glVertex2f(25,40);
    glVertex2f(43,22);

    glVertex2f(43,22);
    glVertex2f(44,24);

    glVertex2f(44,24);
    glVertex2f(25,43);

    glVertex2f(25,43);
    glVertex2f(6,24);

    glVertex2f(6,24);
    glVertex2f(7,22);

    glEnd();

    glBegin(GL_POLYGON); //Chimney

    glColor3f(0.33,0.22,0.15);

    glVertex2f(-15,31.5);
    glVertex2f(-11,31.5);
    glVertex2f(-11,35.2);
    glVertex2f(-15,35.2);

    glEnd();
   

    glBegin(GL_POLYGON); //Chimney 2

    glColor3f(0.33,0.22,0.15);

    glVertex2f(-15.5,35.2);
    glVertex2f(-10.5,35.2);
    glVertex2f(-10.5,36.7);
    glVertex2f(-15.5,36.7);

    glEnd();

  

    glBegin(GL_POLYGON); //Window 1

    glColor3f(0.956,0.870,0.98);

    glVertex2f(-15,15);
    glVertex2f(-8,15);
    glVertex2f(-8,15);
    glVertex2f(-15,15);

    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);

    glColor3f(0.470,0.313,0.031);

    glVertex2f(-15,6);
    glVertex2f(-8,6);

    glVertex2f(-8,6);
    glVertex2f(-8,15);

    glVertex2f(-8,15);
    glVertex2f(-15,15);

    glVertex2f(-15,15);
    glVertex2f(-15,6);

    glEnd();

    glLineWidth(0.8);
    glBegin(GL_LINES);

    glColor3f(0.470,0.313,0.031);

    glVertex2f(-11.5,15);
    glVertex2f(-11.5,6);

    glVertex2f(-15,9);
    glVertex2f(-8,9);

    glVertex2f(-15,12);
    glVertex2f(-8,12);

    glEnd();



    glBegin(GL_POLYGON); //Window 2

    glColor3f(0.956,0.870,0.98);

    glVertex2f(5,6);
    glVertex2f(-2,6);
    glVertex2f(-2,15);
    glVertex2f(5,15);

    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);

    glColor3f(0.05,0.06,0.47);

    glVertex2f(5,6);
    glVertex2f(-2,6);

    glVertex2f(-2,6);
    glVertex2f(-2,15);

    glVertex2f(-2,15);
    glVertex2f(5,15);

    glVertex2f(5,15);
    glVertex2f(5,6);

    glEnd();

    glLineWidth(0.8);
    glBegin(GL_LINES);

    glColor3f(0.05,0.06,0.47);

    glVertex2f(1.5,15);
    glVertex2f(1.5,6);

    glVertex2f(-2,9);
    glVertex2f(5,9);

    glVertex2f(-2,12);
    glVertex2f(5,12);

    glEnd();


    glLineWidth(3);  //Circle Window
    glBegin(GL_POLYGON);

    for(double i = 0; i < 2 * 3.142; i += 3.142 / 360)
    {
        glVertex2f(25 + cos(i) * 3.5,32.5 + sin(i) * 3.5);
    }

    glEnd();

  
    glBegin(GL_POLYGON); //Door


    glLineWidth(1);
    glBegin(GL_LINES);

    glColor3f(0,0,0);

    glVertex2f(19,0);
    glVertex2f(29,0);

    glVertex2f(29,0);
    glVertex2f(29,1.5);

    glVertex2f(29,1.5);
    glVertex2f(19,1.5);

    glVertex2f(19,1.5);
    glVertex2f(19,0);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3f(0.423,0.184,0.015);

    glVertex2f(20,1.5);
    glVertex2f(28,1.5);
    glVertex2f(28,18);
    glVertex2f(20,18);

    glEnd();

    
    glBegin(GL_POLYGON);

    glColor3f(0.56,0.09,0.03);

    for(double i = 120; i < 200; i += 3.142 / 360)
    {
        glVertex2f(21.2 + cos(i) * 0.7,7.3 + sin(i) * 0.9);
    }

    glEnd();

    
   
    glPointSize(2.5);
    glBegin(GL_POINTS);

    glColor3f(1,1,1);


    glVertex2f(-36,36);
    glVertex2f(-23,44);
    glVertex2f(-34,23);
    glVertex2f(-18,35);
    glVertex2f(-25,38);
    glVertex2f(20,40);
    glVertex2f(38,34);
    glVertex2f(16,45);
    glVertex2f(26.5,43.25);
    glVertex2f(0,35.5);
    glVertex2f(-2,41.33);
    glVertex2f(-3.5,38.76);
    glVertex2f(43,43);
    glVertex2f(41,40.85);
    glVertex2f(-40,29);
    glVertex2f(-41,32);
    glVertex2f(-29,33);
    glVertex2f(-17,42);
    glVertex2f(-15,45);
    glVertex2f(7,43);

    glEnd();





    glFlush();
}

void reshape(int w,int h)
{
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-50,50,0,50);
    glMatrixMode(GL_MODELVIEW);

}
