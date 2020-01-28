#include<string>
#include<iostream>
#include<fstream>
#include <cstdlib>
#include <math.h>
using namespace std;
int main(){
	ifstream source;
		source.open("C:\\Users\\lab314-54\\Desktop\\lab9-2562-2-Siriphong-K\\score.txt");
			string text;
			double sum=0.00;
			double sum2=0.00;
			int i=0;
			double SD=0.00;
			double mean;
	ofstream dest;
		dest.open("C:\\Users\\lab314-54\\Desktop\\lab9-2562-2-Siriphong-K\\score01_copy.txt");
				while(getline(source,text)){
						dest<<text<<"\n";
						sum=sum+atof(text.c_str());
						sum2+=atof(text.c_str())*atof(text.c_str());
						i++;
				}
				mean=sum/i;
				SD=sqrt((sum2/i)-(mean*mean));
			dest<<"Number of data = "<<i<<"\n";
			cout<<"Number of data = "<<i<<"\n";
			dest<<"Mean = "<<mean<<"\n";
			cout<<"Mean = "<<sum/i<<"\n";
			dest<<"Standard deviation = "<<SD<<"\n";
			cout<<"Standard deviation = "<<SD<<"\n";
				dest.close();

}
