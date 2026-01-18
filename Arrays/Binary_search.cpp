
// Problem: Binary Search
// Approach: Iterative
// Time Complexity: O(log n)
// Space Complexity: O(1)


#include <iostream>
using namespace std;

int binarysearch(int arr[],int n,int key){
 int start = 0, end = n-1;

while(start<=end){
int mid = start +(end - start)/2;
 if(arr[mid]==key){
    return mid;
 }
 else if(arr[mid]< key){
    start = mid + 1;
 }
 else{
    end =  mid - 1;
 }
 }
 return -1;
}

int main(){
    int arr[] ={1,2,3,5,8,11};
    int n =sizeof(arr)/sizeof(int);
    int key = 8; 
    
   cout<< binarysearch(arr,n,key);
   return 0;
 
    }
