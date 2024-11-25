#include<iostream>
using namespace std;

int set_bits(int n){
    int count = 0;
    
    while(n!=0){
        int bit = n&1;
        if(bit == 1){
            count++;
        }
        n=n>>1;
    }
    return count;
}

int bits_in_a_and_b(int a, int b){
    
    return set_bits(a)+set_bits(b);
}


int main(){

int a,b;
cin>> a>>b;
cout<<bits_in_a_and_b(a,b)<<endl;
    return 0;
}