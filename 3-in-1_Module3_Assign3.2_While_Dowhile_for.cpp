#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, section;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your section: ";
    getline(cin, section);

    // Problem 1
    int num, count = 0;
    int product_odd = 1, sum_even = 0;

    cout << "\nProblem 1:\n";
    while (count < 5) {
        cout << "Enter a number: ";
        cin >> num;

        if (num % 2 == 0) {
            sum_even += num;
        } else {
            product_odd *= num;
        }

        count++;
    }

    // Problem 2
    double sum = 0;
    count = 0;

    cout << "\nProblem 2:\n";
    do {
        cout << "Enter a number: ";
        cin >> num;
        sum += num;
        count++;
    } while (count < 5);

    double average = sum / 5;

    // Problem 3
    int sum_divisible = 0;

    cout << "\nProblem 3:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Enter a number: ";
        cin >> num;

        if (num % 3 == 0 || num % 5 == 0) {
            sum_divisible += num;
        }
    }

    // Display all results
    cout << "\n *****************************************\n";
    cout << " * Name: " << name << "\n";
    cout << " * Section: " << section << "\n";
    cout << " *****************************************\n\n";

    cout << "Results:\n";
    cout << "Problem 1:\n";
    cout << "The product of odd inputted numbers is " << product_odd << endl;
    cout << "The sum of even inputted numbers is " << sum_even << endl;

    cout << "\nProblem 2:\n";
    cout << "The average of all numbers = " << average << endl;

    cout << "\nProblem 3:\n";
    cout << "The sum of all inputted numbers divisible by 3 OR divisible by 5 = " << sum_divisible << endl;

    return 0;
}
