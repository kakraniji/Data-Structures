#include<bits/stdc++.h>
using namespace std;

void deleteMiddle(stack<int>&s,int middle)
{
    if(middle==1)
    {
        s.pop();
        return;
    }
    int x=s.top();
    s.pop();
    deleteMiddle(s,middle-1);
    s.push(x);
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
	int middle=n/2+1;
	
	deleteMiddle(s,middle);
	
	while(!s.empty())
	{
	    cout<<s.top()<<" ";
	    s.pop();
	}
	
}
