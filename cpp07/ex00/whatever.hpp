/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:23:22 by tniagolo          #+#    #+#             */
/*   Updated: 2025/12/10 17:02:14 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

template <typename T> void swap(T &x, T &y)
{
	T	tmp;

	tmp = x;
    x = y;
	y = tmp;
}

template <typename T> T min(T x, T y)
{
	return ((x < y) ? x : y);
}
template <typename T> T max(T x, T y)
{
	return ((x > y) ? x : y);
}