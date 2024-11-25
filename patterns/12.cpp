#include<iostream>
using namespace std;

void pattern(int n){
    
int i=1;
while(i<=n){
    int j =1;
    while(j<=n){
        char ch = 'A'+i+j-2;
        cout<<ch<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}


}
int main(){
    int n;
    cin>>n;
   
   int i=1;
   while(i<=n){
       int j=1;
       int count = i;
       while(j<=n){
            
           char ch = 'A'+count-1;
           cout<<ch<<" ";
           count=count+1;
           
           j=j+1;
       }
       cout<<endl;
       i=i+1;
   }

    pattern(n);


    return 0;
}