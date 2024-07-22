#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int n;
   int k;
   int cnt = 0;
   cin >> n;
   vector<int> score(n);
   cin >> k;
   for (int i = 0; i < n; ++i) cin >> score[i];
    
   int kthScore = score[k-1];
   for(auto it:score) if(it >= kthScore && it > 0) cnt++;
   cout << cnt << endl;
   
    return 0;
}