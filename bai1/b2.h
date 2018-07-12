#ifndef B2_H
#define B2_H
#include "B1.h"

class B2: public B1
{
    public:
        float timTB();

};
float B2::timTB()
        {
            return timTong()/float(2);
        }

#endif // B2_H
