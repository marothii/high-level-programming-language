// #CH17 PART1

#include "std_lib_facilities.h"
using namespace std;

//ostream& print_array(ostream& os, int* a)     //q4
    for(int i = 0; i < 10; ++i)
    {
        os << a[i] << '\n';
    }
    return os;
}
ostream& print_array(ostream& os, int* a, int n)      //q7

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
    int* arr10 = new int[10]; //{0,1,2,3,4,5,6,7,8,9};     // q1

    for(int i =0;i<10;i++)
    {
        arr10[i]=i;
    }

    /* for(int i=0;i<10;i++)
     {
         cout<< arr[i]<<endl; // 2. Print the values of the ten ints to cout.
     } */

    print_array(cout, arr10);

    delete[] arr10; // 3. Deallocate the array (using delete[]).

    for(int i =0;i<10;i++)     //q5
    {
        arr10[i]=i+100;
    }
    print_array(cout, arr10);// it will work fine with the new values as we deallocated the older values in Q1.

    delete[] arr10;

    for(int i =0;i<11;i++)       //q6
    {
        arr10[i]=i+100;
    }
    print_array(cout, arr10);//it will work fine but the last value (11) will not be visible as pinter arr allocates 10 slots in the free-store

    delete[]arr10;

    int* arr20 = new int[20];    //q8

    for(int i =0;i<20;i++)
    {
        arr20[i]=i+100;
    }

    cout<< arr20[2];
    print_array(cout,arr20,20);

    delete[]arr20;

// q10 below

    vector<int> vec(10);

    for(int i=0;i<10;i++)
    {
        vec[i]=i;
    }

    print_vector(cout,vec);

    return 0;
}


