// Chapter 5 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <iomanip>
#include <fstream>
#include <random>
int main()
{
    /*
    int organisms = 0, min_days = 1, days;
    double increase = 0, population = 0;
    std::cout << "Please enter the starting number of organisms: \n";
    std::cin >> organisms;
    std::cout << "Please enter their average daily population increase (as a percentage): \n";
    std::cin >> increase;
    std::cout << "Please enter the number of days they will multiply: \n";
    std::cin >> days;

    std::cout << fixed << showpoint << setprecision(2);

    while (organisms >= 2 && increase >= 0 && days >= 1 && min_days <= days)
    {
        population = organisms * increase * min_days;
        std::cout << "The population after " << min_days << " days is: " << population << endl;
        min_days++;
    }
    while (organisms < 2 || increase < 0 || days < 1)
    {
        std::cout << "The starting number of organisms must be at least 2\n"
             << "The average daily population increase must be a positive value\n"
             << "The number of days they will multiply must be at least 1\n"
             << "Please re-enter the values.\n\n";
        std::cout << "Please enter the starting number of organisms: \n";
        std::cin >> organisms;
        std::cout << "Please enter their average daily population increase (as a percentage): \n";
        std::cin >> increase;
        std::cout << "Please enter the number of days they will multiply: \n";
        std::cin >> days;
    return 0;
    

    ifstream inputFile("LineUp.txt");
    string name;
    string first_name = name;
    string last_name = name;
    int number = 1;
    if (inputFile >> name)
    {
        first_name = last_name = name;
        std::cout << name << endl;

        while (inputFile >> name)
        {
            if (name < first_name)
                first_name = name;
			if (name > last_name)
				last_name = name;
            number++;
            std::cout << name << endl;
        }
        std::cout << "\nThe number of students in the class is: " << number << endl;
		std::cout << "The first name in the list is: " << first_name << endl;
		std::cout << "The last name in the list is: " << last_name << endl;
    }
    else
    {
        std::cout << "Error opening file." << endl;
    }
    inputFile.close();


    string town, name;
    int population, year = 1900;
    ifstream file;
    cout << "Please enter the data file name: \n";
	cin >> name;
    file.open(name);
    cout << "Please enter the name of your town : \n";
    cin >> town;
    if (file >> population)
    {
        cout << "File was successfully opened.\n\n";
        cout << town << " Population Growth" << "\n";
        cout << "(Each * representes 1,000 people)\n";
        cout << "-------------------------------------\n";
        while (file >> population)
        {
			population /= 1000; // Convert population to thousands
            cout << year << " ";
            cout.fill('*');
            cout << setw(population) << "*" << "\n";
            year += 20;
        }
    
    }
    else
    {
        cout << "Error opening the file" << endl;
    }
    file.close();
    return 0;
    
    cout << "Pattern A\n" << endl;
    cout << "-------------------\n";
	for (int plus = 1; plus <= 10; plus++)
    {
        cout.fill('+');
        cout << setw(plus) << "+" << endl;
    }
	cout << "Pattern B\n" << endl;
	cout << "-------------------\n";
    for (int minus = 10; minus >= 1; minus--)
    {
        cout.fill('+');
        cout << setw(minus) << "+" << endl;
    }

    return 0;
*/

random_device myEngine;
uniform_int_distribution<int> myRandom(1, 100);
int randomNumber = myRandom(myEngine);
    int guess = 0;
    int tries = 0;
    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have selected a number between 1 and 100.\n";
    cout << "Try to guess it!\n";
    while (guess != randomNumber)
    {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;
        if (guess < randomNumber)
            cout << "Too low! Try again.\n";
        else if (guess > randomNumber)
            cout << "Too high! Try again.\n";
        else
            cout << "Congratulations! You've guessed the number in " << tries << " tries.\n";
    }
	return 0;
}