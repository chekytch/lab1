#include <iostream>
#include <math.h>
using namespace std;
//find perimetr func
int perimetr(int a,int b,int c){
	return a+b+c;
}
//find ploshyad po gerona func
double geron(int a,int b,int c){
	double p=perimetr(a,b,c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
//ravnobedrennost test bool
bool rb(int a,int b,int c){
	if((a==b)||(a==c)||(b==c)){
		return 1;
	}else{return 0;}
}
//proverka v celom
bool durak(int a,int b,int c){
	if(a>0&&b>0&&c>0&&a+b>c&&b+c>a&&a+c>b){
		return 1;
	}else{return 0;}
}
int main(){
	//vvod i init triangel's sides
	int side1,side2,side3;
	cout<<"enter side1 length: ";
	cin>>side1;
	cout<<"enter side2 length: ";
	cin>>side2;
	cout<<"enter side3 length: ";
	cin>>side3;
	//test na duraka
	if(durak(side1,side2,side3) == 0){
		cout<<"error";
		return 0;
	}
	//vivod parametrov
	cout<<"perimetr: "<<perimetr(side1,side2,side3)<<endl;
	cout<<"ploshyad: "<<geron(side1,side2,side3)<<endl;
	cout<<"ravnobedren - "<<rb(side1,side2,side3)<<endl;
	//restarting func
	cout<<"enter '1' to restart";
	int endprogram;
	cin>>endprogram;
	if(endprogram == 1){
		main();
	}else{
		return 0;
	}
}
