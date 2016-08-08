#include<iostream>
using namespace std;

int main(){
	
	int H;

	while(1){
	
		cout << "請輸入你想要的高:";
		cin >> H;
		
		if(cin.eof()){
			break;
		}
		
		cout << "你的高是 " << H << endl;
		
		
			for(int i=1 ; i<=H ; i++){
						
				for(int j=1 ; j<=i ; j++){
					cout << "#";
				}
		
				cout << endl;
			}
			
			cout << endl;
		
			for(int i=1 ; i<=H ; i++){
			
				for(int j=1 ; j<=H-i ; j++){
					cout << " ";
				}
				
				for(int j=1 ; j<=i ; j++){
					cout << "#";
				}
		
				cout << endl;
			}
	
	}
	
	return 0; 		
}
