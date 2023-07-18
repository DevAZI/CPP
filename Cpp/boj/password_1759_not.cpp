#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base:: sync_with_stdio(false); cin.tie(NULL);
	
	int a, b;
	cin >> a >> b;
	char c;
	vector<char> arr;
	sort(arr.begin(), arr.end()); // 왜 안되냐;;?
	
	for(int i = 0; i< b; i++){
		cin >> c;
		arr.push_back(c);
		
		
	}
	while (next_permutation(arr.begin(), arr.end())){
		for (char num : arr) {
            cout << num << " ";
        }
        cout << '\n';
	}
	//현상황: 주어진 문자열로 만들 수 있는 모든 문자열 다만듬
	
	//모음 2개 들가야함
	//a자리수 만큼으로 만들어야함
	//심지어 사전 순서대로 정렬도 해야함 >> 근데 이건 문자열 만들기 전에 정렬 해놓고 하면 될듯
	
	

	
	
	//1759
	
	
	return 0;
	
}

