// #CH17 PART2

#include "std_lib_facilities.h"
using namespace std;

ostream& print_array(ostream& os, int* a)
{
    for(int i = 0; i < 10; ++i)
    {
        os << a[i] << '\n';
    }
    return os;
}
ostream& print_array(ostream& os, int* a, int n)
{
    for(int i = 0; i < n; ++i)
    {
        os << a[i] << '\n';
    }
    return os;
}
ostream& print_vector(ostream& os, vector<int>& vec)
{
    for(int v: vec)
    {
        os<< v<<endl;
    }
}
int main()
{
    int num= 7;
    int* p1= &num;         //    q1

    cout<<"p1 address:   "<<p1<<"  p1 value: "<<*p1<<endl; // p2


    // p3 below
    int* p2= new int[7];

    for(int i=0; i<7;i++)
    {
        p2[i]=i;
    }
    cout<<"p2 address: "<<p2<<"  p2 value: "<<*p2<<endl; //4. Print out the value of p2 and of the array it points to.



    int*p3=p2;     // q5


    p2=p1;       // q6
    p2=p3;      // q7


    // q8 below
    cout<<"p1 address:   "<<p1<<"  p1 value: "<<*p1<<endl;
    cout<<"p2 address:   "<<p2<<"  p2 value: "<<*p2<<endl;

    // q9 below
    delete[]p1;
    delete[]p2;
    delete[]p3;

    p1= new int[10];           // q10
    for(int i=0;i<10;i++)
    {
        p1[i]=i;
    }

    p2= new int[10]; //  q11

    for(int i=0;i<10;i++)    // q12
    {
        p2[i]=p1[i];
    }
    print_array(cout,p2);

    delete[]p1;
    delete[]p2;

    // q13  Repeat 10–12 using a vector rather than an array.
    vector<int> p11{1,2,3,4,5,6,7,8,9,10};
    vector<int> p22= p11;

    print_vector(cout,p22);
}
