#include <iostream>
#include <iomanip>
#include "MutantStack.class.hpp"

int		main(){
	MutantStack<int>mStack;
	std::cout << "\033[1;32mStack is naturally Last in First out, everything in mStack will reverse this.\033m" << std::endl;
	std::cout << "\033[1;33mis mStack Empty:\033[m " << mStack.empty() << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;34mSize before first push\033[m " << mStack.size() << std::endl;
	mStack.push(17);
	std::cout << "\033[1;31m*---TOP---*\033[m " << mStack.top() << std::endl;
	std::cout << "\033[1;34mSize after push:\033[m " << mStack.size() << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;32mis mStack Empty:\033[m " << mStack.empty() << std::endl;
	mStack.pop();
	std::cout << "\033[1;34mSize after pop:\033[m " << mStack.size() << std::endl;
	std::cout << "\033[1;33mis mStack Empty:\033[m " << mStack.empty() << std::endl;

	for (int i = 0; i < 10; i++)
		mStack.push(i);
	MutantStack<int>::iterator it = mStack.begin();
	MutantStack<int>::iterator ite = mStack.end();
	it++;
	it--;
	std::cout << std::endl;
	std::cout << mStack.size() << " \033[1;35mitems in mStack\033[m" << std::endl;
	int j = 0;
	while (it != ite){
		std::cout << j << " \033[1;31m-->\033[m " << *it << std::endl;
		it++;
		j++;
	}
	std::cout << std::endl;
	std::stack<int>s(mStack);
	std::cout << "\033[1;35mCopied mStack to s->mStack2\033[m" << std::endl;
	MutantStack<int>mStack2(s);
	std::cout << std::endl;
	std::cout << s.size() << " \033[1;35mitems in std::stack\033[m" << std::endl;
	int k = 0;
	while (!s.empty()){
		std::cout << k << " \033[1;31m-->\033[m " << s.top() << std::endl;
		s.pop();
		k++;
	}
	it = mStack2.begin();
	ite = mStack2.end();
	--ite;
	++ite;
	int i = 0;
	std::cout << std::endl;
	std::cout << mStack2.size() << " \033[1;35mitems in mStack2\033[m" << std::endl;
	while (it != ite){
		std::cout << i << " \033[1;31m-->\033[m " << *it << std::endl;
		it++;
		i++;
	}
}
