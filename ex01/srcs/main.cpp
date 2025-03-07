/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 18:54:59 by ltheveni          #+#    #+#             */
/*   Updated: 2025/03/07 19:07:57 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"
#include <iostream>
#include <string>

int main(void) {
  Data mydata("hello world!", 42);

  uintptr_t serialized = Serializer::serialize(&mydata);
  Data *deserialized = Serializer::deserialize(serialized);

  if (&mydata == deserialized) {
    std::cout << "Success" << std::endl;
    std::cout << "Data: " << deserialized->name << ", " << deserialized->n
              << std::endl;
  } else {
    std::cout << "Echec !" << std::endl;
  }
  return 0;
}
