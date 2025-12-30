#pragma once

#include <vector>
#include <iostream>
#include <bits/stdc++.h>

template <typename T>
typename T::iterator easyfind(T& container, int toFind)
{
    return std::find(container.begin(), container.end(), toFind);
}