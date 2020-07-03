#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,max=0,k,sum=0;
	    cin>>n;
	    cin>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    map<int,int> s;
	    for(int i=0;i<n;i++)
	    {
	        sum=sum+a[i];
	        if(sum==k)
	        max=i+1;
	        if(s.find(sum)==s.end())
	        s.insert({sum,i});
	        if(s.find(sum-k)!=s.end())
	        {
	            if(max<i-(s[sum-k]))
	            max=i-s[sum-k];
	        }
	        
	   
	    }
	    cout<<max<<endl;
	}
	return 0;
}
