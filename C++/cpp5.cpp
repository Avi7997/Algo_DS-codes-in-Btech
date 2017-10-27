//Create a class named student having data member’s name, roll no and marks of three subjects.
//Write a member function to  a.
//Input name, roll no and marks b.Calculate total and percentage. c.Display all the information
#include<iostream>
using namespace std;

class student{
string name;
int rollno,mark1,mark2,mark3,total;
float avg;
public:
    void getdata()
    {
        cin>>name;
        cin>>rollno>>mark1>>mark2>>mark3;
    }
    void calculate()
    {
        total=mark1+mark2+mark3;
        avg=float(total)/3;
    }
    void putdata()
    {
        cout<<name<<endl<<rollno<<endl<<mark1<<endl<<mark2<<endl<<mark3<<endl<<total<<endl<<avg;
    }

};

int main()
{
    student s;
    s.getdata();
    s.calculate();
    s.putdata();
}
