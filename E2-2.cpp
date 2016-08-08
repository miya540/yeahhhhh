#include<iostream>
using namespace std;

int main(){
	
	int a, b, c;
	
	cout << "請輸入你的三邊=三圍" << endl ;
	cin >> a >> b >> c ;
	
	if ( (a+b)>c || (a+c)>b || (b+c)>a ){	
		if ( (a==b) || (b==c) ){
			cout << "喔不你4等腰" ; 
		}
		else if ( (a*a)==(b*b)+(c*c) || (b*b)==(a*a)+(c*c) || (c*c)==(a*a)+(b*b) ){
			cout << "喔耶你4直角";
		} 
		else {
			cout << "你就只是個三角形" ; 
		}

	}
	
	else {
		cout << "不4黃金三角形，回家重練懂嗎" ; 
	}
	
	return 0;
	system("pause");
} 
