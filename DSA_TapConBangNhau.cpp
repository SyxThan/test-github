#include <iostream>  
#include <vector>  

using namespace std;  
int n,sum;
int a[1005];
bool stop;

void Try(int i, int s){
    if(i == n || stop || s == sum/2){
        if (s == sum/2) stop = true;
        return;
    }
    if (s + a[i] <= sum / 2){
        Try(i+1,s + a[i]);
    }
    Try(i+1,s);
}


int main() {  
    int T;
    cin >> T;
    
    while (T--) {  
        cin >> n; 
        sum = 0;
        for (int i = 0; i < n; ++i) {  
            cin >> a[i];  
            sum += a[i];
        }  
        stop = false;
        if(sum % 2 == 0){
            Try(0,0);
        }
        
        if (stop) {  
            cout << "YES" << endl; 
        } else {  
            cout << "NO" << endl; 
        }  
    }  
    
    return 0;  
}  