#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	protected:
		Container cont;

	public:
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator c_iterator;

		MutantStack() {}

		MutantStack(const MutantStack<T> &x) {*this = x;}

		MutantStack &operator=(const MutantStack &x)
		{
			if (this == &x)
				return (*this);
			this->cont = x.cont;
			return (*this);
		}

		~MutantStack() {}

		iterator begin()
		{
			return (cont.begin());
		}

		iterator end()
		{
			return (cont.end());
		}

		void push(T p)
		{
			cont.push_back(p);
		}

		void pop()
		{
			cont.pop_back();
		}

		T &top()
		{
			return (cont.back());
		}

		bool empty()
		{
			return (cont.empty());
		}

		size_t size()
		{
			return (cont.size());
		}

};

#endif
