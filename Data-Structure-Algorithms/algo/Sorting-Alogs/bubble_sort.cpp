#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 3, 8, 1, 4};
    int length = 5;
    cout << "Unsorted array: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    // bubble sort logics 
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length-1; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout <<endl<< "Sorted array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}