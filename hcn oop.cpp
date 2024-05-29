#include<bits/stdc++.h>
using namespace std ;

class HCN {
	public:
		double cd;
		double cr;
		void nhap()
		{
		cin >> cd >> cr;
		}
	double cvhcn()
	{
		return (cd+cr)*2;
		}
	double dthcn ()
	{
		return cd*cr;
		}
	void xuat ()
	{
		cout << cvhcn()<<endl;
		cout << dthcn();
		}
	};
int main (){
	HCN a;
	a.nhap();
	a.xuat();
	return 0;
	}
