#include<iostream>
using namespace std;
int main(){
	int a[5]={7,6,3,4,1};
	int i,j,temp;
	for(i=0;i<5;i++){
		
		cout<<a[i]<<" ";
		
	}
	cout<<endl;
	for(i=1;i<5;i++)
	{
		temp =a[i];
		j=i-1;
			
		while((temp<a[j])&&(j>=0))
		{
			a[j+1]=a[j];
			j=j-1;		
		}		
		a[j+1]=temp;
	}
	
	cout<<"\n Sorted List:\n";
	for(i=0;i<5;i++){
		
		cout<<a[i]<<" ";
		
	}
	return 0;
}
