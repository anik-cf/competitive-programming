#include<bits/stdc++.h>
using namespace std; 

// Team: Polliwog
// User: anikseu

int main(){
	
 	int T; 
	cin >> T; 
	
	while(T--)
	{
		int n; 
		cin >> n; 
		
		if(n==2010 || n==2015 || n==2016 || n==2017 || n==2019)
			cout << "HOSTED" << endl;
		else
			cout << "NOT HOSTED" << endl; 
	}	
	
}
