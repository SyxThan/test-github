#include<bits/stdc++.h>
#define ll long long
#define limit 1000000
using namespace std;

int longString(string str){
	 int ans = INT_MIN;
     for (int i = 0; i < str.size(); i++)
     {
         int left = i, right = i;
         while (left >= 0 && right < str.size() && str[left] == str[right])
         {
             if (ans < (right - left + 1))
             {
                 ans = right - left + 1;
             }
             left--;
             right++;
         }
         left = i, right = i + 1;
         while (left >= 0 && right < str.size() && str[left] == str[right])
         {
             if (ans < (right - left + 1))
             {
                 ans = right - left + 1;
             }
             left--;
             right++;
         }
     }
     return ans;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << longString(s) << endl;
	}

}

