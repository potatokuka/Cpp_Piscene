#ifndef MUTANTSTACK_CLASS_HPP
# define MUTANTSTACK_CLASS_HPP

#include <stack>
#include <string>

template<typename T>
class MutantStack : public std::stack<T>{
	private:
	public:
		MutantStack() : std::stack<T>(){}
		virtual ~MutantStack(){}
		MutantStack(std::stack<T> const &src) : std::stack<T>(src){}
		MutantStack(MutantStack const &src) : std::stack<T>(src){}
		using std::stack<T>::operator=;
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(){return std::begin(std::stack<T>::c);}
		iterator end(){return std::end(std::stack<T>::c);}
};

#endif
