#include<iostream>
using namespace std;
class PHANSO{
private:
int tu, mau;
public:
friend istream& operator >> (istream& is, PHANSO &a);
friend ostream& operator << (ostream& os, PHANSO a);
int ucln(int a, int b);
void Toigian();
void SetPS();
void Print();
void Pheptinh(PHANSO &a, PHANSO b){
int TongTu, TongMau;
TongTu = a.tu*b.mau + a.mau*b.tu;
TongMau = a.mau*b.mau;
cout << "Tong hai phan so: " << TongTu <<"/"<< TongMau << endl;
int HieuTu, HieuMau;
HieuTu = a.tu*b.mau - a.mau*b.tu;
HieuMau = a.mau*b.mau;
cout << "Hieu hai phan so: " << HieuTu <<"/"<< HieuMau << endl;
cout << "Dao dau tu so phan so thu nhat: " << -1*a.tu <<"/"<< a.mau << endl;
int TichTu, TichMau;
TichTu = a.tu*b.tu;
TichMau = a.mau*b.mau;
cout << "Tich hai phan so: " << TichTu <<"/"<< TichMau << endl;
int ThuongTu, ThuongMau;
ThuongTu = a.tu*b.mau;
ThuongMau = a.mau*b.tu;
cout << "Thuong hai phan so: " << ThuongTu <<"/"<< ThuongMau;
}
PHANSO(){
tu=0;
mau=0;
}
void Set(int _tu, int _mau){
tu=_tu;
mau=_mau;
}
PHANSO(const PHANSO &a){
tu=a.tu;
mau=a.mau;
}
void Print(PHANSO a){
cout << "Phan so vua nhap: ";
cout << a.tu << "/" << a.mau;
}
~PHANSO(){}
};
istream& operator >> (istream& is, PHANSO &a){
is >> a.tu >>a.mau;
return is;
}
ostream& operator << (ostream& os, PHANSO a){
os << a.tu << "/" << a.mau;
return os;
}
int PHANSO :: ucln(int a, int b){
if(b==0){
return a;
}
else{
return ucln(b,a%b);
}
return a;
}
void PHANSO :: Toigian(){
int h=ucln(tu, mau);
tu/=h;
mau/=h;
}

int main(){
PHANSO a;
cout << "Phan so thu nhat: ";
cin >> a;
cout << endl;
cout << "Phan so vua nhap: " << a;
cout << endl;
a.Toigian();
cout << endl;
cout << "Phan so thu nhat da toi gian: " << a << endl;
cout << endl;
PHANSO b;
cout << "Phan so thu hai: ";
cin >> b;
cout << endl;
a.Pheptinh(a,b);
return 0;
}
