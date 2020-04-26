#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    int ar[a];
    for(int i=1;i<=a;i++){
        cin>>ar[i];
    }
    int sum=0,sum1=0,mn=INT_MAX;
    for(int i=1;i<=(1<<a);i++){
        for(int j=1;j<=a;j++){
            if((i&(1<<j))==0) sum+=ar[j];
                else sum1+=ar[j];
        }
        //cout<<sum<<" "<<sum1<<endl;
        mn=min(abs(sum-sum1),mn);
        sum=0,sum1=0;
    }
    cout<<mn<<endl;
    return 0;
}
