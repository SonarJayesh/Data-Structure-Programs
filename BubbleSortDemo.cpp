#include<iostream>
using namespace std;
int main(){
	int a[5]={7,6,3,4,1};
	int i,j,k;
	
	for(i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	for(j=1;j<5;j++){
		
		for(k=0;k<5-1;k++){
			
			if( a[k] > a[k+1] ){
				
				int temp = a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		}
		cout<<"\n \n After Pass: "<<j<<"\n";
		
		for(i=0;i<5;i++){
				cout<<"\t"<<a[i]<<" ";
		}
	}
	return 0;
}
