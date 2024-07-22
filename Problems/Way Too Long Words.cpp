#include <iostream>
using namespace std;

int main() 
{
  
    int t;
    cin >> t;
    while(t--){
      string s;
      cin >> s;
      int n = s.size();
      if(n > 10){
        string total = to_string(n - 2);
        s = s[0] + total + s[n-1];
      }
      cout << s << endl;
    }
    return 0;
}