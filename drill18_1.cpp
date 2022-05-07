//CH18 Drill1 ARRAY
//CH18 Drill2


#include "std_lib_facilities.h"

int ga[10] ={1,2,4,8,16,32,64,128,256,512};      //chapter 18, drill 1

void f(int arr[], int n)
{
    int la[10];                     //3(a)
    for (int i = 0;i < 10;i++)      //3(b)
        la[i] = ga[i];

    for (int i = 0;i < 10;i++)            //3(c)
        cout<<la[i]<<" ";

    int* p = new int[n];             //3(d)

    for (int i = 0;i < 10;i++)          //3(e)
        p[i] = arr[i];
    cout << endl;
    for (int i = 0;i < 10;i++)          //3(f)
        cout << p[i] << " ";
    cout << endl;
    delete[] p;                   //3(g)
}
int main() {
    f(ga, 10);               //4(a);
    int aa[10] = {1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};     //4(b)
    f(aa, 10);        //4(c)


    return 0;
}


