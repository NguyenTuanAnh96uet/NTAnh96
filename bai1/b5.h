#ifndef B5_H
#define B5_H
#include "b1.h"
class B5: public B1
{
    public:
        double timTotal();
};
        double B5::timTotal()
    {
            return timTong()*timTong()+timTich()*(timTong()-SoA)*(timTich()+SoB);
    }

#endif // B5_H
