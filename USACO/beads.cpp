/*
ID: anikcha1
TASK: beads
LANG: C++                 
*/
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
 
string generate(string s, int n){
	//process the string;
	string processedString = ""; 
	processedString += s.substr(n); 
	if(n!=0) processedString += s.substr(0, n); 
	
	return processedString; 
} 

int countBreaker(string s){
	//count the value of processed string;
	int cnt=0; 
	
	for(int i=0; i<s.length(); i++){
		if(s[i]=='w'){
			cnt++;
		}
		else{
			char check = s[i]; 
			for(int j=i; j<s.length(); j++){
				if(check == s[j] || s[j]=='w'){
					cnt++; 
				}else{
					break; 
				}
				
			}
			break; 
		}
	}
	
	for(int i=s.length()-1; i>=0; i--){
		if(s[i]=='w'){
			cnt++;
		}
		else{
			char check = s[i]; 
			for(int j=i; j>=0; j--){
				if(check == s[j] || s[j]=='w'){
					cnt++; 
				}else{
					break; 
				}
				
			}
			break; 
		}
	}
	
	if(cnt>s.length()) 
	cnt=s.length(); 
	
	
	return cnt; 
	 
}
 
int main(){
   
    READ("beads.in");
    WRITE("beads.out");
    ios_base::sync_with_stdio(0); cin.tie(0);
   
    //vi v;
	int n; cin >> n; 
	string s; 
	cin >> s; 
	
	int maxValue = INT_MIN; 
	
	for(int i=0; i<s.length(); i++){
		string splittedString = generate(s, i);
		//cout << splittedString << endl; 
		int whereToBreak = countBreaker(splittedString); 
		if(whereToBreak>maxValue)
		maxValue = whereToBreak;   
	}
	
	cout << maxValue << endl; 
   
}
