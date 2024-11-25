#include<iostream>
using namespace std;

int ncr(int n){

    int n_fact =1;
    for (int i = 0; i < n; i++){
        if(n!=0){
        n_fact = (n-i)*n_fact;  
        } 
        else{
            n_fact=1;
        }
    }

    return n_fact;

}


int main(){

int n ,r;
cin>>n>>r;
int ncr_ans = ncr(n)/(ncr(r)*ncr(n-r));
cout<<ncr_ans<<endl;



return 0;
}