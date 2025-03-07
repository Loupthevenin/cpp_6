/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:38:15 by ltheveni          #+#    #+#             */
/*   Updated: 2025/03/07 19:51:50 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstdlib>
#include <ctime>
#include <iostream>

class Base {
public:
  virtual ~Base();
  virtual void identify_type() const = 0;
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);
