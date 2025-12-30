/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:23:22 by tniagolo          #+#    #+#             */
/*   Updated: 2025/12/10 20:52:47 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T> Array<T>::Array()
{
    this->_array = NULL;
    this->_arraySize = 0;
}
template <typename T> Array<T>::Array(unsigned int n)
{
    this->_array = new T[n];
    this->_arraySize = n;
}
template <typename T> Array<T>::Array(const Array &array)
{
    this->_array = new T[array._arraySize];
    this->_arraySize = array._arraySize;
    for (size_t i = 0; i < array._arraySize; i++)
        _array[i] = array._array[i];
}
template <typename T> Array<T>::~Array()
{
    delete[] this->_array;
}

template <typename T> Array<T> &Array<T>::operator=(const Array &array)
{
    if (this != array)
    {
    delete[] _array;
    this->_array = new T[array._arraySize];
    this->_arraySize = array._arraySize;
    for (size_t i = 0; i < array._arraySize; i++)
        _array[i] = array._array[i];
    }
}
template <typename T> T &Array<T>::operator[](size_t index)
{
    if (index < 0 || index >= _arraySize)
        throw std::out_of_range("index out of bounds");
    return (_array[index]);
}
template <typename T> const T &Array<T>::operator[](size_t index) const
{
    if (index < 0 || index >= _arraySize)
        throw std::out_of_range("index out of bounds");
    return (_array[index]);
}

template <typename T> size_t Array<T>::size(const Array &array)
{
    return(array.arraySize);   
}