#include <iostream>
using namespace std;


int linearSearch(int arr[],int arrLength,int target){
    bool isFound = false;
    int steps=0;
    for (int i = 0; i < arrLength; i++)
    {
        steps++;
       if(target==arr[i]){
        cout << "Steps taken by Linear: " << steps << endl;
        isFound = true;
        return i;
       }
    }
   if(!isFound){
    cout << "Steps taken by Linear: " << steps << endl;
    return -1;
   }
   
}

int main()
{

    int arr[] = {-5, -2, 0, 1, 2, 4, 6, 9, 10, 12, 15};
    int arrLength= sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"enter your number: ";
    cin>>target;
    int result =  linearSearch(arr,arrLength,target);
    if(result != -1)
     cout<<" found index at"<<result;
    else
        cout << "Element not found!" << endl;

    return 0;
}