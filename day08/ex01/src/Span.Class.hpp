#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP

# include <vector>

class Span{
	public:
		Span(unsigned int n);
		Span(Span const &src);
		~Span();
		Span const &operator=(Span const &rhs);
		void addNumber(int x);
		void addVect(std::vector<int> &v);
		long shortestSpan();
		long longestSpan();
	private:
		unsigned int _n;
		std::vector<int> _v;
};

#endif
