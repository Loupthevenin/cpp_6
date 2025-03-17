/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:38:06 by ltheveni          #+#    #+#             */
/*   Updated: 2025/03/17 15:39:07 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"

Base::~Base() {}

Base *generate(void) {
  srand(static_cast<unsigned int>(time(0)));
  int random = rand() % 3;

  if (random == 0)
    return new A();
  else if (random == 1)
    return new B();
  else
    return new C();
}

void identify(Base *p) {
  if (!p) {
    std::cout << "Null pointer" << std::endl;
    return;
  }

  if (dynamic_cast<A *>(p))
    std::cout << "A" << std::endl;
  else if (dynamic_cast<B *>(p))
    std::cout << "B" << std::endl;
  else if (dynamic_cast<C *>(p))
    std::cout << "C" << std::endl;
}

void identify(Base &p) {
  try {
    A &a = dynamic_cast<A &>(p);
    std::cout << "A" << std::endl;
    (void)a;
    return;
  } catch (std::bad_cast &) {
  }
  try {
    B &b = dynamic_cast<B &>(p);
    std::cout << "B" << std::endl;
    (void)b;
    return;
  } catch (std::bad_cast &) {
  }
  try {
    C &c = dynamic_cast<C &>(p);
    std::cout << "C" << std::endl;
    (void)c;
    return;
  } catch (std::bad_cast &) {
  }
}
