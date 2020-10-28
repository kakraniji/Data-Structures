#include <bits/stdc++.h>
using namespace std;

vector<int>v;

void allocc(int a[],int i,int n,int x)
{
    if(i==n)
    return;
    
    if(a[i]==x)
    {
        v.push_back(i);
    }
    allocc(a,i+1,n,x);
}

int main()
{
    int n;
    cin>>n;
    
    int a[n];
    
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    int x;
    cin>>x;
    
    allocc(a,0,n,x);
    
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
   
   return 0;
}
