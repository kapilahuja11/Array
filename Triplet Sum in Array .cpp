#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,h=0,f=0;
        cin>>n;
        cin>>x;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a, a+n);
        
        for(int i=0;i<n-2;i++)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                if(a[i]+a[j]+a[k]==x)
                {
                    f=1;
                    break;
                }
                else if(a[i]+a[j]+a[k]>x)
                k--;
                else
                j++;
            }
            if(f==1)
            {
               h=1;
               break;
            }
            
        }
        if(h==1)
        cout<<1<<endl;
        else
        cout<<0<<endl;
    }
	return 0;
}
