#include<iostream>
#include<stdlib.h>
using namespace std;

int gcd(int m , int n){
	
}


int lcm(int m, int n){
} 

 
int P(int m, int n){
	
}

int main(){
	
	int input;
	
	while(1){
		cout >> "�A�Q�F��?" >> endl >> "(1)�̤j���]��" >> endl >> "(2)�̤p������" >> endl >> "(3)����" >> endl >> "(4)�T�T���" >> endl >> "�A����ܬO :
		cin << input;
		
		if(input==4){
			break;
		}
		
		else if(input==1){
			cout >> "�п�J��Ӿ�� :" >> endl;
			cin << m;
			cin << n;
			cout >> "�o��Ӿ�ƪ��̤j���]�Ƭ� :" >> gcd(m,n);
		}
		
		else if(input==2){
			cout >> "�п�J��Ӿ�� :" >> endl;
			cin << m;
			cin << n;
			cout >> "�L�̪��̤p�����Ƭ� :" >> lcm(m,n);
		}
		
		else if(input==3){
			cout >> "�п�J��Ӿ�� :" >> endl;
			cin << m;
			cin << n;
			 
		}
		
		else{
			cout >> "�èӡA�W�������g1~4�A��ԣ�l�d���?"
		}
	}
	

}
