#include<bits/stdc++.h>
#include <iomanip>
using namespace std;

class GV
{
    private:
        float sogio;
        string ten;
        string gioitinh;
        //string chucvu;
    public:
        GV()
        {
            ten = "";
            sogio = 0.0;
            gioitinh = "";
           // chucvu="";
        }
        ~GV(){}
        void nhap()
        {
            cin.ignore();
            getline(cin,ten);
            cin >> gioitinh >> sogio;
        }
        float getSoGio() { return sogio; }
        string getTen() { return ten; }
};

class GVBM : public GV 
{
    public:
        float luong()
        {
            return getSoGio()*50000;
        }
    void xuat()
    {
        cout << setprecision(2) << fixed << luong();
    }
};

class GVCN : public GV 
{
    public:
    float luong()
        {
            return getSoGio()*50000 + 100000;
        }
    void xuat()
    {
        cout << getTen() << endl;
        cout << setprecision(2) << fixed << luong();
    }
};

int main()
{
    GVBM a;
    GVCN b;
    string chucvu;
    cin >> chucvu;
    if ( chucvu == "GVBM")
    {
        a.nhap();
        a.xuat();
    }
    else 
    {
        b.nhap();
        b.xuat();
    }
}
