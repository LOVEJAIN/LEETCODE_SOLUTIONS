#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int c=0;
	while(t--){
	    int n,k,x;
	    cin>>x>>n>>k;
	    if(k>n){
	        cout<<"-1"<<endl;
	    }
	    else{
	        c=0;
	        for(int i=0;i<x;i++){
	            if(c==k){
	               c=0; 
	            }
	            cout<<c<<" ";
	            c++;
	        }
	        cout<<endl;
	    }
	   
	}
	return 0;
}
