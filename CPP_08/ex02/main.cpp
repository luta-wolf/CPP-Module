#include "MutantStack.hpp"
#include <list>
#include <vector>

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "Top element: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "Size: "<< mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	mstack.push(-1);
	mstack.push(23);

	MutantStack<int>::iterator it = mstack.begin();
	std::cout << "Begin: " << *it << std::endl;
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	std::cout << "-----------STACK----------" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "--------------------------" << std::endl;

	std::stack<int> s(mstack);

	std::cout << std::boolalpha;
	std::cout << "Stack is empty: " << mstack.empty() << std::endl;


	std::cout << "----Copy constructor----" << std::endl;
	MutantStack<int> dstack(mstack);
	std::cout << "Mstack size: " << mstack.size() << std::endl;
	std::cout << "Dstack size: " << dstack.size() << std::endl;

	std::cout << std::endl;


	std::cout << "----Assignment operator----" << std::endl;
	MutantStack<int> nstack;

	nstack = mstack;
	std::cout << "Mstack size: " << mstack.size() << std::endl;
	std::cout << "Nstack size: " << nstack.size() << std::endl;

	std::cout << std::endl;

	std::cout << "----------LIST----------" << std:: endl;
	MutantStack<int, std::list<int> > lst;

	lst.push(1);
	lst.push(2);
	lst.push(3);
	lst.push(100);

	std::cout << "Size list: " << lst.size() << std::endl;
	std::cout << "Top element(list): " << lst.top() << std::endl;

	std::cout << "----------VECTOR----------" << std:: endl;
	MutantStack<char, std::vector<char> > v;

	v.push('a');
	v.push('b');
	v.push('c');

	std::cout << "Size vector: " << v.size() << std::endl;
	std::cout << "Top element(vector): " << v.top() << std::endl;

	return 0;
}

