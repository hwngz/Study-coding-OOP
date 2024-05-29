#include<iostream>
using namespace std;

class PS {
	private:
		int tu, mau;
	public :
		PS ()
		{
			tu = 0;
			mau = 0;
		}
		// phuong thuc thiet lap
		~PS (){}
		// phuong thuc huy
		void Set()
		{
			cin >> tu >> mau;
		}
		int UCLN (int a, int b)
		{
			while(b!=0)
			{
				int r = a%b;
				a = b;
				b = r;
			}
				return a;
		}
		void Toigian()
		{
			int h = UCLN (tu, mau);
			tu/=h;
			mau/=h;
		}
		float Giatri()
		{
			float n;
			n = (float)tu/ (float)mau;
			return n;
		}
		void Print(){
			cout<<tu<<"/"<<mau<<endl;	
		}
		void Cong (PS b)
		{
			tu=tu*b.mau+mau*b.tu;
			mau=mau*b.mau;
		}
	};

int main(){
		PS a,b;
		cout<< "phan so thu nhat: ";
		a.Set();
		cout<< "gia tri cua phan so: "<< a.Giatri()<<endl;
		cout<< "phan so thu nhat toi gian: ";
		a.Toigian();
		a.Print();
		cout<<"phan so thu 2: ";
		b.Set();
		cout<<"phan so thu nhat sau khi cong phan so thu hai: ";
		a.Cong(b);
		a.Print();
		cout<<"phan so thu nhat sau khi toi gian: ";
		a.Toigian();
		a.Print();
		cout<<"gia tri cua phan so thu nhat sau khi cong phan so thu hai: "<<a.Giatri();
	}
