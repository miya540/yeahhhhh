#include<iostream>
using namespace std;

int main(){
	
	int a, sum=1 , i=1 ;
	
	cout << "請輸入一個數字:" ;
	cin >> a ;
	
	if(a>0){
		while(i<=a){
			sum=sum*i ;
			i++ ;
		}
		cout << a << "! = " << sum ;
	}
	else{ 
		cout << "不可以小於0，你看過階層是負還是0嗎，有沒有學過數學阿?" ; 
	}
	
	return 0;
	system("pause");
}
