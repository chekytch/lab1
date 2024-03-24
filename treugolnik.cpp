#include <iostream>
#include <math.h>
using namespace std;
int perimetr(int a,int b,int c){
	return a+b+c;
}
double geron(int a,int b,int c){
	double p=perimetr(a,b,c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
bool rb(int a,int b,int c){
	if((a==b)||(a==c)||(b==c)){
		return 1;
	}else{return 0;}
}
int main(){
	int side1,side2,side3;
	cout<<"enter side1 length: ";
	cin>>side1;
	cout<<"enter side2 length: ";
	cin>>side2;
	cout<<"enter side3 length: ";
	cin>>side3;
	cout<<"perimetr: "<<perimetr(side1,side2,side3)<<endl;
	cout<<"ploshyad: "<<geron(side1,side2,side3)<<endl;
	cout<<"ravnobedren - "<<rb(side1,side2,side3)<<endl;
	int endprogram;
	cin>>endprogram;
	return 0;
}
