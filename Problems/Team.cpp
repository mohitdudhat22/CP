#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
   int n;
   int cnt = 0;
   cin >> n;
   while(n--){
     int f,s,t;
     cin >> f >> s >> t;
     int total = f + s + t;
    if(total >= 2) cnt++;
   }
   cout << cnt;
    return 0;
}