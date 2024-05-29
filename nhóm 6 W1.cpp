// bai 1
#include <iostream>
using namespace std;

int main(){
    float c;
    cout<<"Diem thi hoc ky:";
    cin>>c;
    if (c >= 4)
    {
        cout << "DAU"<<endl;
    }
    else 
    {
        cout << "ROT";
    }
    
    return 0;
}

//bai2


#include <bits/stdc++.h>

using namespace std;

int main()
{
    float T, L, H, TB;
    cout<<"diem toan:";
    cin>>T;
    cout<<"diem ly:";
    cin>> L;
    cout << "diem hoa:";
    cin>> H;
    
    TB = (T + L + H)/3;
    cout << "diem trung binh: "<< TB<<endl;
    
    if (TB>=8){
        cout<<"hoc luc GIOI";
    }
    else if (TB<8 && TB >= 6.5){
        cout << "hoc luc KHA";
    }
    else if (TB<6 && TB >=5){
        cout << "hoc luc TRUNG BINH";
    }
    else if (TB<5 && TB>= 3.5){
        cout << "hoc luc YEU";
    }
    else if (TB<3.5){
        cout << "hoc luc KEM";
    }

    return 0;
}

// bai 3


#include <iostream>

using namespace std;

int main()
{
    int a, b;
    double nghiem;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>> b;
    
    if (a==0)
    {
        if (b==0)
        {
            cout << "Phuong trinh co vo so nghiem";
        }
        else 
        {
            cout << "Phuong trinh vo nghiem";
        }
    }
    else 
    {
        nghiem = (double) -b/a;
        cout<< "Phuong trinh co nghiem duy nhat la: "<< nghiem;
    }
    return 0;
}

// bai 4
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

float a,b,c;

void xuli()
{
    if (a == 0)
    {
        if (b==0)
        {
            if (c==0)
                cout << "Phuong trinh vo so nghiem";
            else
                cout << "Phuong trinh vo nghiem";
        }
        else
        {
            cout << "Phuong trinh co nghiem:" << endl;
            cout << fixed << setprecision(2) << "x = " << -c/b;
        }
    }
    else
    {
        float delta;
        delta = b*b - 4*a*c;

        if (delta < 0)
            cout << "Phuong trinh vo nghiem";
        else if (delta == 0)
        {
            cout << "Phuong trinh co nghiem kep: " << endl;
            cout << fixed << setprecision(2) << "x1 = x2 = " << -b/(2*a);
        }
        else
        {
            cout << "Phuong trinh co 2 nghiem phan biet: " << endl;
            cout << fixed << setprecision(2) << "x1 = " << (-b + sqrt(delta)) / (2*a) << endl;
            cout << fixed << setprecision(2) << "x2 = " << (-b - sqrt(delta)) / (2*a);
        }
    }
}

int main()
{
    cin >> a >> b >> c;

    xuli();
}

// bai 5

//Nhap vao 1 nam xuat ra con giap cua nam do
#include <iostream>
#include <string>
using namespace std;
string s[]={"than","dau","tuat","hoi","ti","suu","dan","mao","thin" ,"ty","ngo","mui"};
int n;

int main()
{
    cin >> n;

    cout << s[n%12];
}

// bai 6 

#include <bits/stdc++.h>
using namespace std;
//Hàm tìm u?c chung l?n nh?t
int ucln(int a , int b )
{
    while (b!=0)
    {
        int r = a%b;
        a = b ;
        b = r ;
    }
    return a ;
}
int main() {
    int A,B;
    cin >> A >> B;
    cout << ucln(A, B);
    }
    
//bai 7

#include<iostream>
using namespace std;

class BAI7 {
private:
	int n;
public:
	BAI7() {
		n = 0;
	}
	BAI7(int x) {
		n = x;
	}
	int TinhSoHang7a(int x) {
		return x * (x + 1);
	}
	int TinhTong7a() {
		int sum = 0;
		for (int i = 1; i <= n; i++) {
			sum = sum + TinhSoHang7a(i);
		}
		return sum;
	}
	int TinhTong7b() {
		int sum = 0;
		for (int i = 1; i <= n; i++) {
			sum = sum + i * i;
		}
		return sum;
	}
	float TinhTong7c() {
		float sum = 0;
		for (int i = 1; i <= n; i++) {
			sum = sum + 1.0 / i;
		}
		return sum;
	}
};

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	BAI7 bai7(n);
	cout << "\nKet qua 7a: " << bai7.TinhTong7a();
	cout << "\nKet qua 7b: " << bai7.TinhTong7b();
	cout << "\nKet qua 7c: " << bai7.TinhTong7c();
	return 0;
}

// bai8

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,dem=0;
    cin>>n;
    for (int i=1;i<=n;i++) //dem uoc va xuat cac uoc ra
    {   
        if (n%i==0)
        {
            cout <<i<<" ";
            dem++;
        }
    }
    cout<<endl;
    // xet dieu kien so nguyen to
    if (dem==2) cout <<n<<" la so nguyen to";
    else cout <<n<<" khong la so nguyen to";
}

// bai 9

#include<iostream>
using namespace std;

class BAI9 {
private:
	float a;
	int b;
public:
	BAI9(float x, int y) {
		a = x;
		b = y;
	}
	float TinhBai9() {
		float result = 1.0;
		for (int i = 0; i < b; i++) {
			result = result * a;
		}
		return result;
	}
};

int main() {
	float a; int b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "\nNhap b: ";
	cin >> b;
	BAI9 bai9(a, b);
	cout << "\nKet qua cua a^b = " << a << "^" << b << " = " << bai9.TinhBai9();
	return 0;
}

// bai 10

#include <iostream>
using namespace std;
int main(){
    int n;
    double x = 1;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        x*=1.02;
    }
    long long d = 5000000*x;
    cout<<d;
}

// bai 11

#include <iostream>
using namespace std;
int main(){
    double x = 1,y = 1000000;
    int d=0;
    while (y*x<=2000000)
    {
        x*=1.015;
        ++d;
    }
    cout<<d;
}


// bai 12

#include<iostream>
#include <cmath>
using namespace std;
int maxx(int a[], int n)
{
    int max = a[0];
    for (int i=1; i<n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}
float tb(int a[], int n)
{
    int x=0;
    for(int i=0; i<n; i++)
    {
        x+=a[i];
    }
    return (float) x/n;
}
int minn(int a[], int n)
{
    int min=-1;
    for (int i=0; i<n; i++)
    {
        if (a[i] > 0)
        {
            min = a[i];
            break;
        }
    }
    for (int i=0; i<n; i++)
    {
        if(a[i]>0 && min>a[i])
        {
            min = a[i];
        }
    }
    return min;
}
bool xet(int x, int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        if(x==a[i])
        {
            return true;
        }
        
    }
    return false;
}
bool snt(int a)
{
    if(a<2)
    {
        return false;
    }
    else
    {
        for(int i=2; i<=sqrt(a); i++)
        {
            if(a%i==0)
            {
                return false;
            }
        }
        return true;
    }
}
int sntmax(int a[],int n)
{
    int mx=0;
    for(int i=0; i<n; i++)
    {
        if(snt(a[i]))
        {
            if(mx<a[i])
            {
                mx=a[i];
            }
        }
    }
    return mx;
}

int main(){
    int n, a[30],x;
    cin >> n >> x;
    for(int i=0; i<n; i++)
    {
       cin >> a[i] ;
    }
    cout << maxx(a, n) <<endl;
    cout << tb(a, n) <<endl;
    cout << minn(a, n) <<endl;
    if(xet(x,a,n))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false\n";
    }
    cout << sntmax(a, n) <<endl;
    return 0;
}

//bai 14 

#include <iostream> 
using namespace std;

struct ps
{
    int tu,mau;
    
};
istream& operator >> (istream& is, ps &a);
    ostream& operator << (istream& os, ps a);
    int ucln (int a, int b);
    ps rg(ps z);
    ps operator + (ps a, ps b);
    ps operator - (ps a, ps b);
    ps operator * (ps a, ps b);

int main()
{
    ps a,b;
    cin >> a >> b;
    cout << a << b;
    return 0;
}
istream& operator >> (istream& is, ps &a)
{
    is >> a.tu>>a.mau;
    return is;
}
ostream& operator << (ostream& os, ps a)
{
    os << a.tu << "/" << a.mau;
    return os;
}
int ucln (int a, int b)
{
    if (b==0)
    {
        return a;
    }
    else
    {
        return ucln(b, a % b);
    }
    return a;
   
}
 ps rg(ps z)
 {
        int h= ucln(z.tu, z.mau);
        z.tu /= h;
        z.mau /= h;
        return z;
 }
ps operator + (ps a, ps b)
{
    ps kq; 
    kq.tu=a.tu*b.mau + b.tu*a.mau;
    kq.mau=a.mau*b.mau;
    return rg(kq);
}
ps operator - (ps a, ps b)
{
    ps kq; 
    kq.tu=a.tu*b.mau - b.tu*a.mau;
    kq.mau=a.mau*b.mau;
    return rg(kq);
}
ps operator * (ps a, ps b)
{
    ps kq; 
    kq.tu=a.tu*b.tu;
    kq.mau=a.mau*b.mau;
    return rg(kq);
}

// bai 15

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

