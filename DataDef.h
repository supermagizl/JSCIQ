#ifndef __DATA_DEFINE__
#define __DATA_DEFINE__

#include "GL\gl.h"
#include "GL\glu.h"

#ifndef PI
#define PI 3.1415926f
#endif

typedef struct
{
	float x,y,z;
}Vertex;

typedef struct
{
	unsigned char Number;
	int vertexID[4];
	int NormalID[4];
	int MaterialID;
}Face;

typedef struct
{
	float vx,vy,vz;
}Normal;

typedef struct
{
	float x,y;
}TexCoords;

typedef struct
{
	float R,G,B,A;
	float Power;
	float SpecR,SpecG,SpecB;
	float EmisR,EmisG,EmisB;
}Material;



#endif

