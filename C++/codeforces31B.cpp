#include<bits/stdc++.h>
using namespace std;

int main(){
    int  n, x;
    cin >> n >> x;
    int ans = 0;

    for (int i = 0; i < n; i++){
        int y;
        cin >> y;
        ans = ans + y;
    }
    if (ans + n - 1 == x)
        cout << "YES";
    else
        cout << "NO";
}
