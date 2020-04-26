#include <bits/stdc++.h>
using namespace std;
typedef long long LL; 

//LL dp[10000][10000];
LL dp[1001][10005],ar[100005],ar1[100005];
LL knapSack(LL w,LL wt[],LL cost[],LL n){
    for(LL i=1;i<=n;i++){
        for(LL j=1;j<=w;j++){
            if(wt[i-1]<=j){
                dp[i][j]=max(cost[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][w];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	int cas=1;
	cin>>t;
	while(t--){
		memset(dp,0,sizeof(dp));
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>ar[i]>>ar1[i];
		}
		int q;
		cin>>q;
		LL sum=0;
		while(q--){
			int w;
			cin>>w;
			sum+=knapSack(w,ar1,ar,n);
		}
		cout<<sum<<endl;
	}	
	return 0;
}
