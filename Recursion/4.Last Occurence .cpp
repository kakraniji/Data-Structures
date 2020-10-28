#include<bits/stdc++.h>

using namespace std;

int lastOccurence(int a[],int i,int key)
{
	if(i==-1)
	return -1;
	
	if(a[i]==key)
	return i;
	
	return lastOccurence(a,i-1,key);
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
	
	cout<<lastOccurence(a,n-1,key);
}
