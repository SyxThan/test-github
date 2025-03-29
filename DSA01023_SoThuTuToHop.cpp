#include<bits/stdc++.h>

using namespace std;

int a[1000], n, k, b[1000], res, final;

void ktao(){
    for(int i = 1;i <= k;i++){
        cin >> b[i];
        a[i] = i;
    }
}

void sinh(){
    int i = k;
    while(i > 0 && a[i] == n - k + i) i--;
    if(i == 0) final = 0;
    else{
        a[i]++;
        for(int j = i + 1; j <= k;j++){
            a[j] = a[j - 1] + 1;
        }
    }
}

bool ktra(){
	for(int i = 1; i <= k; i ++)
		if(a[i] != b[i])
			return false;
	return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        ktao();
        int cnt = 1; 
        final = 1;
        while(final != 0){
            if(ktra()) {
                cout << cnt << endl;
                break;
            }
            cnt++;
            sinh();
        }
    }
}
