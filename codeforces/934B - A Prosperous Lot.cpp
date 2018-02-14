#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
	
	int k;
	cin >> k;
	
	if(k>36){
	cout << -1; return 0; 
	}
	
	if(k & 1){
		int x= k/2; 
		for(int i=0; i<x; i++){
			cout << 8;
			
			
		}
		cout << 6;
	}
	
	else{
			int x=k/2;
			for(int i=0; i<x; i++)
			cout << 8; 
		}
	 


}
