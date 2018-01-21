#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main(){
	
	int n; 
	cin >>  n; 
	vector<int>v(n); 
	
	for(int i=0; i<n; i++){
		cin >> v[i]; 
	}
	
	int mx = *max_element(v.begin(), v.end());
	sort(v.begin(), v.end()); 
	
	int cnt=0; 
	for(int i=0; i<n; i++){
		if(v[i]==mx)
		cnt++;
	}
	
	if(cnt==1){
		cout << "Conan" << endl;
		return 0; 
	}
	if(cnt%2){
		cout << "Conan" << endl;
		return 0; 
	}
	
	else{
		int cnt=0; 
		for(int i=1; i<n; i++){
			if(v[i-1]==v[i])
			cnt++;
			else{
				cnt++;
				if(cnt%2){
				cout <<"Conan" << endl;
				 return 0; }
				 cnt=0; 
				
			}
		}
		
		
	}
	cout << "Agasa" << endl; 
	
}
