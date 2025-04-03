#include <iostream>
using namespace std;

int main()
{ 
      //declaring array of intergers
      int intergerArrays[5];

      int* pPointer = nullptr;

      //assigning a value to first element
      pPointer = intergerArrays;
      *pPointer = 5; 

      //assigning value to second element

      pPointer++;
      *pPointer = 7;

      //Assigning value to third element
      pPointer = &intergerArrays[2];
      *pPointer = 2;

      //Assigning value to 4th value

      pPointer = &intergerArrays[3];
      *pPointer = 12;
      
      //Assigning address to 5th element
      pPointer = intergerArrays + 4;
      *pPointer = 17;

      //iterating 
      for (int i = 0; i < 5; i++)
      {
        cout << intergerArrays[i]<< " ";
      }
      

    return 0;
}