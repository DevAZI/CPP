#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base:: sync_with_stdio(false); cin.tie(NULL);
	stack<char> st;
	string input;
	
	cin >> input;
	int cnt = 0;
	for(int i = 0 ; i < input.length(); i ++ ){
		if(input[i] == '('){
			st.push(input[i]);
			
		}
		else if(input[i-1] == '(' && input[i] == ')'){
			st.pop();
			cnt += st.size();
			
		}
		else{
			cnt ++;
			st.pop();
		}
	}
	cout<< cnt;
	return 0;
	
	
	
	
	
	return 0;
}

//10799









