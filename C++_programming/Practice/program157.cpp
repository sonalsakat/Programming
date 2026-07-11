#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        //default constructor
        ArrayX()
        {

        }

        //parameterised constructor
        ArrayX(int X)
        {

        }
};



int main()
{
    ArrayX aobj1;                       // default
    ArrayX aobj2(5);                    // parameterized                       

    cout<<sizeof(aobj1)<<endl;           // 16 bytes
    
    


    return 0;
}