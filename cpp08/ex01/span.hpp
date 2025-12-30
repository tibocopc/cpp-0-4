#pragma once

#include <vector>
#include <iostream>
#include <bits/stdc++.h>

class span {
    private :
        const size_t _maxSize;
        std::vector<int> _n;
    public :
    span();
    span(unsigned int n);
    ~span();

    // span &operator=(const span &copy);
    void addNumber(const int num);
    int shortestSpan(void);
    int longestSpan(void);
};