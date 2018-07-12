#ifndef B1_H
#define B1_H
#include "nhapxuat.h"
class B1: public So
{
    public:
        int timTong()
        {
            return SoA+SoB;
        }
        int timHieu()
        {
            return SoA-SoB;
        }
        float timThuong()
        {
            return float(SoA)/SoB;
        }
        int timTich()
        {
            return SoA*SoB;
        }
};
#endif // B1_H
