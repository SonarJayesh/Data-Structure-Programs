#include<iostream>
using namespace std;
int main(){
		
		int a[5]={7,6,3,4,1};
		int i,j,temp;
			cout<<"Sorting Array using Selection Sort:"<<endl;;
		for(i=0;i<5;i++){
			
			cout<<a[i]<<" ";
		}
		cout<<endl;
	
		for(i=0;i<5;i++){
			
			for(j=i+1;j<5;j++)
			{
				if(a[i]>a[j])
				{
					temp =a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		cout<<"After Sorting the Array:"<<endl;;
		for(i=0;i<5;i++){
			
			cout<<a[i]<<" ";
		}
		
		return 0;
	}
