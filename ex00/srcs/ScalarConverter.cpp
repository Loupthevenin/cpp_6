/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:46:19 by ltheveni          #+#    #+#             */
/*   Updated: 2025/03/07 17:57:17 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

void ScalarConverter::convert(const std::string &literal) {
  char c;
  int i;
  float f;
  double d;

  if (literal == "-inff" || literal == "+inff" || literal == "nanf") {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << literal << std::endl;
    std::cout << "double: " << literal.substr(0, literal.length() - 1)
              << std::endl;
    return;
  }

  if (literal == "-inf" || literal == "+inf" || literal == "nan") {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << literal << "f" << std::endl;
    std::cout << "double: " << literal << std::endl;
    return;
  }

  if (literal.length() == 1 && !isdigit(literal[0])) {
    c = literal[0];
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << std::endl;
    return;
  }

  std::string newLiteral = literal;
  if (newLiteral[newLiteral.length() - 1] == 'f' &&
      newLiteral.find('.') != std::string::npos) {
    newLiteral = newLiteral.substr(0, newLiteral.length() - 1);
  }
  std::istringstream iss(newLiteral);
  iss >> d;
  f = static_cast<float>(d);

  if (iss.fail() || !iss.eof()) {
    std::cout << "Invalid input" << std::endl;
    return;
  }
  i = static_cast<int>(d);
  f = static_cast<float>(d);

  if (d < std::numeric_limits<char>::min() ||
      d > std::numeric_limits<char>::max() || std::isnan(d))
    std::cout << "char: impossible" << std::endl;
  else if (!std::isprint(i))
    std::cout << "char: Non displayable" << std::endl;
  else
    std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;

  if (d < std::numeric_limits<int>::min() ||
      d > std::numeric_limits<int>::max() || std::isnan(d))
    std::cout << "int: impossible" << std::endl;
  else
    std::cout << "int: " << i << std::endl;

  std::cout << "float: " << f;
  if (f == i)
    std::cout << ".0";
  std::cout << "f" << std::endl;

  std::cout << "double: " << d;
  if (d == i)
    std::cout << ".0";
  std::cout << std::endl;
}
