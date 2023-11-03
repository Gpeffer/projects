#include <iostream>

using namespace std;

// user input for grades

double grades[5];

void get_grades() {
    for (int i = 0; i < 5; ++i) {
        cin >> grades[i];
    }
}

double sum = 0.0;
double average;

double grade_average(double grades[5]) {
    for (int i = 0; i < 5; ++i){
        sum += grades[i];
    }
    double average = sum / 5.0;
    return average;
}

char letter_grade(double average) {

    char final_grade;

    if (average <= 80.0) {
        final_grade = 'A'; 
    }
    else if (average <= 60.0) {
        final_grade = 'B';
    }
    else if (average <= 50.0) {
        final_grade = 'C';
    }
    else {
        final_grade = 'F';
    }
    return final_grade;
}

int main() {

    double grades[5];

    char final_grade;

    cout << "Enter your grades: " << endl;

    get_grades();

//    for (int i = 0; i < 5; ++i) {
//        cout << grades[i] << endl;
//    }

    double grade_average(double grades);

    char letter_grade(average);

    cout << final_grade;

    return 0;
}