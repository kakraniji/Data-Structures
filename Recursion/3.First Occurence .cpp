#include<bits/stdc++.h>

using namespace std;

int firstOccurence(int a[],int i,int n,int key)
{
	if(i==n)
	return -1;
	
	if(a[i]==key)
	return i;
	
	return firstOccurence(a,i+1,n,key);
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int key;
	cin>>key;
	
	cout<<firstOccurence(a,0,n,key);
}
