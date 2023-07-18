#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base:: sync_with_stdio(false); cin.tie(NULL);
	int a,b;
	cin >> a>>b;
	vector<int> arr;
	int n;
	for(int i = 0; i < a; i < i++){
		cin >> n;
		if(n < b){
			arr.push_back(n);
		}
		
	}
	for(int i = 0 ; i < arr.size(); i++){
		cout<< arr[i] << ' ';
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}

