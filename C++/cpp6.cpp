#include<iostream>
using namespace std;
#define Max 10;
class vector{
int size;
float vec[10];
public:

    void makevec()
    {
    cin>>size;
    for(int i=0;i<size;i++)
        {
            cin>>vec[i];
        }
    }
        void modify(int x,float y)
        {
            vec[x-1]=y;
        }
            void display()
            {
                for(int i=0;i<size;i++)
                {
                    cout<<vec[i]<<" ";
                }
                cout<<" "<<endl;
            }
                    void mul(int x)
                    {
                        for(int i=0;i<size;i++)
                        {
                            vec[i]=vec[i]*x;
                        }
                    }
};
int main()
{
    vector v1;
    v1.makevec();
    v1.display();
    v1.modify(3,2.5);
    v1.display();
    v1.mul(4);
    v1.display();
}
