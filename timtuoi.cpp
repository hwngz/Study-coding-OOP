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
