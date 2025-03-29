#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int final = 0;
        int i = s.length() - 1;
        while (i >= 0 && s[i] == '1')
        {
            s[i] = '0';
            i--;
        }
        if (i < 0)
        {
            final = 1;
        }
        else if (s[i] == '0')
        {
            s[i] = '1';
        }

        if (final == 1)
        {
           for(int i = 0; i < s.length(); i++){
               cout << "0";
           }
        }
        else
        {
            cout << s;
        }
        cout << endl;
    }
}