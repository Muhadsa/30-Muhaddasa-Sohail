#include<iostream>
using  namespace std;
int main()
{
	int temp,j;
	int a[6]={60,70,30,50,40,80};
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<6-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"the new bubble sorted array is :"<<endl;
	for(int i=0;i<6;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}