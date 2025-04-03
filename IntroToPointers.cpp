#include <iostream>
using namespace std;

int main()
{
      //assigning null pointer
    int* pPointer = nullptr;
    
    int variable = 5;

    //assigning address to variable
    pPointer = &variable;
      
    //outputing variable
    cout << "Variable: " << variable<<endl;
     
    //address of variable
    cout << "&variable: "<< &variable<< endl;

    //address assigned to pointer
    cout << "pPointer: "<< pPointer<< endl;

    //outputting address assigned to pointer
    cout <<"Address of pointer: "<<&pPointer<< endl;

    return 0;

}