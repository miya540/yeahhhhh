#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int ID, W;
	float Hcm, Hm, BMI;
	
	cout << "BMI = Weight/(Height^2)" << endl ;
	cout << "請輸入你的學號:"  ;
	cin >> ID;
	cout << "請輸入你的體重:" ;
	cin >> W;
	cout << "請輸入你的身高(CM):"  ;
	cin >> Hcm ;
	
	Hm = Hcm/100 ;
	BMI = W/(Hm*Hm) ;
	
	cout << "嗨一!" << ID << endl ; 
	cout << setprecision(3) << "你的BMI是:" << BMI ;
	return 0;
	system("pause");

}
