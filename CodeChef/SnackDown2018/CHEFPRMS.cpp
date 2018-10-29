#include<bits/stdc++.h> 
#define ll long long
using namespace std;

bool getAns(int n){

	if(n<12)
		return false; 
	else if(n==13 || n==14 || n==15)
		return false; 
	else if(n==17 || n==18 || n==19)
		return false; 
	else if(n==22 || n==23)
		return false; 
	else if(n==26 || n==33 || n==34 || n==38)
		return false; 
	else if(n==46 || n==51 || n==58)
		return false; 
	else if(n==62 || n==82)
		return false; 
	else 
		return true; 

}

int main()
{
   
	int T; 
	cin >> T; 

	while(T--){
		int N; 
		cin >> N; 

		if(getAns(N))
			cout << "YES" << endl;
		else 
			cout << "NO" << endl; 
	}
}

	
