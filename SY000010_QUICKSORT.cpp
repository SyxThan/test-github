#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;
void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}
int partition(int arr[], int l , int h){
	int x = arr[h]; // x chinh la chot
	int i = (l - 1); // i lay vi tri nho hon h
	for(int j = l;j <= h - 1;j++){ // duyet tu l den h - 1
		if(arr[j] <= x){ // neu arr[j] <= chot 
			i++; // tang i len 1 dv
			swap(&arr[i],&arr[j]); // doi cho arr[i] va arr[j]
			
		}
	}
	swap(&arr[i+1],&arr[h]);  // doi cho arr[i + 1] va arr[h]
	return (i + 1); // day la vi tri cua chot 
}

void quickSort(int arr[], int l, int h){
	if(l < h){
		int p = partition(arr,l,h); // tim vi tri cua chot
		quickSort(arr,l,p - 1); // tri nua ben trai
		quickSort(arr,p+1,h); // tri phai
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	quickSort(a,0,n-1);
	for(int i = 0;i < n;i++){
		cout << a[i] << " ";
	}

}

