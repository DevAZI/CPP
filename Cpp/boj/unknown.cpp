#include<iostream>
#include<vector>
using namespace std;

int main(){
	ios_base:: sync_with_stdio(false); cin.tie(NULL);
	
	int row, col;
	cin >> col >> row;
	
		
	char arr[row+1][col+1];
	
	for(int i=0; i < row; i++){
		cin >> arr[i];
	}
	
	for(int i =0 ; i< col; i++){
		for(int j = 0 ; row; j ++){
			cout << arr[i][j];
		}
		cout << '\n';
	}
	
	
	
	
	
	
	return 0;
	
}


