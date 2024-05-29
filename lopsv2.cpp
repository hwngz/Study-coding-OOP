#include<bits/stdc++.h>
using namespace std ;

class Diem{
    float a[100];
    int n;
    public:
    friend istream& operator >> (istream& is, Diem &a);
    friend ostream& operator << (ostream& os, Diem a);
    float operator [] (int k)
    {
    	return a[k];
    }
};

istream& operator >> (istream& is, Diem &a)
{
	a.n=0;
	while(is>> a.a[a.n])
	a.n++;
	return is;
}
ostream& operator << (ostream& os, Diem a)
{
	for(int i = 0 ; i < a.n;i++)
	{
		os<<a.a[i]<<" ";
	}
	return os;
}

int main(){
    
    return 0;
}
