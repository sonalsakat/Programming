#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        //parameterised constructor
        ArrayX(int X)
        {
            cout<<"inside constructor\n";
            iSize = X;                          // Characteristics initialization
            Arr = new int[iSize];               // Resource allocation

        }

        // Destructor
        ~ArrayX()
        {
            cout<<"inside destructor\n";
            delete []Arr;                       // Resource deallocation 
        }
};



int main()
{
    ArrayX aobj1(5);          
    
    


    return 0;
}