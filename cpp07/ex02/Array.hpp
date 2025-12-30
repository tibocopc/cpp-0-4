/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:23:22 by tniagolo          #+#    #+#             */
/*   Updated: 2025/12/10 20:50:48 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <exception>

template <typename T> class Array
{
    private:
        T *_array;
        size_t _arraySize;
    public:
    Array();
    Array(unsigned int n);
    Array(const Array &array);
    ~Array();
    
    Array &operator=(const Array &array);
    T &operator[](size_t index);
    const T &operator[](size_t index) const;
    
    size_t size(const Array &Array);
};

#include "Array.tpp"