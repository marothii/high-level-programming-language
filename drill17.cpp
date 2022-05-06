#include "std_lib_facilities.h"

void print_array10(ostream& os, int* a) { //<<<<<<<<<< Question 4
    for (int i = 0; i<10; ++i)
        os << a[i] << "\n";
}
void print_array(ostream& os, int* a, int n) { //<<<<<< Question 7
    for (int i = 0; i<n; ++i)
        os << a[i] << "\n";
}
void print_vector(ostream& os, vector<int> v) { //<<<<< Question 10
    for (int i = 0; i<v.size(); ++i)
        os << v[i] << "\n";
}

int main()
try {
    int* ip = new int[10]; //    <<<<<<<<<< Question 1

    for (int i = 0; i<10; ++i) //<<<<<<<<<< Question 2
        cout << ip[i] << "\n";

    delete[] ip; //              <<<<<<<<<< Question 3

    int* ip2 = new int[10];//    <<<<<<<<<< Question 5
    for (int i = 0; i<10; ++i)
        ip2[i] = 100 + i;
    print_array10(cout,ip2);
    delete[] ip2;

    int* ip3 = new int[11];//    <<<<<<<<<< Question 6
    for (int i = 0; i<11; ++i)
        ip3[i] = 100 + i;
    print_array10(cout,ip3);
    cout << ip3[10] << "\n";
    delete[] ip3;

    int* ip4 = new int[20];//    <<<<<<<<<< Question 8
    for (int i = 0; i<20; ++i)
        ip4[i] = 100 + i;
    print_array(cout,ip4,20);
    delete[] ip4;

    vector<int> v;//             <<<<<<<<<< Question 9
    for (int i = 0; i<10; ++i)
        v.push_back(100+i);
    print_vector(cout,v);

    cout << "\n";
    vector<int> v2;
    for (int i = 0; i<11; ++i)
        v2.push_back(100+i);
    print_vector(cout,v2);

    cout << "\n";
    vector<int> v3;
    for (int i = 0; i<20; ++i)
        v3.push_back(100+i);
    print_vector(cout,v3);
//*****************************************************************
    // Part 2
    int i1 = 7;//    <<<<<<<<<<<<<<<<<<<< Question 1
    int* p1 = &i1;

    cout << "p1: " << p1 << "\n";//<<<<<<<<< Question 2
    cout << "*p1: " << *p1 << "\n";

    int* p2 = new int[7];//    <<<<<<<<<<<<< Question 3
    for (int i = 0; i<7; ++i)
        p2[i] = pow(2,i);

    cout << "p2: " << p2 << "\n";//<<<<<<<<< Question 4
    cout << "print_array(cout,p2,7):\n";
    print_array(cout,p2,7);


    int* p3 = p2;//    <<<<<<  <<<<<<<<<< Question 5

    p2 = p1;//    <<<<<<<<<< Question 6

    p2 = p3;//    <<<<<<<<<< Question 7

    cout << "p1: " << p1 << "\n";//<<<<<<<< Question 8
    cout << "*p1: " << *p1 << "\n";
    cout << "p2: " << p2 << "\n";
    cout << "*p2: " << *p2 << "\n";

    delete[] p2;//    <<<<<<<<<< Question 9
    p3 = 0;
    
    p1 = new int[10];//  <<<<<<<<<< Question 10
    for (int i = 0; i<10; ++i)
        p1[i] = pow(2,i);

    p2 = new int[10];//  <<<<<<<<<< Question 11

    for (int i = 0; i<10; ++i)//<<<<<<<< Question 12
        p2[i] = p1[i];
    print_array(cout,p2,10);

    vector<int> vec1; //    <<<<<<<<<< Question 13
    for (int i = 0; i<10; ++i)
        vec1.push_back(pow(2,i));
    vector<int> vec2;
    for (int i = 0; i<vec1.size(); ++i)
        vec2.push_back(vec1[i]);
    print_vector(cout,vec2);
}
catch (exception& e) {
    cerr << "exception: " << e.what() << endl;
}
catch (...) {
    cerr << "exception\n";
}