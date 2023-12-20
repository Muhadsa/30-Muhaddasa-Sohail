#include<iostream>
#include<string>
using namespace std;
int main()
{
	string result,str;
	int length,i,j;
	cout<<"Enter the string"<<endl;
	cin>>str;
	length=str.length();
	for( int k=0;k<length;k++)
	{
		if(str[k]>='A' && str[k]<='Z')
		{
			str[k]=str[k]+32;
		}
		else 
		str[k]=str[k];
	}
	
	for (  i=0; i<length; i++)
	{
		for( j=0; j<length; j++)
		{
			if(str[i]==str[j])
			
			{
					break;
					}
		}
		if(i==j)
		{
		
			result=result+str[i];
		}
	}
	cout<<" the final string is : "<<result<<endl;
	
}