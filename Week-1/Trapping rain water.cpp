#include<bits/stdc++.h>
using namespace std;
int totalWater(int a[], int n) {
	// Write your code here  
   int left[n];
    int right[n];
    int water = 0;
    left[0] = a[0];
    for (int i = 1; i < n; i++)
        left[i] = max(left[i - 1], a[i]);
    right[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
        right[i] = max(right[i + 1],a[i]);
    for (int i = 0; i < n; i++)
        water += min(left[i], right[i]) - a[i]; 
    return water; 
}
int main(){
  int i,n, k;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
    cin>>a[i];
  k = totalWater(a, n);
  cout<<k;
  return 0;
}
