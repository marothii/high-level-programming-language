#include "std_lib_facilities.h"
template<class T> struct S {
    S() : val(T()) { }
    S(T d) : val(d) { }     // q2
    T& operator=(const T&); // q10
    T& get();               // q5
    const T& get() const;   // q11
    void set(const T& d);   // q9

private:
    T val;
};

template<class T> T& S<T>::operator=(const T& d)
{
    val = d;
    return val;
}

// q6
template<class T> T& S<T>::get() { return val; }

template<class T> const T& S<T>::get() const { return val; }


// q12
template<class T> istream& operator>>(istream& is, S<T>& ss)
{
    T v;
    cin >> v;
    if (!is) return is;
    ss = v;
    return is;
}

template<class T> void read_val(T& v)
{
    cin >> v;
}

// -----------------------------------------------------------------------------

int main()
try {
    // q3
    S<int> s_int(5);
    S<char> s_char('x');
    S<double> s_dbl(3.14);
    S<string> s_strg("String1");
    vector<int> vi;
    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);
    S<vector < int> > s_v_int(vi);

    // q4
    // cout << "s_int: " << s_int.val << "\n";
//   cout << "s_char: " << s_char.val << "\n";
//    cout << "s_dbl: " << s_dbl.val << "\n";
//    cout << "s_strg: " << s_strg.val << "\n";
//    for (int i = 0; i<s_v_int.val.size(); ++i)
//        cout << "s_v_int[" << i << "]: " << s_v_int.val[i] << "\n";

    // q8
    cout << "s_int: " << s_int.get() << "\n";
    cout << "s_char: " << s_char.get() << "\n";
    cout << "s_dbl: " << s_dbl.get() << "\n";
    cout << "s_strg: " << s_strg.get() << "\n";
    for (int i = 0; i < s_v_int.get().size(); ++i)
        cout << "s_v_int[" << i << "]: " << s_v_int.get()[i] << "\n";
    cout << s_v_int.get() << "\n";

    // q9
    s_int.set(55);
    s_char.set('y');
    s_dbl.set(4.14);
    s_strg.set("String2");
    vi[1] = 22;
    s_v_int.set(vi);
    cout << "\ns_int: " << s_int.get() << "\n";
    cout << "s_char: " << s_char.get() << "\n";
    cout << "s_dbl: " << s_dbl.get() << "\n";
    cout << "s_strg: " << s_strg.get() << "\n";
    for (int i = 0; i < s_v_int.get().size(); ++i)
        cout << "s_v_int[" << i << "]: " << s_v_int.get()[i] << "\n";
    cout << s_v_int.get() << "\n";

    // q10
    s_int = 66;
    s_char = 'z';
    s_dbl = 5.14;
    s_strg = "String3";
    vi[1] = 33;
    s_v_int = vi;
    cout << "\ns_int: " << s_int.get() << "\n";
    cout << "s_char: " << s_char.get() << "\n";
    cout << "s_dbl: " << s_dbl.get() << "\n";
    cout << "s_strg: " << s_strg.get() << "\n";
    for (int i = 0; i < s_v_int.get().size(); ++i)
        cout << "s_v_int[" << i << "]: " << s_v_int.get()[i] << "\n";
    cout << s_v_int.get() << "\n";

    //q11
    const S<int> c_s_int(5);
    cout << "\nc_s_int: " << c_s_int.get() << "\n"; // const getter needed

    //q13
    cout << "\ns_int: ";
    read_val(s_int);
    cout << "s_char: ";
    read_val(s_char);
    cout << "s_dbl: ";
    read_val(s_dbl);
    cout << "s_strg: ";
    read_val(s_strg);
    cout << "\ns_int: " << s_int.get() << "\n";
    cout << "s_char: " << s_char.get() << "\n";
    cout << "s_dbl: " << s_dbl.get() << "\n";
    cout << "s_strg: " << s_strg.get() << "\n";

}


