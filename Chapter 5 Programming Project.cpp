// Chapter 5 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <iomanip>
#include <fstream>
int main()
{
    /*
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
    return 0;
    */

	ifstream inputFile("LineUp.txt");
	string name;
    if (inputFile)
    {
        while (inputFile >> name)
        {
            cout << name << endl;
        }
    }
    else
    {
		cout << "Error opening file." << endl;
    }
    inputFile.close();
    system("cd");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
