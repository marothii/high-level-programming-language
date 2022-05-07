//chapter 18 drill 2

#include "std_lib_facilities.h"

vector<int> gv ={1,2,4,8,16,32,64,128,256,512};

void f(vector <int> v)//  
{
    vector <int> lv;//  3(a)
    for (int i = 0;i < v.size();i++)      // 3(b)
        lv.push_back(gv[i]);
    for (int i = 0;i < lv.size();i++)     //3(c)
        cout<<lv[i]<<" ";
    cout << endl;

    vector <int> lv2;    //3(d)
    for (int i = 0;i < v.size();i++)
        lv2.push_back( v[i]);
    for (int i = 0;i < lv2.size();i++)    //3(e)
        cout << lv2[i] << " ";
    cout << endl;
}
int main()
{
    f(gv);        //4(a)
    vector <int> vv = {1,2,6,24,120,720,5040,40320,362880,3628800};   //4(b)
    f(vv);       // 4(c)


    return 0;
}


