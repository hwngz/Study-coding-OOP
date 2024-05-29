#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

struct POINT
{
    int x,y;
    void nhap()
    {
        cin >> x >> y;
    }

    void xuat()
    {
        cout << "(" << x << "," << y << ")";
    }
};

struct SEGMENT
{
    POINT p1,p2;

    SEGMENT() {};
    SEGMENT(POINT u, POINT v)
    {
        p1.x = u.x;
        p1.y = u.y;

        p2.x = v.x;
        p2.y = v.y;
    }

    void nhap()
    {
        p1.nhap();
        p2.nhap();
    }

    float tinhDoDai()
    {
        return sqrt(pow(p2.x - p1.x,2) + pow(p2.y - p1.y,2));
    }
};

float tinhKC_POINTtoTRIANGLE(POINT P, SEGMENT D)
{
    //gia su duong thang la canh day cua tam giac
    //bai toan tro thanh tinh duong cao cua tam giac

    SEGMENT c1(P,D.p1);
    SEGMENT c2(P,D.p2);

    float a = c1.tinhDoDai(); //canh ben
    float b = c2.tinhDoDai(); //canh ben
    float canhDay = D.tinhDoDai(); //canh Day

    float p = (a + b + canhDay) / 2; // nua Chu Vi

    float h =  2*(sqrt(p*(p-canhDay)*(p-a)*(p-b))) / canhDay;

    return h;
}

struct TRIANGLE
{
    POINT A,B,C;

    void nhap()
    {
        A.nhap();
        B.nhap();
        C.nhap();
    }

    float tinhDienTich()
    {
        SEGMENT d(B,C);
        float h = tinhKC_POINTtoTRIANGLE(A,d);
        float canhDay = d.tinhDoDai();

        return (h*canhDay)/2;
    }

    float tinhChuVi()
    {
        SEGMENT a(A,B);
        SEGMENT b(A,C);
        SEGMENT c(B,C);

        return a.tinhDoDai() + b.tinhDoDai() + c.tinhDoDai();
    }
};


int main()
{
    return 0;
}
