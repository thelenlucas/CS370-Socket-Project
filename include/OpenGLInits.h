#pragma once

#include <GL/glew.h>
#include <GL/freeglut.h>
#include <stdio.h>

void glewCompatCheck() {
    if (glewIsSupported("GL_VERSION_4_3"))
        printf("Ready for OpenGL 4.3\n");
    else {
        printf("OpenGL 4.3 not supported\n");
        exit(1);
    }
}

void projectionFunc(int width, int height)
{
	GLfloat width_bound, height_bound;
	width_bound = (GLfloat) width; height_bound = (GLfloat) height;
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, width_bound, 0.0, height_bound, 0, 1000.0);
	glMatrixMode(GL_MODELVIEW);
}

#define STRT_X_POS 25
#define STRT_Y_POS 25

/* initialization routine */

void my_setup(int width, int height, char *window_name_str)
{
	// Allow for current OpenGL4.3 but backwards compatibility to legacy GL 2.1
	glutInitContextVersion(4, 3);
	glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);
	// To get double buffering, uncomment the following line
	// glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB); 
	// below code line does single buffering - if above line is uncommented,
	// the single buffering line will have to be commented out
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(width, height);
	glutInitWindowPosition(STRT_X_POS, STRT_Y_POS);

	glutCreateWindow(window_name_str);
	glewExperimental = GL_TRUE;
	glewInit();

	glutReshapeFunc(projectionFunc);
}
