#include "Complex.h"

#include <iostream>
using namespace std;



istream& operator>>(istream &input,Compl &c1){
	cout<<"Please enter a complex number Z=X+jY, X:";
	input>>c1.realPart;
	
	cout<<" Y:";
	input>>c1.imagPart;

	cout<<endl;

	return input;
}

ostream& operator<<(ostream &output,Compl &c1){
	output<<"("<<c1.realPart<<","<<c1.imagPart<<")";
	return output;
}



Compl operator+(Compl &A,Compl &B){
	Compl temp;//create an obj for storing the result
	temp.realPart = A.realPart+B.realPart;
	temp.imagPart = A.imagPart+B.imagPart;
	return temp;
}
Compl operator-(Compl &A,Compl &B){
	Compl temp2;
	temp2.realPart = A.realPart-B.realPart;
	temp2.imagPart = A.imagPart-B.imagPart;
	return temp2;
}
Compl operator*(Compl &A,Compl &B){
	Compl temp3;
	temp3.realPart = A.realPart*B.realPart-A.imagPart*B.imagPart;
	temp3.imagPart = A.realPart*B.imagPart+A.imagPart*B.realPart;
	return temp3;
}

