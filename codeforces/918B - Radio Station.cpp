#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define MAX 10000007
#define PI acos(-1)
#define pb(x) push_back(x)
#define inpll(a) scanf("%lld",&a)
#define vi vector<int>
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
using namespace std;


int main(){
   
    //READ("in.txt");
    //WRITE("out.txt");
    ios_base::sync_with_stdio(0); cin.tie(0);
	
	vector<string>v; 
	vector<string>k; 
	
	int n, m; 
	cin >> n >> m; 
	
	//store ip
	for(int i=0; i<n; i++){
		string s, p; 
		cin >> s >> p; 
		v.push_back(s);
		k.push_back(p); 
	}
	
	
	//add comm 
	for(int i=0; i<m; i++){
		string comm;
		cin >> comm; 
		string ip; 
		cin >> ip; 
		cout << comm << " " << ip; 
		if(ip.size()>0)
		ip.resize(ip.size()-1);
		for(int j=0; j<k.size(); j++){
			if(k[j]==ip)
			cout << " #" << v[j];  
		}
		cout << endl;
		
	}
	

}
