/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tniagolo <tniagolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:36:47 by tniagolo          #+#    #+#             */
/*   Updated: 2025/11/12 19:13:29 by tniagolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <climits>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <stdint.h>
#include <string>

class Base
{
  public:
	virtual ~Base();

	Base *generate(void);
	void identify(Base *p);
	void identify(Base &p);
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};