/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 17:00:07 by tniagolo          #+#    #+#             */
/*   Updated: 2025/12/30 17:46:30 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

span::span() :  _maxSize(0)
{
    
}

span::span(unsigned int n) : _maxSize(n)
{
    this->_n.reserve(n);
}
span::~span(){
}

// span &span::operator=(const span &copy){
        
// }
void span::addNumber(int num){
    if (_n.size() >= _maxSize)
        throw std::out_of_range("Span is full");
    _n.push_back(num);
}
int span::shortestSpan(void){
    if (_n.size() < 2)
        throw std::logic_error("there is not enough number in the span");
    
    std::vector<int> sorted = _n;
    std::sort(sorted.begin(), sorted.end());
    
    int minDiff = sorted[1] - sorted[0];
    for (size_t i = 1; i < sorted.size() - 1; i++) {
        int diff = sorted[i + 1] - sorted[i];
        if (diff < minDiff)
            minDiff = diff;
    }
    return minDiff;
}
int span::longestSpan(void){
    if (_n.size() < 2)
        throw std::logic_error("there is not enough number in the span");
    
    int min = *std::min_element(_n.begin(), _n.end());
    int max = *std::max_element(_n.begin(), _n.end());
    return max - min;
}