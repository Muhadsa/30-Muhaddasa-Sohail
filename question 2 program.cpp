
#include<iostream>
using namespace std;
int main()
{
	int N;
	bool prime;
	cout<<" enter the number: "<<endl;
	cin>>N;
	while(N>=2)
	{ prime=true;
	int i=2;
	while(i*i<=N)
	{
		if(N%i==0)
	{
		 prime=false;
		break;
	}
	i++;}
	if(prime)
	{
		cout<<" the largest number is : "<<N<<endl;
		 break;
	}
	N--;
	}
	
	
}
	

		
