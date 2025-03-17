/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:56:15 by ltheveni          #+#    #+#             */
/*   Updated: 2025/03/17 15:38:25 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"

int main(void) {
  Base *p1 = generate();
  std::cout << "pointeur: ";
  identify(p1);
  std::cout << "reference: ";
  identify(*p1);
  identify(NULL);
  delete p1;
  return 0;
}
