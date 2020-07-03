#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	   int n,c=0;
	    cin>>n;
	    int a[n],sum=0;
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    unordered_map<int,int> s;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==0)
	        a[i]=-1;
	        sum=sum+a[i];
	        if(sum==0)
	        c=c+1;
	        if(s.find(sum)!=s.end())
	        {
	        s[sum]=s[sum]+1;     
	        c=c+s[sum];
	        }
	        else
	        s[sum]==0;
	        
	        
	    }
	    cout<<c<<endl;
	}
	return 0;
}
