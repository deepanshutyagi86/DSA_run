#include<iostream>
using namespace std;

int binarySearch(int arr[], int n , int key){

    int start= 0 ;
    int end = n-1;

    while(start<=end){
        int mid = start + (end-start)/2;

        if (arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    mid = start + (end-start)/2;    

    }
    return -1; 
    
}




int main(){

int evenarr[8] = {2,4,6,8,10,12,14,16};
int oddrr[7] = {1,3,5,7,9,11,13};



    return 0;
}