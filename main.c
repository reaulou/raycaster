#include<stdio.h>
#include<stdlib.h>
#include "glut.h"

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glutSwapBuffers();
}

void init(){
    glClearColor(0.3,0.3,0.3,0);
    gluOrtho2D(0,1024,512,0);
}

int main(int argc, char** argv)
{ 
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(1024,512);
    glutCreateWindow("Raycaster");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}