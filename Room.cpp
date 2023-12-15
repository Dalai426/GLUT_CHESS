#include "Room.h"
#include "header.h"


void Room::draw_solid_cube(GLfloat size)
{


    float normal[3],corn[2][3];

    float x1,y1,z1;
    float x2,y2,z2;
    float x3,y3,z3;
    float x4,y4,z4;

    x1 = -size/2;
    y1 = -size/2;
    z1 = -size/2;

    x2 = size/2;
    y2 = -size/2;
    z2 = -size/2;

    x3 = size/2;
    y3 = -size/2;
    z3 = size/2;

    x4 = -size/2;
    y4 = -size/2;
    z4 = size/2;

    float x5,y5,z5;
    float x6,y6,z6;
    float x7,y7,z7;
    float x8,y8,z8;

    x5 = -size/2;
    y5 = size/2;
    z5 = -size/2;

    x6 = size/2;
    y6 = size/2;
    z6 = -size/2;

    x7 = size/2;
    y7 = size/2;
    z7 = size/2;

    x8 = -size/2;
    y8 = size/2;
    z8 = size/2;


    glBegin(GL_QUADS);
    //Quad 1

    corn[0][0] = x1;
    corn[0][1] = y1;
    corn[0][2] = z1;

    corn[1][0] = x2;
    corn[1][1] = y2;
    corn[1][2] = z2;

    corn[2][0] = x3;
    corn[2][1] = y3;
    corn[2][2] = z3;

    calcNormal(corn, normal);
    glNormal3fv(normal);


    glTexCoord2f(0,0);
    glVertex3f(x1,y1,z1);

    glTexCoord2f(1,0);
    glVertex3f(x2,y2,z2);

    glTexCoord2f(1,1);
    glVertex3f(x3,y3,z3);

    glTexCoord2f(0,1);
    glVertex3f(x4,y4,z4);

    glEnd();



    //Quad 2

    glBegin(GL_QUADS);

    corn[0][0] = x5;
    corn[0][1] = y5;
    corn[0][2] = z5;

    corn[1][0] = x6;
    corn[1][1] = y6;
    corn[1][2] = z6;

    corn[2][0] = x7;
    corn[2][1] = y7;
    corn[2][2] = z7;


    calcNormal(corn,normal);
    glNormal3fv(normal);

    glTexCoord2f(0,0);
    glVertex3f(x8,y8,z8);

    glTexCoord2f(1,0);
    glVertex3f(x7,y7,z7);

    glTexCoord2f(1,1);
    glVertex3f(x6,y6,z6);

    glTexCoord2f(0,1);
    glVertex3f(x5,y5,z5);
    glEnd();


    //Quad 3

    glBegin(GL_QUADS);

    corn[0][0] = x1;
    corn[0][1] = y1;
    corn[0][2] = z1;

    corn[1][0] = x2;
    corn[1][1] = y2;
    corn[1][2] = z2;

    corn[2][0] = x6;
    corn[2][1] = y6;
    corn[2][2] = z6;

    calcNormal(corn, normal);
    glNormal3fv(normal);

    glTexCoord2f(0,0);
    glVertex3f(x5,y5,z5);

    glTexCoord2f(1,0);
    glVertex3f(x6,y6,z6);

    glTexCoord2f(1,1);
    glVertex3f(x2,y2,z2);

    glTexCoord2f(0,1);
    glVertex3f(x1,y1,z1);

    glEnd();

    //Quad 4

    glBegin(GL_QUADS);

    corn[0][0] = x7;
    corn[0][1] = y7;
    corn[0][2] = z7;

    corn[1][0] = x8;
    corn[1][1] = y8;
    corn[1][2] = z8;

    corn[2][0] = x4;
    corn[2][1] = y4;
    corn[2][2] = z4;

    calcNormal(corn, normal);
    glNormal3fv(normal);

    glTexCoord2f(0,0);
    glVertex3f(x7,y7,z7);

    glTexCoord2f(1,0);
    glVertex3f(x8,y8,z8);

    glTexCoord2f(1,1);
    glVertex3f(x4,y4,z4);

    glTexCoord2f(0,1);
    glVertex3f(x3,y3,z3);

    glEnd();
    //Quad 5

    glBegin(GL_QUADS);
    corn[0][0] = x6;
    corn[0][1] = y6;
    corn[0][2] = z6;

    corn[1][0] = x7;
    corn[1][1] = y7;
    corn[1][2] = z7;

    corn[2][0] = x3;
    corn[2][1] = y3;
    corn[2][2] = z3;

    calcNormal(corn, normal);
    glNormal3fv(normal);

    glTexCoord2f(0,0);
    glVertex3f(x6,y6,z6);

    glTexCoord2f(1,0);
    glVertex3f(x7,y7,z7);

    glTexCoord2f(1,1);
    glVertex3f(x3,y3,z3);

    glTexCoord2f(0,1);
    glVertex3f(x2,y2,z2);

    glEnd();

    //Quad 6

    glBegin(GL_QUADS);
    corn[0][0] = x1;
    corn[0][1] = y1;
    corn[0][2] = z1;

    corn[1][0] = x4;
    corn[1][1] = y4;
    corn[1][2] = z4;

    corn[2][0] = x8;
    corn[2][1] = y8;
    corn[2][2] = z8;

    calcNormal(corn, normal);
    glNormal3fv(normal);


    glTexCoord2f(0,0);
    glVertex3f(x1,y1,z1);

    glTexCoord2f(1,0);
    glVertex3f(x4,y4,z4);

    glTexCoord2f(1,1);
    glVertex3f(x8,y8,z8);

    glTexCoord2f(0,1);
    glVertex3f(x5,y5,z5);


    glEnd();
}


void Room::drawBuilding(){

glPushMatrix();

    glRotatef(-90,0,0,1);
    glRotatef(-90,1,0,0);

    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,0);

    glPushMatrix();
    glTranslatef(0,0,-15);
    glScalef(30,20,0.2);
    draw_solid_cube(1);
    glPopMatrix();

    glDisable(GL_TEXTURE_2D);



    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,1);
    glPushMatrix();
    glTranslatef(15,0,0);
    glScalef(0.2,20,30);
    draw_solid_cube(1);
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);



    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,1);
    glPushMatrix();
    glTranslatef(-15,0,0);
    glScalef(0.2,20,30);
    draw_solid_cube(1);
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);



    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,0);

    glPushMatrix();
    glTranslatef(0,0,15);
    glScalef(30,20,0.2);
    draw_solid_cube(1);
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);

    // floor
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,2);
    glPushMatrix();
    glTranslatef(0,10,0);
    glScalef(30,0.2,30);
    draw_solid_cube(1);
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);



glPopMatrix();
}


