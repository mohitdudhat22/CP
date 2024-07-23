#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int n,m;
   cin >> n >> m;
   int area = n*m;
   if(area%2 == 0){
     cout << area/2;
   }else{
     cout << (area-1)/2;
   }
    return 0;
}