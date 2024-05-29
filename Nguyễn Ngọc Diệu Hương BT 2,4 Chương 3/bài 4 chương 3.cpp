#include<bits/stdc++.h>
#include<algorithm>
using namespace std ;

float tinhDoDai(int x1, int y1, int x2, int y2)
{
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

bool ktTamGiacVuong(float m, float n, float p)
{
    float Max;
	if (m>= n && m>=p)
	    Max = m;
	else if (n>= m && n>=p)
	    Max = n;
	else 
	    Max = p;
    
    float tmp = m*m + n*n + p*p - Max*Max;
    if (Max*Max == tmp)
    	return true;
    else
    	return false;
}

class TAMGIAC
{
private:
    int ax,ay,bx,by,cx,cy;
public:
    TAMGIAC()
    {
    	ax=0;
    	ay=0;
    	bx=0;
    	by=0;
    	cx=0;
    	cy=0;
    }
    ~TAMGIAC(){}
    void Set()
    {
        cin >> ax >> ay >> bx >> by >> cx >> cy;
    }

    float ChuVi()
    {
        float a,b,c; //do dai 3 canh
        a = tinhDoDai(ax,ay,bx,by);
        b = tinhDoDai(bx,by,cx,cy);
        c = tinhDoDai(ax,ay,cx,cy);

        return a+b+c;
    }

    float tinhDienTich()
    {
        float a,b,c; //do dai 3 canh
        a = tinhDoDai(ax,ay,bx,by);
        b = tinhDoDai(bx,by,cx,cy);
        c = tinhDoDai(ax,ay,cx,cy);

        float p = (a+b+c)/2.00; //nua chu vi
        float kq = sqrt( p*(p-a)*(p-b)*(p-c) );
        return kq;
    }

    void Print()
    {
        cout << "A(" << ax << "," << ay << ") ";
        cout << "B(" << bx << "," << by << ") ";
        cout << "C(" << cx << "," << cy << ") ";
        cout << endl;
    }

    string Phan_loai()
    {
        float a,b,c; //do dai 3 canh
        a = tinhDoDai(ax,ay,bx,by);
        b = tinhDoDai(bx,by,cx,cy);
        c = tinhDoDai(ax,ay,cx,cy);
        
        if (a==b==c)
            return "tam giac deu";
        
        if (a==b)
        {
            if (ktTamGiacVuong(a,b,c))
                return "tam giac vuong can";
            else
                return "tam giac can";
        }
        
        else if (a==c) 
        {
            if (ktTamGiacVuong(a,c,b))
                return "tam giac vuong can";
            else
                return "tam giac can";
        }
        else if (b==c)
        {
            if (ktTamGiacVuong(b,c,a))
                return "tam giac vuong can";
            else
                return "tam giac can";
        }

        if (ktTamGiacVuong(a,b,c))
            return "tam giac vuong";
        else 
            return "tam giac thuong";
    }
    
};

int main(){
    TAMGIAC t;
    t.Set();
    t.Print();
    cout<<"chu vi tam giac: " << t.ChuVi()<<endl;
    cout<<"dien tich tam giac: " << t.tinhDienTich()<<endl;
    cout<<"phan loai tam giac: "<<t.Phan_loai();
    return 0;
}
