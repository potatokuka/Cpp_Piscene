#include <vector>
#include <algorithm>
#include <limits.h>
#include <cstdlib>

#include "Span.Class.hpp"

Span::Span(unsigned int n) : _n(n){
	// reserve a line of space that is the size of the vector
	// this stops it from continuesly forcing copies
	_v.reserve(n);
}

Span::Span(Span const &src){
	*this = src;
}

Span::~Span(){
	// swaps in an empty vector, this making it NULL
	std::vector<int>().swap(this->_v);
}

Span const &Span::operator=(Span const &rhs){
	if (this->_v == rhs._v)
		return (*this);
	this->_v = rhs._v;
	this->_n = rhs._n;
	return (*this);
}

void Span::addNumber(int x){
	if (this->_v.size() >= this->_n)
		throw std::exception();
	this->_v.push_back(x);
}

void Span::addVect(std::vector<int> &v){
	if (v.size() + this->_v.size() > this->_n)
		throw std::exception();
	this->_v.insert(this->_v.end(), v.begin(), v.end());
}

long	Span::shortestSpan(){
	long	minDif = LONG_MAX;
	long	dif;

	if (this->_n <= 1)
		throw std::exception();
	std::vector<int>cpy = this->_v;
	std::sort(cpy.begin(), cpy.end());
	std::vector<int>::iterator last = cpy.begin();
	for (std::vector<int>::iterator iter = cpy.begin() + 1;
			iter != cpy.end(); iter++)
	{
		dif = std::abs(static_cast<long>(*iter) - static_cast<long>(*last));
		if (dif < minDif)
			minDif = dif;
		last = iter;
	}
	return (minDif);
}

long	Span::longestSpan(){
	if (this->_n <= 1)
		throw std::exception();
	return (static_cast<long>(*std::max_element(this->_v.begin(), this->_v.end())) - 
			static_cast<long>(*std::min_element(this->_v.begin(), this->_v.end())));
}
