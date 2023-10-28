#include "Operands.h"
#include <cassert>
#include <iostream>
#include <queue>
#include <stack>


double Calculate(std::queue<Operand*> q)
{
	std::stack<double> s;

	while (q.empty() == false)
	{
		Operand* o = q.front();
		q.pop();
		Number* n = dynamic_cast<Number*>(o);
		if (n != nullptr)
		{
			s.push(n -> value);
		}

		else if (dynamic_cast<Add*>(o) != nullptr)
		{
			double a = s.top();
			s.pop();
			double b = s.top();
			s.pop();
			s.push(a + b);
		}

		else if (dynamic_cast<Subtract*>(o) != nullptr)
		{
			double a = s.top();
			s.pop();
			double b = s.top();
			s.pop();
			s.push(a - b);
		}

		else if (dynamic_cast<Multiply*>(o) != nullptr)
		{
			double a = s.top();
			s.pop();
			double b = s.top();
			s.pop();
			s.push(a * b);
		}

		else if (dynamic_cast<Divide*>(o) != nullptr)
		{
			double a = s.top();
			s.pop();
			double b = s.top();
			s.pop();
			s.push(a / b);
		}

		else if (dynamic_cast<Square*>(o) != nullptr)
		{
			double a = s.top();
			s.pop();
			double b = s.top();
			s.pop();
			s.push(a*a);
		}
	}
	if (s.size() != 1)
		throw std::exception("stack contains wrong number of elements");

	return s.top();

}



int main()
{
	std::queue<Operand*> a;
	a.push(new Number(11));
	a.push(new Number(9));
	a.push(new Multiply());
	a.push(new Square());

	std::cout << Calculate(a) << std::endl;    // Prints 3

	system("pause");
	return 0;




}