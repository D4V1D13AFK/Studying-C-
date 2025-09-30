#include <iostream>
using namespace std;

int main(){
    int number = 0;
    int addition = 0; 

    cout << "choose a number: ";
    cin >> number;

    while (number < 0){
        cout << "choose a number but please , make sure that the number is more than 0 dumb: ";
        cin >> number;
    }

    for (int i = 1; i < number; i++){
        if(number % i == 0){
            addition += i;
        }
    }

    if (addition == number){
        cout<< number << " is perfect like you";
    }
    else{
        cout << number << " is not perfect :c";
    }

}