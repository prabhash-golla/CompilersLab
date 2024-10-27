//Function call with array pointers and if else statements

int ADDER(int a[],int n)
{
    int sum=0;
	for (int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}

int main()
{
    int n = 10;
	int a[n];
    int ans;
    int sum=ADDER(a,n);
	if(sum==n)
	{
		ans=0;
	}
	else if(sum>n)
	{
		ans=sum-n;
	}
	else{
        ans=1;
    }
	return 0;
}