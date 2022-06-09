#include<bits/stdc++.h>
using namespace std;
int findMaxProfit(vector<int> prices) {
    // Write your code here
  int n=prices.size(), maxProfit=0,minPrice=prices.at(0);
for(int j=1; j<n;j++) {
  if(prices.at(j)-minPrice>maxProfit)
    maxProfit=prices.at(j)-minPrice;
  if(prices.at(j)<minPrice)
    minPrice=prices.at(j);
} 
  return maxProfit;
}
int main()
{
  int i,n;
  cin>>n;
  vector<int> arr(n);
  for(i=0;i<n;i++)
    cin>>arr[i];
  cout<<findMaxProfit(arr);
  return 0;
}
