#include <bits/stdc++.h>
using namespace std;

vector<int> reduceArray(vector<int> arr) {
  // Write your code here
  int n=arr.size();
  int remainingSticks = n;
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++)
    {
        cout << remainingSticks <<endl;
        int count = 1;
        while (i+1 < n &&arr[i] ==arr[i+1])
        {
            count++;
            i++;
        }
        remainingSticks -= count;
    }
}
int main()
{
  int n = 0, i;
  cin >> n;

  vector<int> arr(n);
  for(i = 0; i < n; i++) 
    cin>>arr[i];

  vector<int> res;
  res = reduceArray(arr);
  for (i = 0; i < res.size(); i++) 
    cout<<res[i]<<endl;

  return 0;
}
