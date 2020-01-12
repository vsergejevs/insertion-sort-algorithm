#include <iostream>
#include <stdlib.h>     //srand, rand
#include <time.h>       //time
using namespace std;


int randArray [10]; //declare empty array which will hold the random numbers

int main()
{
    srand (time(nullptr));  //initialize random seed

    int randArrayInt; //will hold generated random number

    cout << "Array will hold " << 10 << " integers. \n" << endl;

    cout << "[ ";
    for (int i = 0; i < 10; i++)
    {
        randArrayInt = rand() % 10 + 1; // generate random number for the array
        randArray[i] = randArrayInt;   // insert into array position the generated random number
        cout << randArray[i] << ", ";  // print out array element at current loop position
    }
    cout << "] ";
    //for j = 2 to A.length

    return 0;
}