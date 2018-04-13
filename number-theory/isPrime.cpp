#include<bits/stdc++.h>
#define ll long long
using namespace std;

bitset<10000001>bs; 
vector<ll>prime; 
ll size;


bool isPrime(ll query){
	if(query<=size)
	return bs[query];  //check upto [size] primes in O(1)
	
	//this for large numbers
	for(int i=0; i<(int)prime.size(); i++){
		if(query%prime[i]==0)
		return false; 
	}
	return false;
}

void sieve(ll N){
		
	size=N+1; 
	bs.set(); //turn all indices to 1
	bs[0]=bs[1]=0; // 0,1 is not prime
	
	for(ll i=2; i<=size; i++){
		if(bs[i]){
			for(ll j=i*i; j<=size; j+=i){ //marks all multiples
				bs[j]=0;					
			}
		
		prime.push_back(i); 
	
		}
	}
}


int main(){
	sieve(10000000);
	int query;
	cin >> query; 
	
	if(isPrime(query))
	cout << "Prime" << endl; 
	else
	cout << "Not Prime" << endl;
	
}
