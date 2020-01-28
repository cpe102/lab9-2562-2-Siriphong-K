#include<iostream>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<"\n";
	int i=1;
	char grade;
	int N=0;
	do{		cout <<"Student [" <<i++<< "]:";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade=='A'){ 
			count[0]++;
				N++;
		}else if(grade=='B'){
			count[1]++;
				N++;
		}
		else if(grade=='C'){
			count[2]++;	
				N++;
		}
		else if(grade=='D'){
			count[3]++;	
				N++;
		}
		else if(grade=='F'){
			count[4]++;	
				N++;
		}
		else{ 
		cout<<"Wrong input. Please input again."<<"\n";
		i--;
		} 
	}while(grade!='0');

	
	
	cout << "In total "<<N<<" students."<< "\n";
	cout << "A = " << count[0] <<",";
	cout << "B = " << count[1] <<",";
	cout << "C = " << count[2] <<",";
	cout << "D = " << count[3] <<",";
	cout << "F = " << count[4] <<",";	
	//	and so on ... for grade = C, D, F	
	
	
	return 0;
}
