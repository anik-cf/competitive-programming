#include <bits/stdc++.h>
using namespace std; 


int main(){
		
	int count=0, old=0, v=0; 
	string s; 
	cin >> s; 
	
	for(int i=0; i<s.length(); i++){
		
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
		count++;
	  
		}
		else if(s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9' )
		count++;  
		
	}
		
		

	cout << count << endl;
	
}

 
