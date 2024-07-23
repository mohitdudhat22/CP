#include <bits/stdc++.h>
using namespace std;

int main() 
{
  
  vector<vector<int>> nums(5, vector<int>(5, 0));
  int indexOneI, indexOneJ;
  for(int i = 0;i < 5; i++){
    for(int j = 0;j < 5; j++){
      cin >> nums[i][j];
      if(nums[i][j] == 1){
        indexOneI = i;
        indexOneJ = j;
      }
    }
  }
  int ans = abs(2-indexOneI) + abs(2-indexOneJ);
  cout << ans;
  return 0;
}