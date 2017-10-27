#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double cost;
    int tipPercent,taxPercent;
    cin>>cost>>tipPercent>>taxPercent;
    double total=cost+(tipPercent*cost)/100+(taxPercent*cost)/100;
        int ftotal=int(total);
    cout<<"The total meal cost is "<<ftotal<<" dollars.";
    return 0;
}
