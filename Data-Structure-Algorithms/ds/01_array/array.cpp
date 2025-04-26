#include <iostream>
using namespace std;

int main()
{
    // Traverse Array using loop
    int orange[7] = {3, 4, 12, 7, 8, 50};

    // Size of Array
    int arrLength = sizeof(orange) / sizeof(orange[0]); // Divide total size / size of one element
    cout << "Array Length: " << arrLength;

    cout<<endl<<"array element: ";
    for (int i = 0; i < arrLength; i += 1)
    {
        cout << orange[i];
        // To ensure that a comma (",") is printed after each element except the last one one
        if (i != 6)
        {
            cout << ",";
        }
    }

    // Update Oparation && printing
    orange[2] = 13;
    cout<<endl<<"Update array element: ";
    for (int i = 0; i < arrLength; i += 1)
    {
        cout<< orange[i];
        if (i != 6)
        {
            cout << ",";
        }
    }
    cout << endl
         << endl;

    // Searching the element
    cout << "Find The Number: ";
    int findNumber;
    bool isFound = false;
    cin >> findNumber;
    for (int i = 0; i < arrLength; i++)
    {
        if (findNumber == orange[i])
        {
            cout << "your number is find the index[" << i << "]: " << findNumber
                 << endl;
            isFound = true;
            break;
        }
    }
    if (!isFound)
    {
        cout << "Number not found!!" << endl;
    }

    // Insert Oparation
    int apple[5];
    cout << "Please enter 5 integer numbers:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Insert number at index [" << i << "]: ";
        cin >> apple[i];
    }
    cout << "\nYou enter the number: ";
    for (int i = 0; i < 5; i++) {
        cout << apple[i] << " ";
    }
    cout << endl;

    return 0;
}