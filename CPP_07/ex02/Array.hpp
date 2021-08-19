#ifndef ARRAY_HPP
# define ARRAY_HPP

template <class T>
class Array {
private:
	T *arr;
	unsigned int arrSize;

public:
	Array();
	Array(unsigned int n);
	~Array();
	Array(const Array&);
	Array<T>& operator=(const Array&);
	T& operator[](int i);

	unsigned int size() const;

	class ArrayRangeException : public std::exception {
		public :
			virtual const char* what() const throw() {
				return ("Out of range.");
			}
	};

	T* getArr() const;
};

template <class T>
Array<T>::Array() {
	this->arr = new T[0];
	this->arrSize = 0;
}

template <class T>
Array<T>::Array(unsigned int n) {
	this->arr = new T[n];
	this->arrSize = n;
}

template <class T>
Array<T>::~Array() {
	delete [] this->arr;
}

template <class T>
Array<T>::Array(const Array& other) {
	this->arrSize = other.size();
	this->arr = new T[this->arrSize];
	const T* otherArr = other.getArr();
	for (unsigned int i = 0; i < this->arrSize; i++) {
		this->arr[i] = otherArr[i];
	}
}

template <class T>
Array<T>& Array<T>::operator=(const Array& other) {
	this->arrSize = other.size();
	delete [] this->arr;
	this->arr = new T[this->arrSize];
	const T* otherArr = other.getArr();
	for (unsigned int i = 0; i < this->arrSize; i++) {
		this->arr[i] = otherArr[i];
	}
	return (*this);
}

template <class T>
T& Array<T>::operator[](int i) {
	if (i < 0 || static_cast<unsigned int>(i) >= this->arrSize)
		throw ArrayRangeException();
	return (this->arr[i]);
}

template <class T>
unsigned int Array<T>::size() const {
	return (this->arrSize);
}

template <class T>
T* Array<T>::getArr() const {
	return (this->arr);
}

#endif
