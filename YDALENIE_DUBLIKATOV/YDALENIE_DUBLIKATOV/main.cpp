//
//  main.cpp
//  YDALENIE_DUBLIKATOV
//
//  Created by Anastasiya Charykova on 25.09.2024.
//

#include <iostream>
#include <set> // для хранения уникальных знаяений



int main(){
  int a;
  std::cout << "[IN]: ";
  std::cin >> a;

  std::set<int> uniaqueNumbers; // создаем сет для хранения уникальных чисел в отсортированном порядке
  
  for (int i = 0; i < a; ++i){ // считываем числа и добавляем их в сет
    int number;
    std::cin >> number;
    uniaqueNumbers.insert(number); // добавляем число в сет
    
  }

  std::cout << "[OUT]: " << std::endl;
    for (auto it = uniaqueNumbers.rbegin(); it != uniaqueNumbers.rend(); ++it) { // проходим по всем элементам в обратном порядке и выводим их
          std::cout << *it << std::endl;
      }

      return 0;
  }
  
