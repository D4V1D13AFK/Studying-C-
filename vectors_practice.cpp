#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> grades;
    int grade = 0;
    int counter = 0;
    double mean = 0;  

    cout << "Type -1 when you want to stop putting grades on the program" << endl;

    while (true) {
        cout << "Please introduce your grade: ";
        cin >> grade;
        if (grade == -1) {
            break;
        } else {
            grades.push_back(grade);
            counter += 1;
            mean += grade;
        }
    }

    if (!grades.empty()) {
        mean /= grades.size();   
        int max_grade = grades[0];
        int min_grade = grades[0];

        cout << "These are your grades: ";
        for (size_t i = 0; i < grades.size(); i++) {
            cout << grades[i] << " ";
            if (grades[i] > max_grade) {
                max_grade = grades[i];
            }
            if (grades[i] < min_grade) {
                min_grade = grades[i];
            }
        }

        cout << endl << "Your average grade is " << mean;
        cout << endl << "Your lowest grade is " << min_grade;
        cout << endl << "Your maximum grade is " << max_grade;
    } else {
        cout << "No grades were entered." << endl;
    }

    return 0;
}




