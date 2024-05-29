#include <iostream>

using namespace std;

class HCN{
    float dai, rong;
public:
    HCN (float x = 0, float y = 0)
	{
    cout<<"Hinh CN duoc tao"<<endl;
    dai = x; rong = y;
    }
    HCN(const HCN &h){
        cout<<"Hinh CN duoc copy"<<endl;
        dai = h.dai;
        rong = h.rong;
    }
    ~HCN(){}
    void Set(float x, float y)
	{
        dai = x; rong = y
    float Dt(){
        return dai*rong;
    }
};
class HinhThoi{
    float canh, goc;
public:
    HinhThoi (float x = 0, float y = 0){
    cout<<"Hinh thoi duoc tao"<<endl;
    canh = x; goc = y;
    }
    HinhThoi(HinhThoi &h){
    cout<<"Hinh thoi duoc copy"<<endl;
    canh = h.canh; goc = h.goc;
    }
    void Set(float x, float y){ 
        canh = x; goc = y}
    float Dt()
    {
    return canh*canh*sin(goc*Pi/180);
    }
};
class HV : public HCN, public HinhThoi
{
float canh;
public:
HV (float x = 0)
{ 
	cout << "Hinh vuong duoc tao" << endl ;
canh = x; HCN::Set(x,x);
HinhThoi::Set(x,90);
}
HV(HV &h)
{
 cout << "Hinh vuong duoc copy" << endl;
canh = h.canh; HCN::Set(canh,canh);
HinhThoi::Set(canh,90);
}
void Set(float x)
{ canh = x; HCN::Set(x,x);
HinhThoi::Set(x,90); }
// float Dt()
// {
// return canh*canh;
// }
};


