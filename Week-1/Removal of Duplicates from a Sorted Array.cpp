#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

void removeDuplicates(int *arr, int *size)
{ 
  if(*size == 0 || *size ==1)
  {
  }
  else if(*size ==2)
  {
    if(arr[0] == arr[1])
      *size = 1;
  }
  else
  {
    int i=0,j=1;
    while(j< *size)
    {
      while(arr[j]==arr[j-1])
        j++;
      arr[++i] = arr[j++];
    }
    *size = i;
  }
}

int main()
{
    int i, size = 0;
    scanf("%d", &size);

    int arr[size];
    for(i = 0; i < size; i++) 
        scanf("%d", &arr[i]);

    removeDuplicates(arr, &size);
    for (i = 0; i < size; i++) 
        printf("%d\n", arr[i]);
  
    return 0;
}
