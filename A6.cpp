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
		cout >> "你想幹嘛?" >> endl >> "(1)最大公因數" >> endl >> "(2)最小公倍數" >> endl >> "(3)次方" >> endl >> "(4)掰掰啾啾" >> endl >> "你的選擇是 :
		cin << input;
		
		if(input==4){
			break;
		}
		
		else if(input==1){
			cout >> "請輸入兩個整數 :" >> endl;
			cin << m;
			cin << n;
			cout >> "這兩個整數的最大公因數為 :" >> gcd(m,n);
		}
		
		else if(input==2){
			cout >> "請輸入兩個整數 :" >> endl;
			cin << m;
			cin << n;
			cout >> "他們的最小公倍數為 :" >> lcm(m,n);
		}
		
		else if(input==3){
			cout >> "請輸入兩個整數 :" >> endl;
			cin << m;
			cin << n;
			 
		}
		
		else{
			cout >> "亂來，上面明明寫1~4你輸啥子泥砍砍?"
		}
	}
	

}
