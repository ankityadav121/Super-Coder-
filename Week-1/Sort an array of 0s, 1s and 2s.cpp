#include<iostream>
using namespace std;
void sorting012Array(int a[], int n){
	// Write your code here  
  int i=0,j=0,k=n-1,temp;
  while(j<=k){
    if(a[j]==0){
      swap(a[i],a[j]);
      i++;
      j++;
    }
    else if(a[j]==1){
      j++;
    }
    else if(a[j]==2){
      swap(a[j],a[k]);
      k--;
    }
  }
}
int main()
{
  int a[50];
  int i,n;
  cin>>n;
  for(i=0;i<n;i++)
    cin>>a[i];
  sorting012Array(a,n);
  for(i=0;i<n;i++)
    cout<<a[i]<<" ";
  return 0;
}
