#include <iostream>
#include "Span.Class.hpp"

int		main(){
	std::srand(time(NULL));
	Span span1 = Span(15000);
	for (int i = 0; i < 15000; i++){
		span1.addNumber(std::rand());
	}
	std::cout << "\033[1;31mSPANNER 1\033[m" << std::endl;
	try{
		std::cout << "Shortest Span: " << span1.shortestSpan() << std::endl;
	} catch (std::exception &e){
		std::cout << "Could not get min or max span, not enough space initilized" << std::endl;
	}
	try{
		std::cout << "Longest Span " << span1.longestSpan() << std::endl;
	} catch (std::exception &e){
		std::cout << "Could not get min or max span, not enough space initilized" << std::endl;
	}
	Span span2 = Span(75);
	std::vector<int> v;
	for (int i = 0; i < 75; i++)
		v.push_back(std::rand());
	span2.addVect(v);
	std::cout << "\033[1;31mSPANNER 2\033[m" << std::endl;
	try{
		std::cout << "Shortest Span: " << span2.shortestSpan() << std::endl;
	} catch (std::exception &e){
		std::cout << "Could not get min or max span, not enough space initilized" << std::endl;
	}
	try{
		std::cout << "Longest Span " << span2.longestSpan() << std::endl;
	} catch (std::exception &e){
		std::cout << "Could not get min or max span, not enough space initilized" << std::endl;
	}
	std::cout << "\033[1;31mERROR CHECKING PROOF\033[m" << std::endl;
	std::cout << "v.size() = " << v.size() << std::endl;
	Span span3 = Span(15);
	try{
		span3.addVect(v);
	} catch (std::exception &e){
		std::cout << "Can't push to vector, input is too large." << std::endl;
	}
	for (int i = 1; i < 20; i++){
		try{
			span3.addNumber(i);
			std::cout << i << std::endl;
		} catch (std::exception &e){
			std::cout << "cant push: " << i << ". I am full. Max Size = 15" << std::endl;
		}
	}
	Span span4 = Span(0);
	try{
		span4.addNumber(1);
	} catch(std::exception &e){
		std::cout << "Could not add to vector, no space" << std::endl;
	}
	try{
		std::cout << "Shortest Span: " << span4.shortestSpan() << std::endl;
	} catch (std::exception &e){
		std::cout << "Could not get min or max span, not enough space initilized" << std::endl;
	}
	try{
		std::cout << "Longest Span " << span4.longestSpan() << std::endl;
	} catch (std::exception &e){
		std::cout << "Could not get min or max span, not enough space initilized" << std::endl;
	}
}

