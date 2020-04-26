#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

struct node{
	int cnt;
	node* alpha[11];
	node(){
		cnt=0;
		for(int i=0;i<10;i++){
			alpha[i]=NULL;
		}
	}
} *root;

void insert(string &s){
	node* res=root;
	for(int i=0;i<s.length();i++){
		int ind=s[i]-'0';
		if(res->alpha[ind]==NULL) res->alpha[ind]=new node();
		res=res->alpha[ind];
		res->cnt+=1;
	}
}

int search(string &s1){
	node* res=root;
	for(int i=0;i<s1.length();i++){
		int ind=s1[i]-'0';
		if(res->alpha[ind]==NULL) return 0;
		res=res->alpha[ind];
	}
	return res->cnt;
}
void del(node* res){
	for(int i=0;i<10;i++){
		if(res->alpha[i]!=NULL) del(res->alpha[i]);
	}
	delete(res);
}

int main(){
	int t,tt=1;
	cin>>t;
	while(t--){
	root=new node();
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
		insert(s[i]);
	}
	bool lock=false;
	for(int i=0;i<n;i++){
		if(search(s[i])>1){
			lock=true;
			break;
		}
	}
	cout<<"Case "<<tt++<<": ";
	if(lock) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
	del(root);
}
	return 0;
}