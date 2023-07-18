#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
   	int n; //지방 수
	vector<int> arr; // 지방들
	int temp;//입력 
	int b; //budget
	cin >> n;
	for(int i =0; i<n; i++){
		cin>> temp;
		arr.push_back(temp);
	}
	cin >> b;
	sort(arr.begin(), arr.end()); // 이진 탐색을 위함
	

	int start = 0;
	int end = arr[n-1];
	int result, sum;
	while(start<=end){
		sum =0;
		int mid = (start + end) /2;
		for(int i = 0; i < n; i++){
			sum += min(mid, arr[i]);
		}
		if(b >= sum){
			result = mid;
			start = mid +1;
		}
		else end = mid -1;
	}
	
	cout << result;
	
	
    return 0;
}