#include<bits/stdc++.h>
using namespace std;
vector<int> findTheLeaders(vector<int> arr) {
  int n= arr.size();
   int leader = arr.at(n-1);
  vector<int> res;
  res.push_back(leader);
  for(int i=n-1; i>=0; i--)
  {
    if(arr.at(i) > leader)
    {
      leader = arr.at(i);
      res.push_back(leader);
    }
  }
  reverse(res.begin(), res.end());
  return res;
}
int main(){
  int i,n;
  cin>>n;
  vector<int> a(n);
  for(i=0; i<n; i++)
    cin>>a[i];
  
  vector<int> res;
  res = findTheLeaders(a);
  for(i=0; i<res.size(); i++)
      cout<<res[i]<<" ";
  
  return 0;
}
