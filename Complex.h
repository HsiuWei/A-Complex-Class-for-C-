#ifndef COMPL_MARK
#define COMPL_MARK

#include <iostream>
using namespace std;

class Compl{

public:

	//     returnType functionNmae overloadedOperater (inputType)
	//     friend istream>>(istream &,___);
	//                         v-------creating an ostream obj to store result
	friend istream& operator>>(istream &,Compl &);
	friend ostream& operator<<(ostream &,Compl &);
	
	//     returnType functionNmae overloadedOperater (inputType)
	//     friend ___ operator_(___); 
	friend Compl operator+(Compl &,Compl &);
	friend Compl operator-(Compl &,Compl &);
	friend Compl operator*(Compl &,Compl &);

	int realPart,imagPart;

private:

};

#endif