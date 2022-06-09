#include<bits/stdc++.h>
using namespace std;
// Print the answer of each query, separated by space
void solveQueries(int N, int R, int arr[], int Q, int queries[]) {
  int temp[N];
  // Write your code here
   for (int i = 0; i < N; i++)
 	   temp[i] = arr[(i+R)%N];
  for(int i=0;i<Q;i++){
   cout<<temp[queries[i]]<<" ";
  }
}
int main()
{
  int i, r, k, size = 0, size1 = 0;
  cin>>size>>r;
  int a[size];
  for( i = 0; i < size; i++) 
    cin>>a[i];

  cin>>size1;
  int b[size1];
  for( i = 0; i < size1; i++) 
    cin>>b[i];

  solveQueries(size, r, a, size1, b);

  return 0;
}
