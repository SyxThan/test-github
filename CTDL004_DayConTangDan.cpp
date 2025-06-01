    #include<bits/stdc++.h>

    using namespace std;

    int a[1000], n, k, final = 0;
    int b[1000];
    void ktao(){
        for(int i = 0;i < k;i++){
            a[i] = i;
        }
    }
    void sinh(){
        int i = k - 1;
        while(i >= 0 && a[i] == n - k + i){
            i--;
        }
        if(i == -1) final = 1;
        else {
            a[i]++;
            for(int j = i + 1;j < k ;j++){
                a[j] = a[j - 1] + 1;
            }
        }
    }
    bool check()
    {
        for (int i = 1; i < k; i++)
        {
            if (b[a[i]] < b[a[i - 1]])
                return false;
        }
        return true;
    }

    int main(){
            cin >> n >> k;
            for(int i = 0;i < n;i++) cin >> b[i];
            final = 0;
            ktao();
            int cnt = 0;
            while(final == 0){
                if(check()){
                    cnt++;
                }
                sinh();
            }
            cout << cnt << endl;
    }