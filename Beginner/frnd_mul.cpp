#include<iostream>
using namespace std;

class first_number;
class second_number
{
public:
    int mul(first_number &s);
};
class first_number
{
private:
    int a,b;
public:
    void setvalue()
    {
        a=5;b=2;
    }
    friend int second_number::mul(first_number &s);
};
int second_number::mul(first_number &s)
{
    cout<<"First number is "<<s.a<<endl;
    cout<<"Seconad number is "<<s.b<<endl;
    return (s.a*s.b);
}
int main()
{
    first_number x;
    x.setvalue();
    second_number d;
    cout<<"Multiplication of numbers is "<<endl<<d.mul(x);
    return 0;
}
