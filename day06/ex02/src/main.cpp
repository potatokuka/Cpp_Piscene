/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: greed <greed@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 17:53:54 by greed         #+#    #+#                 */
/*   Updated: 2020/08/03 17:53:55 by greed         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>

class Base{
	public:
		virtual ~Base();
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base::~Base(){}

Base	*generate(){
	// generate a random number 0-2 and make class from Base
	int	random = (std::rand() % 3);
	switch (random){
		case 1:
			return (new A());
		case 2:
			return (new B());
		default:
			return (new C());
	}
}

void	identity_from_pointer(Base *p){
	// see if it can be cast from pointer
	if (dynamic_cast<A*>(p))
		std::cout << "A";
	else if (dynamic_cast<B*>(p))
		std::cout << "B";
	else if (dynamic_cast<C*>(p))
		std::cout << "C";
	else
		std::cerr << "ERROR: No cast could be achieved." << std::endl;
}

void	identity_from_reference(Base &p){
	// Make temp Base and check if it can be cast with incoming info,
	// if it can, it's a match
	Base tmp;
	try{
		tmp = dynamic_cast<A&>(p);
		std::cout << "A";
	} catch(std::bad_cast exp) {}
	try{
		tmp = dynamic_cast<B&>(p);
		std::cout << "B";
	} catch(std::bad_cast exp) {}
	try{
		tmp = dynamic_cast<C&>(p);
		std::cout << "C";
	} catch(std::bad_cast exp) {}
}

int		main(){
	std::srand(time(NULL));

	for (int i = 0; i < 15; i++){
		Base *ptr = generate();
		std::cout << i + 1 << ": ptr= ";
		identity_from_pointer(ptr);
		std::cout << ", ref= ";
		identity_from_reference(*ptr);
		std::cout << std::endl;
		delete ptr;
	}
}
