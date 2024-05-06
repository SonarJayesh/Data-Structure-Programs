#include<iostream>
using namespace std;
class StackDemo{
	
	int stack[5];
	int top;
	public:
		 stk(){
			
			top= -1;
		}
		void push(int x){
			
			if(top>4){
				
				cout<<"Stack is OverFlow";
			}
			else{
				
				stack[++top]=x;
				cout<<"Element inserted"<<endl;
			}
			
		}
		void pop()
		{
			if(top < 0)
			{
				cout<<"Stack is UnderFlow"<<endl;
			}
			else{
				
				cout<<"Deleted Element is:"<<stack[top--]<<endl;
			}
		}
		void Display(){
			if(top<0){
				cout<<"Stack is Empty"<<endl;
				
			}
			for(int i=top;i>0;i--){
				cout<<stack[i]<<endl;
			}
			
		}
};

int main(){
	
	StackDemo obj;
	int ch;
	while(1){
	
	cout<<"1.Push \n 2.Pop \n 3.Display \n 4.Exit"<<endl;
	cout<<"Enter The Choice Operation No";
	cin>>ch;
	
	switch(ch){
		
		case 1:
			cout<<"Enter the Element:"<<endl;
			cin>>ch;
			obj.push(ch);
			break;
		
		case 2:
			obj.pop();
			break;
			
		case 3:
			obj.Display();
			break;
			
		case 4:
			exit(0);
			break;		
	}
}
	return 0;
}
