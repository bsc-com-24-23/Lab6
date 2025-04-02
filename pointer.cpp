#include <iostream>
using namespace std;

int main()
{
    int FirstValue;
    int secondvalue;

    //null pointers
    int* pPointer = nullptr;

    //assigning pointer with address of new pointer
    pPointer = &FirstValue;
    *pPointer = 6;

    //assigning assigning pointer to address of secondvalue

    pPointer = &secondvalue;
    *pPointer = 8;
    //outputting first value
    cout << "First value: "<< FirstValue<< endl;

    //outputting second value
    cout << "Second value: "<< secondvalue<< endl;



return 0;
}