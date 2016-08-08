#include<iostream>
#include<stdlib.h> 
#include<time.h>
using namespace std;

int main(){
	
	int x[3],y[3],num[10];
	int i,j,m,temp,guess,c=1;
	int A=0,B=0;
	srand((unsigned)time(NULL));

	while(1){
		
		if(guess==-1){
			break;
		}
		
		else{
			for(i=1 ; guess!=-1 ; i++){
				cout << "========== Round " << c << " ==========" << endl << endl;
				
				for(i=0 ; i<10 ; i++){
					num[i]=1;//1代表這個數字沒用過 
				}
				
				temp=rand()%9+1;
					
				if(num[temp]==1){
					x[0]=temp;
					num[temp]=0;
				}
				
				for(i=1 ; i<3 ; i++){
					temp=rand()%10;
					
					if(num[temp]==1){
						x[i]=temp;
						num[temp]=0;
					}
					
					else{
						i--;
					}
				}
				
				for(i=0 ; i<3 ; i++){
					cout << x[i];
				}
				
				cout << endl;
				
				c++;
						
				for(m=1 ; m<6 ; m++){
					cout << m << " : 猜阿，三位數字 : ";
					cin >> guess;
					y[0]=guess/100;
					y[1]=(guess-y[0]*100)/10;
					y[2]=guess-y[0]*100-y[1]*10;
				
					for(i=0 ; i<3 ; i++){
						for(j=0 ; j<3 ; j++){
							if(x[i]==y[j]){
								if(i==j){
									A++;
								}
								else{
									B++;
								}
							}	
						}
					}
					
					if(A==3){
						cout << "不得了了你會讀心術嗎?!!!" << endl << endl;
						break;
					} 
					
					else{
						cout << A << "A" << B <<"B，加油阿朋友w" << endl << endl;
						A=0;
						B=0;
					}
					
					while(m==5){
						cout <<  "你已經猜五次了，塌拉!!!正確答案是";
						for(i=0 ; i<3 ; i++){
							cout << x[i];
						}
						cout << endl << endl;
						break;
						
					}
				}
			}	
		}
	}	
	
	return 0;	

}
