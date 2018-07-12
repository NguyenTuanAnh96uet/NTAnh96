#ifndef B4_H
#define B4_H
#include "B1.h"
class B4: public B1
{
    public:
        double tinhDiem();
};
        double B4::tinhDiem()
    {
            return float(0.2)*timTong()+float(0.6)*SoC;
    }

#endif // B4_H
