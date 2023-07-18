#include <vector>
#include <iostream>
#include <string>
#include <queue>
using namespace std;
priority_queue<int, vector<int>, greater<int>>MIN_PQ;
int main() {
   	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int num = 0;
	cin >> num;
	vector<int> v;
	int a = 0;
	for (int i = 0; i < num; i++){
		int tmp = 0;
		cin >> tmp;
		if(tmp == 0){			
			if(a == 0){
				cout << 0 << '\n';
				
			}
			else {
				cout << MIN_PQ.top() << "\n";
				MIN_PQ.pop();
				a--;
			}
		}
		else{
			MIN_PQ.push(tmp);
			a++;
		}
	}
	
    return 0;
}
