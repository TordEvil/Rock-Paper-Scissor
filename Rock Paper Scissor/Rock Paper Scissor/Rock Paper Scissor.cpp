#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int user_wins = 0;
    int computer_wins = 0;
    string options[3] = { "rock", "paper", "scissors" };
    string user_input;
    string computer_pick;
    int random_number;

    while (true)
    {
        cout << "Type rock/paper/scissors or Q to quit:\n";
        cin >> user_input;
        if (user_input == "q") {
            break;
        }
        if (user_input != "rock" && user_input != "paper" && user_input != "scissors") {
            continue;
        }
        random_number = rand() % 3;
        computer_pick = options[random_number];
        cout << "\nComputer picked " << computer_pick << ".\n";
        if (user_input == "rock" && computer_pick == "scissors") {
            cout << "You won!\n\n";
            user_wins++;
        }
        else if (user_input == "paper" && computer_pick == "rock") {
            cout << "You won!\n\n";
            user_wins++;
        }
        else if (user_input == "scissors" && computer_pick == "paper") {
            cout << "You won!\n\n";
            user_wins++;
        }
        else {
            cout << "You lost!\n\n";
            computer_wins++;
        }
    }
    cout << "You won " << user_wins << " times.\n";
    cout << "The computer won " << computer_wins << " times.\n";
    cout << "Goodbye!\n";
    
    return 0;
}
