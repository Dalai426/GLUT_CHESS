#include <windows.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include<stdio.h>
#include<math.h>

void LoadBitmap(char *filename, GLuint id);
void ReduceToUnit(float vector[3]);
void calcNormal(float v[3][3], float out[3]);

