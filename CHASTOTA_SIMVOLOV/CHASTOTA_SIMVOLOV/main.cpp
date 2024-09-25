//
//  main.cpp
//  CHASTOTA_SIMVOLOV
//
//  Created by Anastasiya Charykova on 25.09.2024.
//

  #include <iostream> // ждя ввода и вывода
  #include <map> // для хранения частоты символов
  #include <vector> // для хранения символов и их частоты
  #include <algorithm> // для сортировки

// ф-ия для сортировки по убыванию частоты
bool compare(const std::pair<char, int>& a, const std::pair<char, int>& b){
  return a.second > b.second;// сравниваем частоты
}
int main(){
  std::string input;
  std::cout << "[IN]: ";
  std::getline(std::cin, input); // считываем строку
  std::map<char, int> frequencyMap; // карта для хранения символов и их частоты

  for (char c : input) { // проходим по каждому символу в строке
    frequencyMap[c]++; // увеличиваем частоту символа
  }
// перемещаем данные в вектор из map для сортировки
  std::vector<std::pair<char, int>> frequencyVector(frequencyMap.begin(), frequencyMap.end());
  // сортируем вектор по убыванию частоты
  std::sort(frequencyVector.begin(), frequencyVector.end(), compare);
  // выводим результаты
  std::cout << "[OUT]: " << std::endl;
  for (const auto& pair : frequencyVector){
    std::cout << pair.first << ": " << pair.second << std::endl;
  }
  return 0;
}
