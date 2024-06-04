#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main()
{   
    int Scnt;
        cin >> Scnt;
        int ans = 0;
        while(Scnt--){
            string s; 
            cin >> s;
            if(s == "X++" || s=="++X") ans++;
            else ans--;
        }
        cout << ans << endl;
    return 0;
}
