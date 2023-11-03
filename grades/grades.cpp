#include <iostream>

using namespace std;

// user input for grades

double grades[5];

double get_grades() {
    for (int i = 0; i < 5; ++i) {
        cin >> grades[i];
    }
    return grades[5];
}

double get_average(double grades[5]) {
    double sum = 0.0;
    for (int i = 0; i < 5; ++i){
        sum += grades[i];
    }
    double average = sum / 5.0;
    return average;
}

char letter_grade(double average) {

    char final_grade;

    if (average >= 80.0) {
        final_grade = 'A'; 
    }
    else if (average >= 60.0) {
        final_grade = 'B';
    }
    else if (average >= 50.0) {
        final_grade = 'C';
    }
    else {
        final_grade = 'F';
    }
    return final_grade;
}

int main() {

    char final_grade;

    cout << "Enter your grades: " << endl;

    double grades[5];

    for (int i = 0; i < 5; ++i) {
        cin >> grades[i];
    }

//    for (int i = 0; i < 5; ++i) {
//        cout << grades[i] << endl;
//    }

    double average = get_average(grades);
    cout << "Your average score is: " << average << endl;
    
    final_grade = letter_grade(average);

    cout << "Your grade is: " << final_grade << endl;

    return 0;
}