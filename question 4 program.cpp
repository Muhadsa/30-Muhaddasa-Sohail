
#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	int size=5;
	
	int newsize=size+2;
	int newarray[newsize];
	for(int i=0; i < size; i++)
	{
 newarray[i]=a[i];	
	}
	
		newarray[size]=6;
		newarray[size+1]=7;
				cout<<"the new array is "<<endl;
		for(int i; i<newsize; i++)
		{
			cout<<newarray[i]<<" ";
		}
		
return 0;
}