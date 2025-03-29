#include <iostream>
using namespace std;

void merger(int a[], int l, int m, int r){
  // chia 2 nua 
  int n1 = m - l + 1;
  int n2 = r - m;
  // khai bao mang L[], R[]
  int L[n1], R[n2];
  // sao chep cac phan tu vao mang L, R;
  for(int i = 0;i < n1;i++) L[i] = a[l+i];
  for(int i = 0;i < n2;i++) R[i] = a[m+1+i];
  // Tron 2 mang con vao mang chinh
  int i = 0, j = 0,k = l;
  while(i < n1 && j < n2){
    if(L[i] < R[j]){
      a[k++] = L[i++];
    }
    else a[k++] = R[j++];
  }
  // Sao chep not phan con lai
  while(i < n1) a[k++] = L[i++];
  while(j < n2) a[k++] = R[j++];

}

void mergerSort(int a[], int l, int r){
  if(l < r){
    int m = (l+r)/2;
    mergerSort(a, l, m);  // Sap xep nua trai 
    mergerSort(a, m+1, r);  // Sap xep nua phai
    merger(a, l, m, r); // Gop hai nua da sap xep
  }
}


int main() 
{
  int n;
  int a[100000];
  cin >> n;
  for(int i = 0;i < n;i++) cin >> a[i];
  mergerSort(a,0,n - 1);
  for(int i = 0;i < n;i++) cout << a[i] <<  " ";
}