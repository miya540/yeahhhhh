#include<iostream>
using namespace std;

int main(){
	
	int a, i=1 , f1=1, f2=0, sum=0 ;
	
	cout << "�п�J�A�Q�n���Ʀr: ";
	cin >> a ;
	
	if(a>0){
		cout << 1 ;
		while(i<a){
			sum = f1+f2 ;
			cout << "," << sum ;
			f2 = f1 ;
			f1 = sum ;		
			i++ ;
		}	
	}
	
	else{
		cout << "���U�̤p�N�O1�A�٤p��1" ; 
	}
	 
	return 0;
	system("pause");
}
