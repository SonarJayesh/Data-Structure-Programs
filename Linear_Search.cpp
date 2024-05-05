#include<iostream>
using namespace std;
int main()
{
	int a[] = {10,20,30,40,50};
	int i,item;
	cout<<"Enter the Searching Item"<<endl;
	cin>>item;
	
	for(i=0;i<5;i++)
	{
		if(a[i]==item)
		{
			cout<<"Array Element is Found: "<<a[i]<<endl;
			cout<<"Array Index With Location:"<<i<<endl;
		}
	}
	if(i>=5)
	{
		cout<<"Array Element Not Found:"<<endl;
	}
	
}
