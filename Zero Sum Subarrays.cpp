#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    map<int,int> s;
	    int n;
	    cin>>n;
	    int a[n],summ=0,c=0;
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<n;i++)
	    {
	        summ=summ+a[i];
	        if(summ==0)
	        c=c+1;
	        if(s.find(summ)!=s.end())
	        
	            c=c+s[summ];
	        s[summ]++;
	        
	    }
	    cout<<c<<endl;
	}
	return 0;
}
