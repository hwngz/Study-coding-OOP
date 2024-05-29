#include<iostream>
using namespace std;

class DATHUC {
private:
 int N;
 int Data[100];
public: 
 DATHUC() {
  N = 0;
  for (int i = 0; i <= N; i++) {
   Data[i] = 0;
  }
 }
 DATHUC(int a, int arr[]) {
  N = a;
  for (int i = 0; i <= N; i++) {
   Data[i] = arr[i];
  }
 }
 ~DATHUC() {

 }
 void Input() { 
  cout << "\nNhap luy thua cao nhat cua x: ";
  cin >> N;
  cout << "\nNhap cac he so cua x (Theo thu tu tu bac 0 den bac N) ";
  for (int i = 0; i <= N; i++) {
   cout << "\nNhap he so x^" << i << " : ";
   cin >> Data[i];
  }
 }

 int DemHeSoKhac0() {
  int dem = 0;
  for (int i = 0; i <= N; i++) {
   if (Data[i] != 0)
    dem++;
  }
  return dem;
 }

 void Print() {
  int count = DemHeSoKhac0();
  int dem = 0;
  cout << "\nDa thuc in ra la: ";
  for (int i = N; i >= 0; i--) {
   if (Data[i] != 0) {
    dem++;
    if (dem < count) {
     cout << Data[i] << "x^" << i << " + ";
    }
    else {
     cout << Data[i] << "x^" << i ;
    }
   }
  }
 }

 int Max(int a, int b) {
  if (a > b)
   return a;
  return b;
 }

 DATHUC operator + (DATHUC A) {
  DATHUC result;
  result.N = Max(N, A.N);
  if (result.N == N) {
   for (int i = A.N + 1; i <= result.N; i++) {
    A.Data[i] = 0;
   }
  }
  else if(result.N == A.N){
   for (int i = N + 1; i <= result.N; i++) {
    Data[i] = 0;
   }
  }
  for (int i = 0; i <= result.N; i++) {
   result.Data[i] = Data[i] + A.Data[i];
  }
  return result;
 }
 DATHUC operator - (DATHUC A) {
  DATHUC result;
  result.N = Max(N, A.N);
  if (result.N == N) {
   for (int i = A.N + 1; i <= result.N; i++) {
    A.Data[i] = 0;
   }
  }
  else if (result.N == A.N) {
   for (int i = N + 1; i <= result.N; i++) {
    Data[i] = 0;
   }
  }
  for (int i = 0; i <= result.N; i++) {
   result.Data[i] = Data[i] - A.Data[i];
  }
  return result;
 }
 DATHUC operator ++ () {
  for (int i = 0; i <= N; i++) {
   Data[i]++;
  }
  return *this;
 }
 DATHUC operator --() {
  for (int i = 0; i <= N; i++) {
   Data[i]--;
  }
  return *this;
 }

 int& operator[](int i) {
  return Data[i];
 }
};

int main() {
 cout << "\nNHAP DA THUC 1";
 DATHUC A;
 A.Input();
 A.Print();
 cout << "\nNHAP DA THUC 2";
 DATHUC B;
 B.Input();
 B.Print();
 cout << "\nTONG 2 DA THUC: ";
 DATHUC C = A + B;
 C.Print();
 cout << "\nHIEU 2 DA THUC \n";
 DATHUC D = A - B;
 D.Print();
 cout << "\nDA THUC 1 SAU KHI NANG CAC HE SO LEN 1";
 A.operator++();
 A.Print();
 cout << "\nDA THUC 2 SAU KHI GIAM CAC HE SO XUONG 1";
 B.operator--();
 B.Print();
 cout << "\nTrich he so thanh phan (DA THUC 1) cua: ";
 int x;
 cin >> x;
 cout << "\nKet qua: " << A[x];
 return 0;
}
