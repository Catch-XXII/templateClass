#include <iostream>
using namespace std;

template <class T>
class Arithmetic {
private:
    T a;
    T b;
    
public:
    Arithmetic(){a=b=1;}
    Arithmetic(T a, T b);
    T add();
    T sub();
    T mult();
    T div();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T>::add()
{
    return a+b;
}

template <class T>
T Arithmetic<T>::sub()
{
    return a-b;
}

template <class T>
T Arithmetic<T>::mult()
{
    return a*b;
}

template <class T>
T Arithmetic<T>::div()
{
    return a/b;
}

int main()
{
    Arithmetic<int> a{10,5};
    
    cout << a.add() << endl;
    cout << a.sub() << endl;
    cout << a.mult() << endl;
    cout << a.div() << endl;
        
    Arithmetic<double> b{3.14, 9.9};
    
    cout << b.add() << endl;
    cout << b.sub() << endl;
    cout << b.mult() << endl;
    cout << b.div() << endl;

    return 0;
}
