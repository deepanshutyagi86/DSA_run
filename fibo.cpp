#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;  
 int a=0;
 int b=1;

 for(int i=0;i<n;i++){

    int sum_fibo = a+b;
    cout<<sum_fibo<<" ";
    a=b;
    b=sum_fibo;
 }



    return 0;
}
