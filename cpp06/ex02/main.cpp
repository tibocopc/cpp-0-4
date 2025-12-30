/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:11:45 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/12 19:20:27 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"
#include <iostream>
#include <string>

int	main(void)
{
    Base	base;
    Base	*a = base.generate();
    
    base.identify(a);
    base.identify(*a);
    delete a;

    return (0);
}