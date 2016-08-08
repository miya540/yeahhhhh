#include<iostream>
#include<stdlib.h> 
#include<time.h>
using namespace std;

int main(){
	
	int i,j,g,r,k,c=1;
	srand((unsigned)time(NULL));

	while(1){
		
		if(g==-1){
			break;
		}
		else{
			for(i=1 ; g!=-1 ; i++){
				cout << "========== Round " << c << " ==========" << endl << endl;
				r=rand()%899+100;
				c++;
						
				for(j=1 ; j<6 ;j++){
					cout << j << " : 猜阿，範圍是100~999 : ";
					cin >> g;
				
					if(r!=g && g!=-1){
						k=r-g;
					
						if(-10<k && k<10){
							cout <<"只差個位喔，小笨蛋" << endl << endl;
						}
						
						else if(10<=k && k<100 || k<=-10 && k>-100){
							cout <<"差十位阿，中笨蛋" << endl << endl;
						}
					
						else{
							cout <<"差百位也太多了吧，大笨蛋" << endl << endl;
						}
					}
					
					else if(r==g){
						cout << "不得了了你會讀心術，正確數字就是" << r <<endl << endl;
						break;
					}
					
					else{
						break;
					}
				
					while(j==5){
						cout <<  "你已經猜五次了，塌拉!!! 正確答案是" << r << endl << endl;
						break;
					}
				}
			}	
		}
	}	
	
	return 0;	

}
