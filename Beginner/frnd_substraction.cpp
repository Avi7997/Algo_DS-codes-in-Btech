#include<iostream>
using namespace std;

class sample
{
private:
    int no1,no2;
public:
    void setvalue()
    {
        no1=25;no2=15;
    }
    friend int sub(sample s);
};

int main()
{
    sample answer;
    answer.setvalue();
    cout<<"Subtraction of two number is "<<sub(answer)<<endl;
    return 0;
}

int sub(sample s)
{
    cout<<"First number is: "<<s.no1<<endl;
    cout<<"Second number is: "<<s.no2<<endl;
    return (s.no1-s.no2);
}
