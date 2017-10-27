#include <iostream>

using namespace std;

template <typename T>

void Swap(T &n1, T &n2)

{

T temp;

temp = n1;

n1 = n2;

n2 = temp;

}

int main()

{

int a=5, b=10;

float flo1=2.7, flo2=7.2;

char char1='a', char2='b';

cout<<"Before passing data to function template.\n";

cout<<"a = "<<a<<"\nb="<<b;

cout<<"\nflo1 = "<<flo1<<"\nflo2="<<flo2;

cout<<"\nchar1 = "<<char1<<"\nchar2="<<char2;

Swap(a, b);

Swap(flo1, flo2);

Swap(char1, char2);

 cout<<"\n\nAfter passing data to function template.\n";

cout<<"a = "<<a<<"\nb="<<b;

cout<<"\nflo1 = "<<flo1<<"\nflo2="<<flo2;

cout<<"\nchar1 = "<<char1<<"\nchar2="<<char2;
return 0;
}
