#include <iostream>
using namespace std;


int main() {
    int arr[5]={5,3,7,10,2};
    int arrLength = 5;
    int temp,hole;
    for (int i = 1; i < arrLength; i+=1)
    {
        temp=arr[i];
        hole = i;

       while (hole>0 && arr[hole-1]>temp)
       {
         arr[hole]= arr[hole-1];
         hole--;
       }
       arr[hole]=temp;  
    }
    cout <<endl<< "Sorted array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}