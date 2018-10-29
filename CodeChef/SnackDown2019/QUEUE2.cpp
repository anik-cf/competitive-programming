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
		int ans = INT_MAX; 
		bool found = false; 
		int N, M, K, L; 
		
		cin >> N >> M >> K >> L;
		 
		int arr[N];
		for(int i=0; i<N; i++)
			cin >> arr[i]; 
			
		sort(arr, arr+N); 
			
		int currTime = M*L; 

		for(int i=0; i<N; i++)
		{
			currTime += L; 
			int tmp = currTime - arr[i]; 
			if(arr[i]<=K){
				if(ans>tmp){
					ans = tmp;  
				}
			}	
		}
		
		currTime += L; 
		
				
		if(ans > currTime-K){
			ans = currTime - K;   
		}
		
		
		cout << ans << endl;
			
			
		}
				
	}

