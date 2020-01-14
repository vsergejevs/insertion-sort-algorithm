#include <iostream>
#include <stdlib.h>     //srand, rand
#include <time.h>       //time
using namespace std;


int createRandomArray()
{
    int randArray [10]; //declare empty array which will hold the random numbers

    srand (time(nullptr));  //initialize random seed

    int randArrayInt; //will hold generated random number

    cout << "Array will hold " << 10 << " integers. \n" << endl;

    cout << "[ ";
    for (int i = 0; i < 10; i++)
    {
        randArrayInt = rand() % 10 + 1; // generate random number for the array
        randArray[i] = randArrayInt;   // insert into array position the generated random number
        cout << randArray[i] << " ";  // print out array element at current loop position
    }
    cout << "] ";
    return randArray;
}

int main() {

    createRandomArray();


//    int arr[] = {12, 11, 13, 5, 6};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    int l;
//    cout << "int n is: " << n << endl;
//    for (l = 0; l < n; l++)
//        cout << arr[l] << " ";
//    cout << endl;
//
//    int i, key, j;
//    for (i = 1; i < n; i++) {
//        key = arr[i];
//        cout << "key holds a value of " << key << endl;
//        j = i - 1;
//        cout << "j holds a value of " << j << endl;
//        cout << "arr[j] is " << arr[j] << endl;
//
//        /* Move elements of arr[0..i-1], that are
//        greater than key, to one position ahead
//        of their current position */
//        while (j >= 0 && arr[j] > key) {
//            arr[j + 1] = arr[j];
//            j = j - 1;
//            cout << "after j = j - 1; j is now " << j << endl;
//        }
//        arr[j + 1] = key;
//        cout << "after arr[j + 1] = key; arr[j + 1] is now " << arr[j + 1] << endl;
//
//    for (l = 0; l < n; l++)
//        cout << arr[l] << " ";
//    cout << endl;
 //   }

return 0;
}