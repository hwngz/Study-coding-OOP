#include<bits/stdc++.h>
using namespace std;

class HCN{
    private:
        double cd, cr;
    public:
        HCN()
        {
            cd = 0;
            cr = 0;
        }
        void nhaphcn()
        {
            cin >> cd >> cr;
        }
        double dt()
        {
            return cd*cr;
        }
        void xuathcn()
        {
            cout << "dien tich hinh chu nhat: " << dt() << endl;
        }
        ~HCN(){}
};
class HV : public HCN
{
    private:
        double canh;
    public:
        HV()
        {
            canh = 0;
        }
        void nhaphv()
        {
            cin >> canh;
        }
        double dt(){
            return canh*canh;
        }
        void xuathv()
        {
            cout << "dien tich hinh vuong: " << dt()<< endl;
        }
        ~HV(){}
};
class HT : public HV
{
    private:
        double duongcheo, dcheo;
    public: 
        HT()
        {
            duongcheo = 0;
            dcheo = 0;
        }
        void nhapht()
        {
            cin >> duongcheo >> dcheo;
        }
        double dt()
        {
            return (duongcheo*dcheo)/2;
        }
        void xuatht()
        {
            cout <<"dien tich hinh thoi: " << dt() ;
        }
        ~HT(){}
};
int main(){
    HCN a;
    HV b;
    HT c;
    a.nhaphcn();
    a.xuathcn();
    b.nhaphv();
    b.xuathv();
    c.nhapht();
    c.xuatht();
}
