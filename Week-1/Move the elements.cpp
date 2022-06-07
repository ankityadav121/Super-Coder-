#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
void moveElements(int arr[], int n){ 
  // Write your code here
    int temp[n], j=0;
    for(int i=0; i<n; i++)
        if(arr[i] >= 0)
            temp[j++] = arr[i];
    for(int i=0; i<n; i++)
        if(arr[i] < 0)
            temp[j++] = arr[i];
    for(int i=0; i<n; i++)
        arr[i] = temp[i];
}
int main()
{
    int i, size = 0;
   cin>>size;

    int arr[size];
    for( i = 0; i < size; i++) 
        cin>>arr[i];

    moveElements(arr, size);
    for (i = 0; i < size; i++) 
        cout<< arr[i]<<endl;
  
    return 0;
}
