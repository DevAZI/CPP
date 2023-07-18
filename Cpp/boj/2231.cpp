#include<iostream>
#include<vector>
using namespace std;

int main(){
	ios_base:: sync_with_stdio(false); cin.tie(NULL);
	
	int a;
	int temp;
	int result;	
	cin >> a;
	for(int i= 1; i < a; i ++){
		result =i;
		temp = i;
		
		while(temp != 0){
			result += temp %10; 
			temp /= 10;
		}
		
		if(result==a){
			cout<<i;
			a=0;
			break;
		}
		
		// 134%10 =4 , 134/10=13
		// 13%10 = 3 13/10=1
		// 1%10 = 1 1/10=0
		// 	0 -> end
			
		// x + x%100 + x%10 + x

			
	}
	if(a !=0){
			cout<<"0";
		}
	
	
	
	
	
	
	
	
	return 0;
	
}


