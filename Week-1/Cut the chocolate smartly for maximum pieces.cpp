#include <bits/stdc++.h>
using namespace std;
long maxPieces(long k) {
    // Write your code here
  long res,n;
  n=k/2;
  if(k%2==0){
      res=n*n;
  }
  else{
      res=n*(n+1);
  }
  return res;
}

int main() {
    int t;
    cin >> t;
    
    while(t--)
    {
        int k;
        cin >> k;
        cout << maxPieces(k) << endl;
    }

    return 0;
}
