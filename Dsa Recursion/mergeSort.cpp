// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


void merge(int *arr,int s, int e ){
    
   int mid = s + (e - s) / 2;
    
    int len1 = mid-s+1;
    int len2 = e-mid;
    
    cout<<len1;
    cout<<len2;
}


void  mergeSort(int *arr,int s,int e){
    
    // base  case 
    if(s>=e){
        return ;
    }
    
  int mid = s + (e - s) / 2;
    // left and right part me devided krna 
     mergeSort(arr,s,mid-1);
     mergeSort(arr,mid,e);
    
    // merge kr do inko 
    merge(arr,s,e);
    
}



int main() {
    // Write C++ code here
   int arr[5] = {2,1,7,9,3};
   int n = 5;
   
   mergeSort(arr,0,n-1);

    return 0;
}