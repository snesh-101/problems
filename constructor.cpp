#include <iostream>
using namespace std;
class some
{
    int a, b;

public:
    some(int x, int y) // parametrized constructor
    {
        a = x;
        b = y;
    }
    some() // default constructor
    {
        a = 0;
        b = 9;
    }

    some(const some &c) // copy constructor
    {

        a = c.a;
        b = c.b;
    }
    void display()
    {
        cout << a << b;
    }
};
int main()
{
    some c1(9, 9);
    some c5(8, 4);
    some c2 = c5; // copy constructor
    c1.display();
    cout << endl;
    c2.display();
}