#include<iostream>
using namespace std;


int main()
{
    int ans;
    cin>>ans;

    int j=0 ;
    int ans_comp =0;
    while (ans!=0){
        int digit = ans%10;
        if (digit==1){
            ans_comp = digit*pow(2,j)+ans_comp;
            
        }
        ans = ans/10;
            j++;
    
    }
    cout<<ans_comp<<endl;
return 0;
}   