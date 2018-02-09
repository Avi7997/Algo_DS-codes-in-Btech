#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n!=0){
		int temp =1;
		vector<int> ar;
		for(int i =0;i<n;i++){
			int a;
			cin>>a;
			if(a==temp){
				temp++;
				while(ar.size()>0){
					if(ar.back() == temp){
						temp++;
						ar.pop_back();
					}
					else{
                        break;
					}
				}
			}
			else{
				ar.push_back(a);
			}
		}

		if(ar.size()>0)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
		cin>>n;
	}
}
