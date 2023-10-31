#include <iostream>
#include <string>

struct Student {
    std::string name;
    int score;
};

int main() {
    const int MAX_STUDENTS = 5;
    Student students[MAX_STUDENTS];

    // Input student records
    for (int i = 0; i < MAX_STUDENTS; i++) {
        std::cout << "Enter student #" << i + 1 << " name: ";
        std::cin >> students[i].name;
        std::cout << "Enter " << students[i].name << "'s score: ";
        std::cin >> students[i].score;
    }

    // Display all student records
    std::cout << "\nStudent Records:\n";
    for (int i = 0; i < MAX_STUDENTS; i++) {
        std::cout << "Name: " << students[i].name << ", Score: " << students[i].score << std::endl;
    }

    // Find the highest-scoring student
    int highestScore = students[0].score;
    std::string highestScorer = students[0].name;

    for (int i = 1; i < MAX_STUDENTS; i++) {
        if (students[i].score > highestScore) {
            highestScore = students[i].score;
            highestScorer = students[i].name;
        }
    }

    std::cout << "\nHighest Scoring Student: " << highestScorer << " with a score of " << highestScore << std::endl;

    return 0;
}
