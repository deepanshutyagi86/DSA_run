#include<iostream>
#include<vector>
using namespace std;



vector<vector<int>> findTriplets(int* arr, int n, int K) {
	
	vector<vector<int>> ans;
	for(int i = 0 ; i<n; i++){

		for(int j = i+1 ; j<n; j++){

			for(int k = j+1 ; k<n; k++){
				
				if(arr[i]+arr[j]+arr[k]==K){
					ans.push_back({arr[i],arr[j],arr[k]});
					return ans;
				}
				
				
			}
			

		}
	   
	}
	
}

int main()
{
int arr[] = {10, 5, 5, 5, 2}; 
int n = 5;
int K = 12;

vector<vector<int>> answer = findTriplets(arr, n, K);
cout<<answer
return 0;
}