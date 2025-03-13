#include <iostream>
using namespace std;

int main() {

    // Declaring 2D array
     int apple[2][3]; // here [2] is row and [3] is column represents (2x3 array)

    // Row (1)
    apple[0][0]= 10;
    apple[0][1]= 20;
    apple[0][2]= 30;
    // Row (2)
    apple[1][0]= 40;
    apple[1][1]= 50;
    apple[1][2]= 60;
   
    // Output loop
    cout << "\nThe 2D array is:\n";
    for(int i= 0; i<2; i+=1){
        for(int j =0; j<3;j++ ){
           cout<<apple[i][j]<<" ";
        }
    }


    int orange[3][3]; //Row 3 coloumn 3 (2x3 array)
    cout << "\nPlease input your 2D Array (2 rows, 3 columns): "<<endl;
    for (int i = 0; i < 3; i+=1) // (i) represents the row 
    {
        for (int j = 0; j < 3; j++) // (j) represents the colums
        {
            cout << "Index at [" << i << "][" << j << "]: ";
            cin>>orange[i][j];
        }
    }
    // Output loop
    cout << "\nThe 2D array is:\n";
    for(int i= 0; i<3; i+=1){
        for(int j =0; j<3;j++ ){
            cout<<orange[i][j]<<" ";
        }
    }

    
    return 0;
}