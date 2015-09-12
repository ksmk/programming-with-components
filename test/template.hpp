#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

template <typename T, int size>
class Stack
{
private:
	T arr[size];
	int index;
public:
	void insertS (const T& x) throw (std::out_of_range);
	T popS() throw (std::out_of_range);
	int sizeS() const { return index; }
};

template <typename T, int size>
void Stack::insertS (const T& x) throw (std::out_of_range)
{
	if (index >= size) throw std::out_of_range("StackOverFlow");
	arr[index++] = x;
}


#endif
