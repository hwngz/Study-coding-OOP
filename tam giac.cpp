#include<bits/stdc++.h>
using namespace std ;

float tinhDoDai(int x1, int y1, int x2, int y2)
{
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
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
float DT()
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
};
int main(){
	TAMGIAC t;
    t.Set();
    t.Print();
    cout << "dien tich tam giac: " << t.DT() << endl;
    return 0;
}
