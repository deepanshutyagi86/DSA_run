#include<iostream>
using namespace std;

void pattern(int n){

    int i =1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch = 'A'+i-1;
            cout<<ch<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}

int main(){

   char arr_[] = {'A','B','C'};
   int n;
   cin>>n;

   int i =0;
   while(i< (sizeof(arr_)/sizeof(arr_[0]))){
       int j=1;
       while(j<=(sizeof(arr_)/sizeof(arr_[0]))){
        cout<<arr_[i]<<" ";
        j=j+1;
       }
       cout<<endl;
       i=i+1;
   }
    
    pattern(n);

    return 0;
}