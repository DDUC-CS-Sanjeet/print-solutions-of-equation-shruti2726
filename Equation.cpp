#include<iostream>
using namespace std;
void pattern(int n,int a)
{
	int arr[n], sum=0, j=1;
	for(int i=0;i<n;i++)
	    arr[i]=0;
	while(j>0)
	{
		bool flag=true;
		sum=0;	
		for(int i=0;i<n;i++)
		{
			
		    if(arr[i]==a+1)
			{
				arr[i]=0;
				if(i==n-1)
				{
					flag=false;
					break;
				}
				arr[i+1]++;
			}
			sum=sum+arr[i];
		}
		if(flag==false)
			break;
		
		if(sum==a)
		{
			for(int i=n-1;i>=0;i--)
			    cout<<arr[i]<<" ";
			cout<<endl;
		}
		arr[0]++;
	}
}
int main()
{
	int n,c;
	cout<<"Enter the value of n and C for the Equation X1 + X2 + ... + Xn = C : ";
	cin>>n>>c;
	pattern(n,c);
	return 0;
}
