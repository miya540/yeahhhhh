#include<iostream>
using namespace std;

int main(){
	
	int a, i=1 , f1=1, f2=0, sum=0 ;
	
	cout << "請輸入你想要的數字: ";
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
		cout << "拜託最小就是1你還小於1" ; 
	}
	 
	return 0;
	system("pause");
}
