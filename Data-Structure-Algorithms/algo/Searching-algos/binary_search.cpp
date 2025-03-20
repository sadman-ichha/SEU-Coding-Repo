#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {-5, -2, 0, 1, 2, 4, 6, 9, 10, 12, 15};
    int left=arr[0];
    int arrLength = sizeof(arr)/sizeof(arr[0]);
    int right= arrLength-1;
    int mid = left+right /2;
    int target = 12;
   while (left<=right)
   {
     if (arr[mid]==target)
     {
        cout<<"Found";
     }
     if (arr[mid]<target)
     {
       left=mid +1;
     }
     
     
   }
   
    
    return 0;
}