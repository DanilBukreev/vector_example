#include <iostream>
class vector_t
{
private:
	int * elements_; // указатлеь на динамический массив 
	std::size_t size_; // количсетво элементов 
	std::size_t capacity_; // обьем памяти который мы выделили 
                               // если capacity == size то делаем перераспределение памяти 
public:
	vector_t();
	vector_t(vector_t const & other);
	vector_t & operator =(vector_t const & other);
	~vector_t();

	std::size_t size() const;
	std::size_t capacity() const;

	void push_back(int value); //положить эл в конец
	void pop_back(); //достать элемент (удалить)

	int & operator [](std::size_t index);
	int operator [](std::size_t index) const;

	bool operator ==(vector_t const & other) const;
};

bool operator !=(vector_t const & lhs, vector_t const & rhs);
