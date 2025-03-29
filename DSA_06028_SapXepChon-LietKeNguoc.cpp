#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 1;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<vector<int>> b;
        for (int &i : a)
            cin >> i;
        

        for(int i = 0;i < n - 1;i++){
            int min_idx = i;
            for(int j = i + 1;j < n;j++){
                if(a[j] < a[min_idx]) min_idx = j;
            }
            swap(a[min_idx],a[i]);
            b.push_back(a);
        }





        for(int i = b.size() - 1;i >= 0;i--){
            cout << "Buoc " << i + 1 << ":";
            for(int j = 0; j < n;j++){
                cout << " " << b[i][j];
            }
            cout << endl;
        }

        
    }
}