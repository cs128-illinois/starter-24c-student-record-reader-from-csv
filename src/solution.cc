#include <iostream>
#include <fstream>
#include <string>

#include "solution.hpp"

Student ReadStudentRecFromStream(std::istream& is) {
  std::ifstream ifs("./data/input.csv");
  Student student = ReadStudentRecFromStream(ifs);
  while (student.good()) {
    //make first_name last_name a single string
    std::string first_name;
    std::string last_name;
    std::string full_name;
    unsigned int student_uin;
    double student_gpa;
    chat throw_away = ',';
    if (ifs >> first_name >> last_name) {
      full_name = first_name + " " + last_name;
    }
    ifs >> first_name >> last_name >> throw_away >> student_uin >> throw_away >> student_gpa;
    return Student(full_name, student_uin, student_gpa);
    if (is.fail()) {
      return Student{};
    }
  }
  return Student{};
}
