#include <iostream>

char getUserChoice();
char getComputerChoice(char userChoice);
void displayChoices(char player);
void determineWinner(char player, char computer);

int main()
{
    char player;
    char computer;
	player = getUserChoice();
	std::cout << "You chose: " << player << "\n";
    displayChoices(player);
	computer = getComputerChoice(player);
	std::cout << "Computer chose: " << computer << "\n";
	displayChoices(computer);
	determineWinner(player, computer);
    return 0;
    
}

char getUserChoice()
{
    char player;
    do {
        std::cout << "************************************************************************************\n";
        std::cout << "************************************************************************************\n";
        std::cout << "Welcome to the Rock, Paper, Scissor game!\n";
        std::cout << "Rock! Paper! Scissor!\n";
        std::cout << "Please enter your choice\n";
        std::cout << "R for Rock\n";
        std::cout << "P for Paper\n";
        std::cout << "S for Scissor\n";
        std::cout << "************************************************************************************\n";
        std::cout << "************************************************************************************\n";
        std::cin >> player;
		std::cout << "Computer chose: " << player << "\n";
		system("cls"); 
		player = toupper(player);
	} while (player != 'R' && player != 'P' && player != 'S');
    return player;
}

char getComputerChoice(char userChoice)
{
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'R';
    case 2:
		return 'P';
    case 3:
		return 'S';
    default:
			return 'R'; 
    }
}

void displayChoices (char userChoice)
{       
    userChoice = toupper(userChoice);
    
    switch(userChoice)
    {
        case 'R':
            std::cout << "You chose Rock!\n";
            break;
        case 'P':
            std::cout << "You chose Paper!\n";
            break;
        case 'S':
            std::cout << "You chose Scissor!\n";
            break;
        default:
            std::cout << "Invalid choice!\n";
			break;
    }
}

void determineWinner(char player, char computer)
{
    switch (player)
    {
    case 'R':
        if (computer == 'S')
        {
            std::cout << "Rock crushes Scissor! You win!\n";
        }
        else if (computer == 'P')
        {
            std::cout << "Paper covers Rock! You lose!\n";
        }
        else
        {
            std::cout << "It's a tie! Both chose Rock!\n";
        }
        break;
    case 'P':
        if (computer == 'R')
        {
            std::cout << "Paper covers Rock! You win!\n";
        }
        else if (computer == 'S')
        {
            std::cout << "Scissor cuts Paper! You lose!\n";
        }
        else
        {
			std::cout << "It's a tie! Both chose Paper!\n";
        }
        break;
    case 'S' :
        if (computer == 'P')
        {
            std::cout << "Scissor cuts Paper! You win!\n";
        }
        else if (computer == 'R')
        {
            std::cout << "Rock crushes Scissor! You lose!\n";
        }
        else
        {
            std::cout << "It's a tie! Both chose Scissor!\n";
		}
        break;
    }
}

