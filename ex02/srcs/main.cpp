/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:56:15 by ltheveni          #+#    #+#             */
/*   Updated: 2025/03/07 19:59:30 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"

int main(void) {
  Base *p1 = generate();
  std::cout << "pointeur: ";
  identify(p1);
  std::cout << "reference: ";
  identify(*p1);
  delete p1;
  return 0;
}
