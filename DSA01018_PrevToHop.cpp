#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int n,k,final;
int a[10001];


void init(){
	for(int i = 1;i <= k;i++) cin >> a[i];
}
void prev_sinh(){
	int i = k;
	while(i >= 1 && a[i] == a[i-1] + 1) i--;
	if (i != 0) a[i]--;
    for (int j = i + 1; j <= k; ++j) {
        a[j] = n - k + j;
    }
}

void in(){
	for(int i = 1;i <= k;i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		init();
		prev_sinh();
		in();
	}

}

