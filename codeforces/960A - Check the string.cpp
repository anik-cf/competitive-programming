#include<bits/stdc++.h>
using namespace std;


int main(){
	int a=0, b=0, c=0;
	
	string s,x; 
	cin >> s; 
	x=s;
	
	sort(s.begin(), s.end());
	
	
	if(s!=x){
		cout << "NO" << endl;
		return 0; 
	}
	for(int i=0; i<s.length(); i++){
		if(s[i]=='a')
		a++;
		if(s[i]=='b')
		b++;
		if(s[i]=='c')
		c++;
	}
	
	
	if(a>=1 && b>=1 ){
		if(c==a || c==b)
		cout << "YES" << endl; 
		else
		cout << "NO" << endl;
	}
	else
	cout << "NO" << endl;
	
	//cout << a << " " << b << " " << c << endl;
	
}
