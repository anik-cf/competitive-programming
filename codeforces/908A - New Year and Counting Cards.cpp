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
	if(s[i]>='0' &&s[i]<='9' && s[i]%2==1){
		
		count++;
	}
		
}

	cout << count << endl;
	
}


 
