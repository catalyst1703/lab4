#ifndef CUSTOM_VECTOR_H
#define CUSTOM_VECTOR_H
#include "custom_iterator.h"
template<typename T>
class custom_vector
{
public:
	custom_vector();
	~custom_vector();
	void push_back(const T& value);
	int size();
	T& operator[](int index);
	custom_iterator<T> begin();
	custom_iterator<T> end();
private:
	void resize();

	T* _data;
	int _size;
	int _capacity;
};



template<typename T>
inline custom_vector<T>::custom_vector()
{
	_data = nullptr;
	_size = 0;
	_capacity = 0;
}

template<typename T>
inline custom_vector<T>::~custom_vector()
{
	delete[] _data;
}

template<typename T>
inline void custom_vector<T>::push_back(const T& value)
{
	if (_size == _capacity)
	{
		resize();
	}
	_data[_size++] = value;
}

template<typename T>
inline int custom_vector<T>::size()
{
	return _size;
}

template<typename T>
inline T& custom_vector<T>::operator[](int index)
{
	return _data[index];
}

template<typename T>
inline custom_iterator<T> custom_vector<T>::begin()
{
	return custom_iterator<T>(_data);
}

template<typename T>
inline custom_iterator<T> custom_vector<T>::end()
{
	return custom_iterator<T>(_data + _size);
}

template<typename T>
inline void custom_vector<T>::resize()
{
	_capacity = _capacity == 0 ? 1 : _capacity * 2;
	T* newData = new T[_capacity];

	for (size_t i = 0; i < _size; ++i)
	{
		newData[i] = _data[i];
	}

	delete[] _data;
	_data = newData;
}

#endif // !CUSTOM_VECTOR_H
