/*define a class to represent a bank account.
Include the following members:
Data members:
a. Name of the depositor
b. Account number
c. Type of the account
d. Balance amount in the account
Member functions:
a. To assign initial values
b. To deposit an amount
c. To withdraw an amount after checking the balance
d. To display name and balance.
Write a main program which utilizes your class and demonstrates every function of it.
 Store at least 5 such records and display them. */

 #include<iostream>
 using namespace std;
 class bankacc{
     string name,acctype;
     int accno,accbal;
 public:
     void getdata()
     {
         cout<<"Enter account holder's name"<<endl;
         cin>>name;
         cout<<"Enter account number"<<endl;
         cin>>accno;
         cout<<"Enter account type"<<endl;
         cin>>acctype;
         cout<<"Enter balance in account"<<endl;
         cin>>accbal;
    }
    void deposit(int x)
    {
        accbal=accbal+x;
        cout<<"Amount "<<x<<" is succesfully deposited to your account"<<endl;
    }
    void withdraw()
    {
        cout<<"You have "<<accbal<<" balance in your account"<<endl;
        int amt;
        cout<<"Enter amount u want to withdraw"<<endl;
        cin>>amt;
        accbal=accbal-amt;
    }
    void display()
    {
        cout<<"Account holde's name is : "<<name<<endl;
        cout<<"Balance in account is : "<<accbal<<endl;
    }
 };
 int main()
 {
 cout<<"Enter number of accounts u want  to make"<<endl;
 int no;
 cin>>no;
 bankacc b[no];
 b[0].getdata();
 b[0].deposit(200);
 b[0].withdraw();
 b[0].display();
 b[1].getdata();
 b[1].display();
 }
