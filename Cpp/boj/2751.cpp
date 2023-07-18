#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base:: sync_with_stdio(false); cin.tie(NULL);
	
	int num; cin >> num;
	vector<int> arr;
	for(int i =0; i < num; i++){
		int a;	cin >> a;
		arr.push_back(a);
		
	}
	sort(arr.begin(), arr.end());
	
	for(int i = 0; i < num; i++){
		cout << arr[i] << '\n';
	}
	
	return 0;
}