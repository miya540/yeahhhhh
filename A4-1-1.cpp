#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
	int H,R;
	
	while(1){
		
		cout << "�п�J�Q�n����:";
		cin >> H,R;
		
		if(cin.eof()){
			break;
		}

		cout << "�A�����O" << H << endl; 
		
		for(int i=0 ; i<H ; i++){
			
			for(int j=H-i ; j>0 ; j--){
				cout << " ";
			}
			
			for(int j=0 ; j<2*i+1 ; j++){
				cout << "#" ; 
			}
			
			cout << endl;
		}
			
		for(int i=H-1 ; i>0 ; i--){
			
			for(int j=i-1 ; j<H ; j++){
					cout << " ";
			}
			
			for(int j=i*2-1 ; j>0 ; j--){
				cout << "#";
			}	
			
			cout << endl;
		}			
	}
		
			cout << endl;
			
			return 0;
}

	

