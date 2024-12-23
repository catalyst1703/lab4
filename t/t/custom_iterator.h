#ifndef CUSTOM_ITERATOR_H
#define CUSTOM_ITERATOR_H
template<typename T>
class custom_iterator {
private:
    T* _ptr;

public:
    explicit custom_iterator(T* ptr);

    T& operator*();                     
    custom_iterator<T>& operator++();          
    custom_iterator<T> operator++(int);     

    bool operator==(const custom_iterator<T>& other) const;

    bool operator!=(const custom_iterator<T>& other) const;

    bool operator<(const custom_iterator<T>& other) const;

    bool operator>(const custom_iterator<T>& other) const;

    bool operator<=(const custom_iterator<T>& other) const;

    bool operator>=(const custom_iterator<T>& other) const;
};



template<typename T>
inline custom_iterator<T>::custom_iterator(T* ptr): _ptr(ptr) {}

template<typename T>
inline T& custom_iterator<T>::operator*()
{
    return *_ptr;
}

template<typename T>
inline custom_iterator<T>& custom_iterator<T>::operator++()
{
    ++_ptr;
    return *this;
}

template<typename T>
inline custom_iterator<T> custom_iterator<T>::operator++(int)
{
    custom_iterator<T> temp = *this;
    ++_ptr;
    return temp;
}

template<typename T>
inline bool custom_iterator<T>::operator==(const custom_iterator<T>& other) const
{
    return _ptr == other._ptr;
}

template<typename T>
inline bool custom_iterator<T>::operator!=(const custom_iterator<T>& other) const
{
    return _ptr != other._ptr;
}

template<typename T>
inline bool custom_iterator<T>::operator<(const custom_iterator<T>& other) const
{
    return _ptr < other._ptr;
}

template<typename T>
inline bool custom_iterator<T>::operator>(const custom_iterator<T>& other) const
{
    return _ptr > other._ptr;
}

template<typename T>
inline bool custom_iterator<T>::operator<=(const custom_iterator<T>& other) const
{
    return _ptr <= other._ptr;
}

template<typename T>
inline bool custom_iterator<T>::operator>=(const custom_iterator<T>& other) const
{
    return _ptr >= other._ptr;
}

#endif // !CUSTOM_ITERATOR_H