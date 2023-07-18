#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base:: sync_with_stdio(false); cin.tie(NULL);
	
	int num; cin >> num;
	int n ;
	set<int> arr;
	set<int>::iterator it;
	
	for(int i = 0; i < num; i ++ ){
		cin >> n;
		arr.insert(n);
		
	}
	
	for (it=arr.begin(); it!=arr.end(); ++it){
		cout << *it << ' ';
	}   
	
	return 0;
	
}
//set 장점, 중복 제거, 및 오름차순으로 저장됨
//set 출력하려면 iterator써야함