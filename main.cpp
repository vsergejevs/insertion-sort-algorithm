#include <iostream>
#include <stdlib.h>     //srand, rand
#include <time.h>       //time
using namespace std;


int arrayLength()
{
    int arrLength;
    cout << "Hi, please enter length of array you wish to create using integers:" << endl;
    cin >> arrLength;
    return arrLength;
}

int* randomArray(int arrLength) //change to pointer function to return an array
{
    int randArray [arrLength]; //declare empty static array which will hold the random numbers

    srand (time(nullptr));  //initialize random seed

    int randArrayInt; //will hold generated random number

    cout << "Array will hold " << arrLength << " integers. \n" << endl;

    cout << "[ ";
    for (int i = 0; i < arrLength; i++)
    {
        randArrayInt = rand() % 10 + 1; // generate random number for the array
        randArray[i] = randArrayInt;   // insert into array position the generated random number
        cout << randArray[i] << " ";  // print out array element at current loop position
    }
    cout << "] ";
    return randArray;
}

void insertionSort(int *arr, int arrL)
{
    cout << "insertion sort test, array length is: " << arrL << endl;
    int l;
    for (l = 0; l < arrL; l++)
        cout << arr[l] << " ";
    cout << endl;

    int i, key, j;
    for (i = 1; i < arrL; i++) {
        key = arr[i];
        cout << "key holds a value of " << key << endl;
        j = i - 1;
        cout << "j holds a value of " << j << endl;
        cout << "arr[j] is " << arr[j] << endl;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
            cout << "after j = j - 1; j is now " << j << endl;
        }
        arr[j + 1] = key;
        cout << "after arr[j + 1] = key; arr[j + 1] is now " << arr[j + 1] << endl;

    for (l = 0; l < arrL; l++)
        cout << arr[l] << " ";
    cout << endl;
       }
}


int main() {

    int a = arrayLength();
    int *p; //using pointer as dereference operator to access functions value
    p = randomArray(a);
    insertionSort(p, a);

return 0;
}