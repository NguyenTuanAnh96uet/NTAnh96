#ifndef B6_H
#define B6_H
#include "nhapxuat.h"
class B6 : public So
{
    public:
    B6 &operator+(const B6 &);
//	B6 operator +(B6 s2)
//    {
//        B6 s;
//        s.SoA=SoA+s2.SoA;
//        s.SoB=SoB+s2.SoB;
//        return s;
//    }
};
B6 &B6::operator+(const B6 &s)
{
    B6 z;
    z.SoA = this->SoA + s.SoA;
    z.SoB = this->SoB + s.SoB;
    return z;
}

#endif // B6_H
