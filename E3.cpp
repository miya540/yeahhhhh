#include<iostream>
using namespace std;

int main(){
	
	int a, sum=1 , i=1 ;
	
	cout << "�п�J�@�ӼƦr:" ;
	cin >> a ;
	
	if(a>0){
		while(i<=a){
			sum=sum*i ;
			i++ ;
		}
		cout << a << "! = " << sum ;
	}
	else{ 
		cout << "���i�H�p��0�A�A�ݹL���h�O�t�٬O0�ܡA���S���ǹL�ƾǪ�?" ; 
	}
	
	return 0;
	system("pause");
}
