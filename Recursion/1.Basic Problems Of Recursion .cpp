int fib(int n)
{
	if(n==0 || n==1)
	return n;
	
	int fib1=fib(n-1);
	int fib2=fib(n-2);
	
	return fib1+fib2;
}

// print increasing!!

void printI(int n)
{
	if(n==0)
	return;
	
	print(n-1);
	cout<<n<<" ";
}

//print decreasing !!!

void printD(int n)
{
	if(n==0)
	return;
	
	cout<<n<<" ";
	printD(n-1);
}

// is Array Sorted or not ??

bool isSorted(int a[],int i,int n)
{
	if(i==n-1)
	return true;
	
	if(a[i]>a[i+1])
	return false;
	
	return isSorted(a,i+1,n);
	
}

//Binary Search!!

int binarysearch(int a[],int l,int u,int x)
{
	if(l<=u)
	{
		int mid=(l+u)/2;
		if(a[mid]==x)
		return mid;
		else if(a[mid]>x)
		return binarysearch(a,l,mid-1,x);
		else
		return binarysearch(a,mid+1,u,x);
		
	}
	return -1;
	
}

//multiply a*b without using * operator and recursive function !!

int addition(int a,int b)
{
	if(b==0)
	return 0;
  
  	return a+addition(a,b-1);	
}
