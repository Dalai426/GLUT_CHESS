

#ifndef ROOM_H
#define ROOM_H

#ifdef __APPLE__
    #include <GLUT/glut.h>
#else
    #include <GL/glut.h>
#endif // GLUT Library

#include <windows.h>
#include <stdlib.h>
#include<stdio.h>
#include<math.h>


class Room
{
    public:
        void drawBuilding();
        void draw_solid_cube(GLfloat size);

};

#endif
