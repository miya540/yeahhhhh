#include<iostream>
using namespace std;

int main(){
	
	int a, b, c;
	
	cout << "請輸入第一個整數:" ;  
	cin >> a ; 
	cout << "請輸入第二個整數:" ;
	cin >> b ;
	cout << "請輸入第三個整數:" ;
	cin >> c ; 
 
 	if ( (a>b) && (a>c) ){
 			cout << a << ">" ;
	  	if (b>c){
	  		cout << b << ">" << c ;  }
	  	else{
	  		cout << c << ">" << b ;  }
	}
	
	else if ( (b>a) && (b>c) ){
 			cout << b << ">" ;
	  	if (a>c){
	  		cout << a << ">" << c ; }
	  	else{
	  		cout << c << ">" << a ; }
	}
	
	else if ( (c>a) && (c>b) ){
 			cout << c << ">" ;
	  	if (b>a){
	  		cout << b << ">" << a ; }
	  	else{
	  		cout << a << ">" << b ; }
	}
	
	return 0;
 	system("pause");
	  	
}
