#include <iostream>
 using namespace std;
int main()
{
	float num1,num2,result;
	int choice;
	cout<<"        "<<"******SIMPLE CALCULATOR******"<<endl;
	cout<<"          "<<"FOR ADDITION PRESS 1"<<endl;
	cout<<"          "<<"FOR SUBTRACTION PRESS 2"<<endl;
	cout<<"          "<<"FOR MULTIPLICATION PRESS 3"<<endl;
	cout<<"          "<<"FOR DIVITION PRESS 4"<<endl;
	cout<<"          "<<"CHOOSE ANYONE:";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"     "<<"Enter the first no.:";
			cin>>num1;
			cout<<"     "<<"Enter the second no.:";
			cin>>num2;
			result=num1+num2;
			cout<<"     "<<num1<<"+"<<num2<<"="<<result;
			 break;
		case 2:
			cout<<"     "<<"Enter the first no.:";
			cin>>num1;
			cout<<"     "<<"Enter the second no.:";
			cin>>num2;
			result=num1-num2;
			cout<<"     "<<num1<<"-"<<num2<<"="<<result;
			 break;	
		case 3:
			cout<<"     "<<"Enter the first no.:";
			cin>>num1;
			cout<<"     "<<"Enter the second no.:";
			cin>>num2;
			result=num1*num2;
			cout<<"     "<<num1<<"*"<<num2<<"="<<result;
			 break;	
		case 4:
			cout<<"     "<<"Enter the first no.:";
			cin>>num1;
			cout<<"     "<<"Enter the second no.:";
			cin>>num2;
			if (num2==0)
			{
				cout<<"     "<<"Error:Not divisible by zero";
			}
			else
			{
				result=num1/num2;
				cout<<"     "<<num1<<"/"<<num2<<"="<<result;
			}
			 break;	   
		default : cout<<"       "<<"Invalid Choice";
		return 0;	 
	}
	
	
	
}