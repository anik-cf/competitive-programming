#include<bits/stdc++.h>
using namespace std;


int main(){
	
   	int n, x=0, y=0; 
   	cin >> n; 
 
   	for(int i=0; i<n; i++){
   	int a; 
   	cin >> a; 
   	if(a<0){
   		y+=a; 
	}
	
	else
   	x += a; 
	}
	   
	   cout << x - y << endl; 
	
}
