#include<bits/stdc++.h>
using namespace std;

class TaiKhoan{
        float sodu;
        public:
        virtual int& soThang() = 0;
        virtual bool denHan() = 0;
        TaiKhoan()
        {
            sodu = 0;
        }
        void nhap()
        {
            cin >> sodu;
        }
        float baosodu()
        {
            return sodu;
        }
        void naptien(float sotien)
        {
            sodu += sotien;
            soThang() = 0;
        }
        void ruttien(float sotien)
        {
            if(sotien<=sodu)
             {   
                if(denHan())
                {
                    sodu-=sotien;
                    soThang() = 0;
                }
                else
                    cout<<"chua den han\n";
             }
            else 
                cout << "khong du tien\n";
        }
};

class TKtietkiem: public TaiKhoan
{
    int kyhan;
    float laisuat;
    int sothang;
    public:
    TKtietkiem(){
        kyhan = 0;
        laisuat = 0;
        sothang = 0;
    }
    void nhap()
    {
        TaiKhoan :: nhap();
        cin >> kyhan >> laisuat >> sothang;
    }
    int& soThang()
    {
        return sothang;
    }
    bool denHan()
    {
        return sothang>=kyhan;
    }
    void tangSothang(int a)
    {
        sothang += a;
    }
    void xuat()
    {
        cout << baosodu() << endl;
        cout << kyhan << endl;
        cout << laisuat << endl;
        cout << sothang;
    }
};

int main() {
    TKtietkiem t;
    t.nhap();
    //t.naptien(20000);
    //t.xuat();
    t.ruttien(10000);
    t.xuat();
    return 0;
}
