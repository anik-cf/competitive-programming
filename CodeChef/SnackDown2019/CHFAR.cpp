#include<bits/stdc++.h>
#define ll long long
using namespace std; 

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


 	int T; 
	cin >> T; 
	
	while(T--)
	{
		int n, k; 
		cin >> n >> k; 
		
		int arr[n];
		
		ll sumOne=0; 
		for(int i=0; i<n; i++){
			cin >> arr[i]; 
		}
		
		sort(arr, arr+n);
		
		//cout << "Final Sum: " << sumOne << endl;
		
		ll sum=0; 
		for(int i=n-1; i>=0; i--)
		{
			if(k>0){
				arr[i]=1; 
				k--; 
			}
			sumOne+=arr[i]; 
			sum += arr[i]*arr[i];
		}
				
		if(sum<=sumOne)
			cout << "YES" << endl;
		else
			cout << "NO" << endl; 
		
		
	}	
	
}
