#include <iostream>
using namespace std;

int main()
{
    // Traverse Array using loop
     int orange[7] = {3, 4, 12, 7, 8, 50};
    for (int i = 0; i < 7; i += 1){
        cout << orange[i];
        // To ensure that a comma (",") is printed after each element except the last one
        if (i != 6){
            cout << ",";
        }
    }

     // Update Oparation
     orange[2] = 13;


    cout<<endl<<endl;

    // Insert Oparation 
    int apple[5];
    for(int i=0;i<5;i+=1){
        cout<<"Insert ["<<i<<"] number: ";
        cin>>apple[i];
    }

    for(int i=0;i<5;i+=1){
        cout<<apple[i]<<" ";
    }

    return 0;
}