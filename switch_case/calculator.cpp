#include<iostream>
using namespace std;

int main(){

cout<<"enter the a and b and operation"<<endl;
int a,b;
char op;
cin>>a>>b>>op;
switch(op){
    case '+':
    cout<<a+b<<endl;
    break;
    case '-':
    cout<<a-b<<endl;
    break;
    case '*':
    cout<<a*b<<endl;
    break;
    case '/':
    cout<<a/b<<endl;
    break;
    case '%':
    cout<<a%b<<endl;
    break;
    default:
    cout<<"invalid operation"<<endl;
}



    return 0;
}