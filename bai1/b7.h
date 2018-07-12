#ifndef B7_H
#define B7_H
#include "nhapxuat.h"
class B7: public So
{
    public:
        B7 &operator +();
        B7 &operator -();

};
    B7 &B7::operator +()
    {
        B7 z;
        this->SoA++;
        this->SoB++;
        return z;
    }
    B7 &B7::operator -()
    {
        B7 x;
        this->SoA--;
        this->SoB--;
        return x;
    }

#endif // B7_H
