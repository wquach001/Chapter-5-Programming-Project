// Chapter 5 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <iomanip>
#include <fstream>
#include <random>
#include <string>
int main()
{  
    //Program 1: Population Program 
        int organisms = 0, min_days = 1, days;
        double increase = 0, population = 0;
        cout << "Please enter the starting number of organisms: \n";
        cin >> organisms;
        cout << "Please enter their average daily population increase (as a percentage): \n";
        cin >> increase;
        cout << "Please enter the number of days they will multiply: \n";
        cin >> days;

        cout << fixed << showpoint << setprecision(2);

        while (organisms >= 2 && increase >= 0 && days >= 1 && min_days <= days)
        {
            population = organisms * increase * min_days;
            cout << "The population after " << min_days << " days is: " << population << endl;
            min_days++;
        }
        while (organisms < 2 || increase < 0 || days < 1)
        {
            cout << "The starting number of organisms must be at least 2\n"
                << "The average daily population increase must be a positive value\n"
                << "The number of days they will multiply must be at least 1\n"
                << "Please re-enter the values.\n\n";
            cout << "Please enter the starting number of organisms: \n";
            cin >> organisms;
            cout << "Please enter their average daily population increase (as a percentage): \n";
            cin >> increase;
            cout << "Please enter the number of days they will multiply: \n";
            cin >> days;
            cout << "-------------------\n\n";
    }

        //Program 2: Student Lineup Program
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
		cout << "-------------------\n\n";

        //Program 3: Population Bar Chart
        string town, title;
        int people, pop, year = 1900;
        ifstream file;
        cout << "Please enter the data file name: \n";
        cin >> title;
        file.open(title);
        cout << "Please enter the name of your town : \n";
        cin >> town;
        if (file >> people)
        {
            cout << "File was successfully opened.\n\n";
            cout << town << " Population Growth" << "\n";
            cout << "(Each * representes 1,000 people)\n";
            cout << "-------------------------------------\n";
            //cout << population << endl;
            do
            {
                pop = people / 1000; // Convert population to thousands
                cout << year << " ";
                cout.fill('*');
                cout << setw(pop) << "*" << "\n";
                year += 20;
            } while (file >> people);
        }
        else
        {
            cout << "Error opening the file" << endl;
        }
        file.close();
        cout << "-------------------\n\n";

        //Program 4: Patterns Program
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
        cout << "-------------------\n\n";

        //Program 5: Randome Number Guessing Game
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
            {
                cout << "Too low! Try again.\n";
            }
            else if (guess > randomNumber)
            {
                cout << "Too high! Try again.\n";
            }
            else
            {
                cout << "Congratulations! You've guessed the number in " << tries << " tries.\n";
            }
        }
        cout << "-------------------\n\n";
return 0;
//code ended
}