#ifndef SO_H
#define SO_H
#include <iostream>
#include <conio.h>
#include <QDebug>
using namespace std;
class So
{
    protected:
        int  SoA;
        int  SoB;
        int  SoC;
    public:
        void  set2();
        void  set3();
        void  getsp();
};
        void So::getsp()
        {
            qDebug() <<SoA<<"+"<<SoB<<"i";
        }
        void So::set2()
        {
            cin>>SoA>>SoB;
        }
        void So::set3()
        {
            cin>>SoA>>SoB>>SoC;
        }

#endif // SO_H
