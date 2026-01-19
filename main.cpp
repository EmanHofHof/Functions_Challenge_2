//Name: Ethan Hofsteen
//Date: 1/18/26
//Class: MSCI-272
//Purpose: Use functions with parameters that pass by reference in order change variable values in main() within a function
//This program will give me a deeper understanding of how pass by reference parameters in function work in practice
#include <iostream>

void inputGrades(double& g1, double& g2, double& g3) {
    std::cout << "Enter Grade 1: " << std::endl;
    std::cin >> g1;
    while (g1 < 0 || g1 > 100) {
        std::cout << "Invalid Grade input, Enter Grade (1-100): " << std::endl;
        std::cin >> g1;
    }
    std::cout << "Enter Grade 2: " << std::endl;
    std::cin >> g2;
    while (g2 < 0 || g2 > 100) {
        std::cout << "Invalid Grade input, Enter Grade (1-100): " << std::endl;
        std::cin >> g2;
    }
    std::cout << "Enter Grade 3: " << std::endl;
    std::cin >> g3;
    while (g3 < 0 || g3 > 100) {
        std::cout << "Invalid Grade input, Enter Grade (1-100): " << std::endl;
        std::cin >> g3;
    }
}

double calculateAverage(const double g1, const double g2, const double g3) {
    return (g1 + g2 + g3) / 3.0;
}

char getLetterGrade(const double average) {
    if (average < 60) {
        return 'F';
    }
    else if (average < 70.01){
        return 'D';
    }
    else if (average < 80.01) {
        return 'C';
    }
    else if (average < 90.01) {
        return 'B';
    }
    else {
        return 'A';
    }
}

int main() {
    double grade1, grade2, grade3, gradeAvg;
    int userInput;
    do {
        std::cout << "1. Input Grades" << std::endl;
        std::cout << "2. Calculate and Display Average" << std::endl;
        std::cout << "3. Assign and Display Letter Grade" << std::endl;
        std::cout << "4. Exit Program" << std::endl;
        std::cin >> userInput;
        switch (userInput) {
            case 1:
                inputGrades(grade1, grade2, grade3);
                break;
            case 2:
                std::cout << "Percentage Grade Average: " << calculateAverage(grade1, grade2, grade3) << std::endl;
                break;
            case 3:
                std::cout << "Enter Grade Average (1-100): " << std::endl;
                std::cin >> gradeAvg;
                std::cout << "Letter Grade: " << getLetterGrade(gradeAvg) << std::endl;
                break;
            case 4:
                std::cout << "Exiting Program, Thanks for trying it out" << std::endl;
                break;
            default:
                std::cout << "Invalid Choice, Try Again (1-4): " << std::endl;
        }
    } while (userInput != 4);
    return 0;
}