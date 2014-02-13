#include <iostream>
#include <stack>                 //the stack header file
#include<string>


using namespace std;

stack <int> operands;           //declaring a stack of integers 
				        //called operands.
string input1;
void input();
void evaluate();

void main()
{
	input();
	evaluate();


}

void evaluate()
{
	int operand1, operand2, result;
   
    int i=0;
    while (i < input1.length())
    {
        if (isdigit(input1[i])) 
		{
			 operands.push(input1[i]-'0');
		}
        else
        {
          operand2 = operands.top();
          operands.pop();
          operand1 = operands.top();
          operands.pop();
          switch(input1[i])
          {
                  case '+': result=operand1 + operand2;
                  break;
                  case '-': result=operand1 - operand2;
                  break;
                  case '*': result=operand1 * operand2;
                  break;
                  case '/': result=operand1 / operand2;
                  break;
        }
        operands.push(result);
        }
        i++;
    }
    cout << "The result is: "<<result<<endl;
  
  }

void input()
{
	
    cout << "Enter a postfix expression: " << endl;
    getline(cin, input1);


}

