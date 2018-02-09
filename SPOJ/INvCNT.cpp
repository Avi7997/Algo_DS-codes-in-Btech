#include<bits/stdc++.h>
using namespace std;

long long int getSum(long long int BIT[], long long int x){
	long long int ans = 0;
	while(x>0){
		ans += BIT[x];
		x -= (x&(-x));
	}
	return ans;
}

void updateBIT(long long int BIT[],int ma, int x, int value){
	while(x<=ma){
		BIT[x] += value;
		x += (x&(-x));
	}
}
void solution(long long int ar[], int n){
	long long int ma = ar[0];
	for(int i=1;i<n;i++)
		if(ma<ar[i])
		ma= ar[i];
	long long int ans = 0;
	long long int BIT[ma+1];
	memset(BIT, 0, sizeof(BIT));
	for(int i = n-1; i>=0; i--){
		ans += getSum(BIT, ar[i]-1);
		updateBIT(BIT, ma, ar[i], 1);
		/*cout<<ans<<endl;
		for(int j = 1; j<= ma; j++)
            cout<<BIT[j]<<" ";
        cout<<endl;*/
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t>0){
		string str;
		getline(cin,str);
		int n;
		cin>>n;
		long long int ar[n];
		for(int i=0;i <n;i++)
			cin>>ar[i];
		solution(ar,n);
		t--;
	}
}
