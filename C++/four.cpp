#include<iostream>
using namespace std;

class item{
public:

    int p;
    void getdata()
    {
        cout<<"Enter item id"<<endl;
        cin>>p;
    }
    void show()
    {
        cout<<"Item id is "<<p;
    }
};
int main()
{
    int a,b;
    cout<<"enter integer A "<<endl;
    cin>>a;
    cout<<"enter integer B "<<endl;
    cin>>b;

    try{
        if(b!=0)
            cout<<"Divison is "<<a/b<<endl<<endl;
        else if(b==0)
            throw b;
    }
    catch(int x)
    {
        cout<<"Exception caught in preemptive data type"<<endl;
        cout<<"Demonator can't be ZERO in divison"<<endl<<endl;
    }
            item i;
            try{
            i.getdata();
            if(i.p<0)
                throw i;
                else
                    i.show();
            }
            catch(item)
            {
                cout<<"Non-preemptive data type caught"<<endl;
                cout<<"Item id cant be less than zero"<<endl;
            }
}
