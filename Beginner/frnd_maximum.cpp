#include<iostream>
using namespace std;

class first_number;
class second_number
{
private:
    int no2;
public:
    void setvalue(int temp)
    {
        no2=temp;
        cout<<no2<<endl;
    }
    friend void max(second_number sn,first_number fn);
};
class first_number
{
private:
    int no1;
public:
    void setvalue(int temp)
    {
        no1=temp;
        cout<<no1<<endl;
    }
    friend void max(second_number sn,first_number fn);
};

int main()
{
    first_number a;
    a.setvalue(25);
    second_number b;
    b.setvalue(5);
    max(b,a);
    return 0;
}
void max(second_number sn,first_number fn)
{
    if(sn.no2>fn.no1)
    {
        cout<<"Maximum number is  "<<sn.no2;
    }
    else
    {
        cout<<"Maximum number is  "<<fn.no1;
    }
}
