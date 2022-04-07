#ifndef MATH_3D_H
#define	MATH_3D_H


struct Vector3f
{
    float x, y, z;

    Vector3f()
    {
    }

    Vector3f(float x, float y, float z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
};


struct Matrix4f
{
    float m[4][4];
};


#endif	/* MATH_3D_H */