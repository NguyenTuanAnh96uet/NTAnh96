#ifndef B3_H
#define B3_H
#include "nhapxuat.h"
class B3: public So
    {
    public:
        double timTocDo();
    };
    double B3::timTocDo()
    {
        return SoA+SoB*SoC;
    }

#endif // B3_H
