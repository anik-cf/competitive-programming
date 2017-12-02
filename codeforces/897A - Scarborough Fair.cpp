#include<bits/stdc++.h>
using namespace std; 

int main(){
	
	int n, m, l, r;
	char c1, c2;  
	
	cin >> n >> m;
	
	string s; 
	cin >> s;  
	

	
	while(m--){
		
	cin >> l >> r;
	cin >> c1 >> c2; 	
	for(int i=l; i<=r; i++ ){
		
		if(s[i-1]==c1)
		s[i-1]=c2;
		
	}
		
		
	}
	
	cout << s << endl;  
	
}
		
