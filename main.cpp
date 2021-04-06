#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char op;
    float result;
    cout<<"Enter first number:";cin>>a;
    cout<<"Enter a operation (+,-,*,/):";cin>>op;
    cout<<"Enter second number:";cin>>b;
      switch(op){
   case'+':
       result=a+b;
       cout<<result;
      break;
     case'-':
       result=a-b;
       cout<<result;
      break;
       case'*':
       result=a*b;
       cout<<result;
      break;
       case'/':
       result=a/b;
       cout<<result;
      break;

  }


    return 0;
}
