#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int sol(int a[],int n,int k)
{
    int s=0,c=0;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
      {
          s+=a[i];
          if(s%k==0)
          c++;
          if(m.find(s%k)!=m.end())
          c+=m[s%k];
          m[s%k]++;
      }
      return c;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    cout<<sol(a,n,k)<<"\n";
	    
	}
	return 0;
}
