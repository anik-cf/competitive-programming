#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string gem[6] = {"Power", "Time", "Space", "Soul", "Reality", "Mind"};
	string color[6] = {"purple", "green", "blue", "orange", "red", "yellow"};
	bool mark[6] = {0}; 
	
	int x;
	cin >> x;
	while(x--){
		string s;
		cin >> s; 
		
		for(int i=0; i<6; i++){
			if(s==color[i])
			mark[i]=1; 
		}
	}
	int cnt=0;
	for(int i=0; i<6; i++){
		if(mark[i]==0)
		cnt++;
	}
	
	cout << cnt << endl;
	for(int i=0; i<6; i++){
		if(mark[i]==0)
		cout << gem[i] << endl;
	}
	
	
}
