#include<bits/stdc++.h>
using namespace std;

class ANIMAL
{
	protected:
		int age;
		float weight;
		int sex;
	public:
		ANIMAL()
		{
			age = 0;
			weight = 0;
			sex = 0;
		}
		~ANIMAL(){}
		void Set( int a, float b, int c)
		{
			age = a;
			weight = b;
			sex = c;
		}
		void An()
		{
			cout << "Con thu dang an" << endl;
		}
		void Print()
		{
			cout << "tuoi: " << age << endl;
			cout << "can nang: " << weight << endl;
			cout << "gioitinh: " << sex;
		}
};

class ELEPHANT : public ANIMAL
{
	private:
		int root;
	public:
		ELEPHANT()
		{
			age = 0;
			weight = 0;
			sex = 0;
			root = 0;
		}
		~ELEPHANT(){}
		void Set(int a, float b, int c, int d)
		{
			age = a;
			weight = b;
			sex = c;
			root = d;
		}
		void An()
		{
			cout << "VOI DANG AN CO" << endl;
		}
		void Print()
		{
			cout << "tuoi: " << age << endl;
			cout << "can nang: " << weight << endl;
			cout << "gioitinh: " << sex << endl;
			cout << "xuat xu: " ;
		}
};

int main()
{
	ANIMAL a;
	a.An();
	a.Print();
	ELEPHANT b;
	b.An();
	b.Print();
	int root;
	if (root == 1)
	{
		cout << "CHAU PHI" ;
	}
	else
	{
		cout << "CHAU A";
	}
}
