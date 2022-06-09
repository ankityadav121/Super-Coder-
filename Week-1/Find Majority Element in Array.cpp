#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int getMajorityElement(int array[], int size) {
  //Enter Your Code
   int i, candidate = -1, votes = 0;
    // Finding majority candidate
    for (i = 0; i < size; i++) {
        if (votes == 0) {
            candidate =  array[i];
            votes = 1;
        }
        else {
            if ( array[i] == candidate)
                votes++;
            else
                votes--;
        }
    }
    int count = 0;
    // Checking if majority candidate occurs more than n/2
    // times
    for (i = 0; i < size; i++) {
        if ( array[i] == candidate)
            count++;
    }
    if (count > size / 2)
        return candidate;
    return -1;
}
int main(){
  int i, size;
  cin>>size;
  int array[size]; 
  for(i = 0; i < size; i++)
    cin>>array[i];
  cout<<getMajorityElement(array, size);
  return 0;
}
