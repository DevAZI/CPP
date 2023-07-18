#include<bits/stdc++.h>
using namespace std;
struct point{
	int x,y;	
};

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int num; cin >> num;
	
	vector<point> arr(num);
	for(int i = 0; i < num; i++){		
		cin >> arr[i].x >>arr[i].y;		
		
	}
	sort(arr.begin(), arr.end(), [&](struct point &p1, struct point &p2){
		if(p1.x == p2.x) return p1.y < p2.y;
		return p1.x < p2.y;
	});
	for(int i = 0 ; i < num ; i++){
		cout << arr[i].x << " " << arr[i].y << '\n';
		
	}

}