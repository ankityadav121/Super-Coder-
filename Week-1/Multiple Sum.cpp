#include <iostream>
using namespace std;

long long int multipleSum(int x){
  // Write your code here
   long long n1,n2,n3,res=0;
  n1=x/3,n2=x/5;n3=x/15;
  res+=(n1*(n1+1))/2*3;
    res+=(n2*(n2+1))/2*5;
    res-=(n3*(n3+1))/2*15;
  return res;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        cout << multipleSum(x) << "\n";
    }
    return 0;
}
