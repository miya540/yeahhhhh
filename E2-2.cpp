#include<iostream>
using namespace std;

int main(){
	
	int a, b, c;
	
	cout << "�п�J�A���T��=�T��" << endl ;
	cin >> a >> b >> c ;
	
	if ( (a+b)>c || (a+c)>b || (b+c)>a ){	
		if ( (a==b) || (b==c) ){
			cout << "�ᤣ�A4���y" ; 
		}
		else if ( (a*a)==(b*b)+(c*c) || (b*b)==(a*a)+(c*c) || (c*c)==(a*a)+(b*b) ){
			cout << "��C�A4����";
		} 
		else {
			cout << "�A�N�u�O�ӤT����" ; 
		}

	}
	
	else {
		cout << "��4�����T���ΡA�^�a���m����" ; 
	}
	
	return 0;
	system("pause");
} 
