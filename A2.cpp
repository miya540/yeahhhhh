#include<iostream>
using namespace std;

int main(){
	
	int a, b, c;
	
	cout << "�п�J�Ĥ@�Ӿ��:" ;  
	cin >> a ; 
	cout << "�п�J�ĤG�Ӿ��:" ;
	cin >> b ;
	cout << "�п�J�ĤT�Ӿ��:" ;
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
