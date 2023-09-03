#include<iostream>
using namespace std;

int main()
{
  // declare variables for marks
  int math, science, english, totalMarks;
  float percentage;

  // take input from user for marks in each subject
  cout << "Enter marks in Math: ";
  cin >> math;

  cout << "Enter marks in Science: ";
  cin >> science;

  cout << "Enter marks in English: ";
  cin >> english;

  // calculate total marks and percentage
  totalMarks = math + science + english;
  percentage = (float)totalMarks / 3;

  // display marksheet
  cout << "\nMarksheet" << endl;
  cout << "---------" << endl;
  cout << "Math: " << math << endl;
  cout << "Science: " << science << endl;
  cout << "English: " << english << endl;
  cout << "Total Marks: " << totalMarks << endl;
  cout << "Percentage: " << percentage << "%" << endl;

  return 0;
}


