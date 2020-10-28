  
//this will calculate the power in log(n) time..
int power(int a,int b)
{
	if(b==0)
	return 1;
	
	int smallans=power(a,b/2);
	smallans=smallans*smallans;
	
	//agar b odd he to a ka multiply bi hoga smallans me!!! else smallans return ho jayga!!
	if(b&1)
	return a*smallans;

	return smallans;
}
