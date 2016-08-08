#include<iostream>
#include<stdlib.h>
using namespace std;

unsigned long long F(long n){
	
	if(n==0||n==1){
		return 1;
	}
	
	else{
		return F(n-1)*n;
	}
}

int main(){
	
	unsigned long long input,digit,i;
	unsigned long long result;
		
	while(1){
		cout << "請輸入你想要的數字 : ";
		cin >> input;
		
		if(input==-1){
			cout << "不要離開阿QQQQQQQQQQQQQQQQQQQQQQQQ"; 
			break;
		}
	
		else if(input>0){
			result = F(input);
			cout << input << "! = " << result;
			digit=1;
			i=result/10;		
			while(i>0){
				digit++;
				i=i/10;
			}
			
			cout << " , " << digit << "digits" << endl << endl;
		}
	
		else{
			cout <<"小笨蛋，大於1的整數阿" << endl << endl; 
		}
	}
}

