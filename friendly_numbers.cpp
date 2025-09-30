#include <iostream>
using namespace std;

int main(){
    int first_number=0, second_number=0, addition_1=0, addition_2=0;

    cout<< "choose one number: ";
    cin >> first_number;
    cout<< "choose another number: ";
    cin >> second_number;

    while (first_number < 0 && second_number < 0 || first_number > 0 && second_number < 0 || first_number < 0 && second_number > 0){
        cout<< "please make sure that both numbers are more than zero and try again: ";
            cout<< "choose one number: ";
            cin >> first_number;
            cout<< "choose another number: ";
            cin >> second_number;
    }

    for (int i = 1; i < first_number; i++){
        if(first_number % i == 0){
            addition_1 += i;
        }
    }

    for (int j = 1; j < second_number; j++){
        if(second_number % j == 0){
            addition_2 += j;
        }
    }

    if (addition_1 == second_number && addition_2 == first_number){
        cout<< "these numbers are friends :D";
    }
    else{
        cout<<"these numbers are not friends";
    }

}
  