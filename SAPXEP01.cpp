//sap xep nua day truoc tang dan nua day sau giam dan

#include<bits/stdc++.h>
using namespace std;

void tangdan(int pos, int a[])
{
    for (int i = 1; i < pos; i++)
    {
        for (int j = i+1; j <= pos ; j++)
        {
            if(a[i] > a[j])
            {
                int tmp;
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
}

void giamdan(int pos,int a[], int n)
{
    for (int i = pos; i < n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            if(a[i] < a[j])
            {
                int tmp;
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    // int *a;
    // a = new int[n];
    
    for (int i = 1; i<=n;i++)
    {
        cin >> a[i];
    }
    
    int pos = n/2;
    tangdan(pos,a);
    
    if(n%2==0)
        giamdan(pos+1,a,n);
    else giamdan(pos+2,a,n);
    
    for(int i =1;i<=n;i++)
    {
        cout << a[i]<<" ";
    }
}
