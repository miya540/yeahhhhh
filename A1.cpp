#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int ID, W;
	float Hcm, Hm, BMI;
	
	cout << "BMI = Weight/(Height^2)" << endl ;
	cout << "�п�J�A���Ǹ�:"  ;
	cin >> ID;
	cout << "�п�J�A���魫:" ;
	cin >> W;
	cout << "�п�J�A������(CM):"  ;
	cin >> Hcm ;
	
	Hm = Hcm/100 ;
	BMI = W/(Hm*Hm) ;
	
	cout << "�٤@!" << ID << endl ; 
	cout << setprecision(3) << "�A��BMI�O:" << BMI ;
	return 0;
	system("pause");

}
