#include<bits/stdc++.h>
using namespace std;


//sap xep tang dan
int main(){
    int n = 0;
    int a[1000];
    while (cin>> a[n])
        n++;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
