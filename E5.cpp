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
					cout << j << " : �q���A�d��O100~999 : ";
					cin >> g;
				
					if(r!=g && g!=-1){
						k=r-g;
					
						if(-10<k && k<10){
							cout <<"�u�t�Ӧ��A�p�³J" << endl << endl;
						}
						
						else if(10<=k && k<100 || k<=-10 && k>-100){
							cout <<"�t�Q����A���³J" << endl << endl;
						}
					
						else{
							cout <<"�t�ʦ�]�Ӧh�F�a�A�j�³J" << endl << endl;
						}
					}
					
					else if(r==g){
						cout << "���o�F�F�A�|Ū�߳N�A���T�Ʀr�N�O" << r <<endl << endl;
						break;
					}
					
					else{
						break;
					}
				
					while(j==5){
						cout <<  "�A�w�g�q�����F�A���!!! ���T���׬O" << r << endl << endl;
						break;
					}
				}
			}	
		}
	}	
	
	return 0;	

}
