#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base:: sync_with_stdio(false); cin.tie(NULL);
	
	string s;
	cin >> s;	
	set<int> st;
	vector<pair<int,int>> vt;
	for (char& c : s) {
        c= toupper(c);
		st.insert(c);
		
    }
	
	for(char element: st){
		vt.push_back(make_pair(element,count(s.begin(), s.end(), element)));
	}
	//max구하기
	//max값이 같은 값이 2개면 ?출력
	
	//1157
	
	

	
	
	
	
	
	
	
	
	
	
	return 0;
	
}

