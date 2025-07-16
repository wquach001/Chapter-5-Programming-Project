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
        int organisms, min_days = 1, days;//Define variables
        double increase = 0, population = 0;
        std::cout << "Please enter the starting number of organisms: \n"; //User input
        std::cin >> organisms;
        std::cout << "Please enter their average daily population increase (as a percentage): \n";
        std::cin >> increase;
        std::cout << "Please enter the number of days they will multiply: \n";
        std::cin >> days;

        std::cout << fixed << showpoint << setprecision(2);//Format ouput

        while (organisms >= 2 && increase >= 0 && days >= 1 && min_days <= days)
        {
            organisms += organisms * (increase / 100);
            std::cout << "The population after " << min_days << " days is: " << organisms << endl;
            min_days++;
        }
        while (organisms < 2 || increase < 0 || days < 1)
        {
            std::cout << "The starting number of organisms must be at least 2\n"
                << "The average daily population increase must be a positive value\n"
                << "The number of days they will multiply must be at least 1\n"
                << "Please re-enter the values.\n\n";
        }
        std::cout << "--------------------------------------------------------\n\n";//Separate each code
        

        //Program 2: Student Lineup Program
		ifstream inputFile("LinUp.txt");//Create file stream object & open file
        std::string name;
		std::string first_name = name;//Set first_name and last_name to name so they can compare against each other
        std::string last_name = name;
        int number = 1;
        if (inputFile >> name)
        {
            first_name = last_name = name;
            std::cout << name << endl;

            while (inputFile >> name)
            {
				//Compare names to find first and last name in the list
				//If number too low or too high, it put s the name in order depending on ASCII value of letters in name
                if (name < first_name)
                    first_name = name;
                if (name > last_name)
                    last_name = name;
                number++;
                std::cout << name << endl;
            }
            std::cout << "\nThe number of students in the class is: " << number << endl;//Output
            std::cout << "The first name in the list is: " << first_name << endl;
            std::cout << "The last name in the list is: " << last_name << endl;
        }
		else//Output in case of error
        {
            std::cout << "Error opening file." << endl;
        }
        inputFile.close();//Close file
        std::cout << "--------------------------------------------------------\n\n";
        
        //Program 3: Population Bar Chart
        string town, title;//Define variables
        int people, pop, year = 1900;
        ifstream file;
        cout << "Please enter the data file name: \n";//User input
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
				cout.fill('*');//Fill each space with an asterisk
				cout << setw(pop) << "*" << "\n";//Width will be equal to population in thousands
                year += 20;
			} while (file >> people);//only continue if there is more data in the file
        }
        else
        {
            cout << "Error opening the file" << endl;
        }
        file.close();
        std::cout << "--------------------------------------------------------\n\n";

        //Program 4: Patterns Program
        cout << "Pattern A\n" << endl;
        cout << "-------------------\n";
		for (int plus = 1; plus <= 10; plus++)//Triangle will be printed with 10 rows starting at 1 and ending at 10
        {
            cout.fill('+');
            cout << setw(plus) << "+" << endl;
        }
        cout << "Pattern B\n" << endl;//Triangle will be printed with 10 rows starting at 10 and ending at 1
        cout << "-------------------\n";
        for (int minus = 10; minus >= 1; minus--)
        {
            cout.fill('+');
            cout << setw(minus) << "+" << endl;
        }
        std::cout << "--------------------------------------------------------\n\n";

        //Program 5: Randome Number Guessing Game
        random_device myEngine;//Creating random number generator
        uniform_int_distribution<int> myRandom(1, 100);
        int randomNumber = myRandom(myEngine);
        int guess = 0;
        int tries = 0;
		cout << "Welcome to the Number Guessing Game!\n";//Welcome message
        cout << "I have selected a number between 1 and 100.\n";
        cout << "Try to guess it!\n";
        while (guess != randomNumber)
        {
			//Enter guess from user & if it's too low or too high, prompt user to try again
            cout << "Enter your guess: ";
            cin >> guess;
			//Add one to the number of tries each time a try is done each iteration so it knows how many tries it took
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
        std::cout << "--------------------------------------------------------\n\n";
        
return 0;

}