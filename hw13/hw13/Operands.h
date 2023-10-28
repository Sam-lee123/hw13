#pragma once

//Create a base class called Operand

class Operand
{
public:
	virtual ~Operand();

};


///Give it a virtual destructor to avoid any weird problems later on!





//Derive a class called Number from Operand
//Maintain a double member variable in class Number
//For simplicity, you may make the member variable public if you would like
class Number : public Operand
{
public:

	Number(double v);
	double value;

};


//Derive a class called Operator from Operand
class Operator : public Operand
{
	//nothing here
};


//Derive a class called Add from Operator(2 + 3 = 5)
class Add : public Operator
{
	//nothing here...
};


//Derive a class called Subtract from Operator(5 - 2 = 3)
class Subtract : public Operator
{
	//nothing here...
};

//Derive a class called Multiply from Operator(5 * 3 = 15)
class Multiply : public Operator
{
	//nothing here...
};

//Derive a class called Divide from Operator(18 / 6 = 3)
class Divide : public Operator
{
	//nothing here...
};

//Derive a class called Square from Operator(3 ^ 2 = 9)
class Square : public Operator
{
	//nothing here...
};



/*
Almost all of the above classes are going to be "empty" classes

As described above, only class Number will have a true constructor with a member variable and member functions
Everything else will actually be empty!Like seriously empty!
If you wish you can put all of the classes described above into a single file called Operands.h

*/
