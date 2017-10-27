#include<iostream>
using namespace std;

class set{
int m,n;
public:
void input();
int largest();
void display();
};

void set::input()
{
    cout<<"Enter values"<<endl;
    cin>>m>>n;
}
int set::largest()
{
    if(m>n)
        return m;
    else return n;
}
void set::display()
{
    cout<<"The largest number is "<<largest()<<endl;
}
int main()
{
    set s1;
    s1.input();
    s1.display();
}
