//C++ Program to implement a basic calculator
#include<iostream.h>
#include<conio.h>
void accept_values();//Function to accept values
void display_result();//Function to display the result
int num1,num2,result;//Declaring the input and output values globally
void main()
{ int choice,continue_=0;//Declaring the variables used
  do
  {
  cout<<"\n---------------MAIN MENU--------------";//The main menu starts here
  cout<<"\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division";
  cout<<"\n\nEnter your choice:";
  cin>>choice;//The choice for the operation to performed is accepted here
  switch(choice)
  { case 1: cout<<"\nAddition";
	        accept_values();
            result= num1+num2;//Addition operation is performed
			display_result(); 
            break;
    case 2: cout<<"\nSubtraction";
	        accept_values();
            result= num1-num2;//Subtraction operation is performed
			display_result(); 
            break;

    case 3: cout<<"\nMultiplication";
	        accept_values();
            result= num1*num2;//Multiplication operation is performed
			display_result(); 
            break;

		 
	case 4:
	    cout<<"\nDivision";
	        accept_values();
            result= num1/num2;//Division operation is performed
			display_result(); 
            break;
	default: cout<<"Invalid Choice";
  }

cout<<"\nPress 1 to continue";
cin>>continue_;
  }while(continue_==1);
 cout<<"Thankyou for using";
 getch();
}
void accept_values()//Function to accept values
{ cout<<"\nEnter the first number: ";
  cin>>num1;
  cout<<"\nEnter the second number: ";
  cin>>num2;
}
void display_result()//Function to display the result
{ cout<<"\nThe Result is :";
  cout<<result;
}