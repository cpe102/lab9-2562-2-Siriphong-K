#include<string>
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream source;
		source.open("C:\\Users\\lab314-54\\Desktop\\lab9-2562-2-Siriphong-K\\cheerbook.txt");
			string text;
	ofstream dest;
		dest.open("C:\\Users\\lab314-54\\Desktop\\lab9-2562-2-Siriphong-K\\cheerbook_copy.txt");
			dest<<"-------------------- SOTUS ---------------------"<<"\n";
				while(getline(source,text)){
						cout<<text<<"\n";
						dest<<text<<"\n";	
				}
			dest<<"-------------------- SOTUS ---------------------";
				dest.close();

}
