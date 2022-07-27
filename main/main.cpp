#include <iostream>
#include <string>
#include <fstream>
#include <vector>
int main()
{
    std::fstream file;
    file.open("data.txt", std::ios::in);
    std::string number;
    std::vector<int> numbers;
    while (getline(file, number)) { 
        numbers.push_back(std::stoi(number));
    }
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = 0; j < numbers.size(); j++) {
            if (numbers[j] + numbers[i] == 2020 && j != i) {
                std::cout << numbers[j] + numbers[i] << std::endl;
            }
        }
    }
    file.close(); 
}


