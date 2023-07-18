#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base:: sync_with_stdio(false); cin.tie(NULL);
	int num; cin>> num; //횟수	
	int n;
	int temp;
	int sum = 0;
	//일단 처음 입력값은 그냥 가져오는게 맞음
	//
	cin >> temp;	
	n = temp;
	cout << n << ' ';
	for(int i =1; i < num; i++){
		cin >> temp;
		sum += n;
		n = (temp * (i+1) - sum);
		cout << n << ' ';
	}
	return 0;
	
}