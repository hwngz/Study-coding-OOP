#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

float a , b , c ;

void xuli()
{
    if(a==0)
    {
        if(b==0)
        {
            if(c==0)
                cout<<"-1";
            else 
                cout<<"0";
        }
    else
    {
        cout<<"1"<<endl;
        cout<<fixed<<setprecision(10)<< - c/b;
    }
    }
    else 
    {
        float delta, x1,x2;
        delta = b*b-4*a*c;
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        if(delta<0)
            cout<<0;
        else if(delta == 0)
        {
        cout<<"1"<<endl;
        cout<<fixed<<setprecision(10)<<-b/(2*a);
        }
    else
    {
        cout<<"2"<<endl;
        if(x1<x2)
        {
        cout<<fixed<<setprecision(10)<<x1<<endl;
        cout<<fixed<< setprecision(10)<<x2;
        }
        if(x1>x2)
        {
            cout<<fixed<<setprecision(10)<<x2<<endl;
            cout<<fixed<< setprecision(10)<<x1;
        }
    }
    }
}

int main()
{
    cin >> a >> b >> c ;
    xuli();
}
