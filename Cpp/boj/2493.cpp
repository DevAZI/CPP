#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base:: sync_with_stdio(false); cin.tie(NULL);
		
	stack<pair<int,int>> st;
	int num; cin >> num;
	int n;
	for(int i =1; i < num+1; i ++ ){
		cin >> n;
		
		while(!st.empty()){
			if(st.top().second > n){
				cout << st.top().first << " ";
				break;
				
			}
			st.pop();
		}
		
		
		if(st.empty()){
			cout << "0 ";
		} 
		st.push(make_pair(i,n));
		
		
	}	
	
	
	return 0;
	
}

//값을 <인덱스, 높이>로 하며
//만약 스택안에 높이보다 값이 큰 값이 없으면 pop
//만약 스택 안에 높이보다 값이 큰값이 있으면 push