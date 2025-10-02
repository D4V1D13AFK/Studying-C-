#include <iostream>
using namespace std;

int main(){
    
    int numbers[5];
    int counter = 0;
    int number = 0;
    

    while (counter < 5){
        cout<<"please introduce a number: ";
        cin>>number;
        numbers[counter]=number;
        counter += 1;
    }

    int max_number = numbers[0];

    cout<<"These are the numbers that you chose";

    for(int i = 0; i<5; i++){
        if (numbers[i]>max_number){
            max_number = numbers[i];
        }
        cout<<numbers[i]<<" ";
    }

    cout<<"This is the biggest number: "<<max_number;
}