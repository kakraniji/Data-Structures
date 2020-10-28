#include<bits/stdc++.h>
using namespace std;

void insert(stack<int>&s,int x)
{
    if(s.size()==0 || s.top()<=x)
    {
        s.push(x);
        return;
    }
    int val=s.top();
    s.pop();
    insert(s,x);
    s.push(val);
}

void sort(stack<int>&s)
{
    if(s.size()==1)
    return;
    
    int x=s.top();
    s.pop();
    sort(s);
    insert(s,x);
}

int main()
{
	int n;
	cin>>n;
	
	stack<int>s;
	
	for(int i=0;i<n;i++)
	{
	    int x;
	    cin>>x;
	    s.push(x);
	}
	sort(s);
	while(!s.empty())
	{
	    cout<<s.top()<<" ";
	    s.pop();
	}
	
}
