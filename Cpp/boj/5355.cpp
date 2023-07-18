#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base:: sync_with_stdio(false); cin.tie(NULL);
	double c;
	int sum;
	int num;
	cin >> num;
	
	char a;
	for(int i =0; i < num; i++){
		cin >> c;
	
	
	
	while(1){
		cin.get(a);
		if( a== '\n'){
			break;
		}
	if(a == '@'){
		c *= 3;
	}
	else if(a == '%'){
		c += 5;
	}
	else if(a == '#'){
		c-= 7;
	}
	}
		cout << fixed;
		cout.precision(2);
		cout << c << '\n';
		
	}
	return 0;
	
}

