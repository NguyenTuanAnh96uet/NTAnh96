#include <QCoreApplication>
#include "b2.h"
#include "b1.h"
#include "b3.h"
#include "b4.h"
#include "b5.h"
#include "b6.h"
#include "b7.h"
#include <QTextStream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int select;
    qDebug() << " xin hay nhap lua chon cua b ";
    cin>> select;
    switch(select)
    {
    case 1:
        qDebug() << "day la bai 1, tim tong hieu tich thuong cua 2 so nguyen";
        B1 s1;
        qDebug() << "xin hay nhap 2 so A va B:";
        s1.set2();
        qDebug() << "ket qua sau khi thuc hien phep cong tru nhan chia la: "<<endl;
        qDebug() << s1.timTong();
        qDebug() << s1.timHieu();
        qDebug() << s1.timTich();
        qDebug() << s1.timThuong();
        break;
    case 2:
        qDebug() << "day la bai 2, tim tong va trung binh cua 2 so nguyen";
        B2 s2;
        qDebug() << "xin hay nhap 2 so A va B:";
        s2.set2();
        qDebug() << "ket qua:\n tong va trung binh cong cua 2 so la: "<<endl;
        qDebug() << s2.timTong();
        qDebug() << s2.timTB();
        break;
    case 3:
        qDebug() << "day la bai 3, tim van toc khi biet van toc ban dau, gia toc va thoi gian";
        B3 s3;
        s3.set3();
        qDebug() << "ket qua v=v0+a*t=";
        qDebug() << s3.timTocDo();
        break;
    case 4:
        qDebug() << "day la bai 4, tim diem khi biet diem k.t, g.k,c.k";
        B4 s4;
        qDebug() << "xin hay nhap diem kt, gk va ck:";
        s4.set3();
        qDebug() << "ket qua: "<<endl;
        qDebug() << s4.tinhDiem();
    case 5:
        qDebug() << "day la bai 5, tim tong S, tich p so va tim total= s*s+p(s-x)(p+y)";
        B5 s5;
        qDebug() << "xin hay nhap 2 so A va B:";
        s5.set2();
        qDebug() << "ket qua tinh tong, nhan va tatal theo yeu cau lan luot la: "<<endl;
        qDebug() << s5.timTong();
        qDebug() << s5.timTich();
        qDebug() << s5.timTotal();
    case 6:
        qDebug() << "day la bai 6, su dung khai niem nap chong toan tu de cong 2 so phuc";
        B6 s6,s7,s8;
        qDebug() <<" xin moi nhap he so cua so phuc thu nhat"<<endl;
        s6.set2();
        qDebug() <<" xin moi nhap he so cua so phuc thu hai"<<endl;
        s7.set2();
        qDebug() << "ket qua: "<<endl;
        s8=s6+s7;
        s8.getsp();
    case 7:
        qDebug() << "day la bai 7, su dung khai niem nap chong toan tu 1 ngoi de hien thi so phuc";
        B7 s9;
        qDebug() <<" xin moi nhap he so cua so phuc "<<endl;
        s9.set2();
        +s9;
        qDebug() << "so phuc sau khi tang la: ";
        s9.getsp();
        qDebug() << "nhap lai so phuc ban dau: ";
        s9.set2();
        -s9;
        qDebug() << "so phuc sau khi giam la: ";
        s9.getsp();
    default:
        qDebug() << " xin loi, ban hay nhap lau chon khac, luu y tu 1 den 7";
        break;
    }
    return 0;
}
