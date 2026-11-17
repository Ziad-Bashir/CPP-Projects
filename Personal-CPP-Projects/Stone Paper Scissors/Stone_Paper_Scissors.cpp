#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

enum enGameChoice { Stone = 1, Paper = 2, Scissors = 3};

enum enWinner{ Player1 = 1, Computer = 2, Draw = 3};


struct stRoundInfo
{
    short RoundNumber = 0;
    enGameChoice Player1Choice;
    enGameChoice ComputerChoice;
    enWinner Winner;
    string WinnerName = "";
};


struct stGameResults
{
    short GameRounds = 0;
    short Player1WinTimes = 0;
    short ComputerWinTimes = 0;
    short DrawTimes = 0;
    enWinner GameWinner;
    string WinnerName = "";
};


short HowManyRounds();
int RandomNumber(int From, int To);
enGameChoice Player1Choice();
enGameChoice ComputerChoice();
enWinner WhoWonTheRound(stRoundInfo RoundInfo);
string WinnerName(enWinner Winner);
void SetWinnerScreenColor(enWinner Winner);
string ChoiceName(enGameChoice Choice);
void PrintRoundResults(stRoundInfo RoundInfo);
enWinner WhoWonTheGame(short Player1WinTimes, short ComputerWinTimes);
stGameResults PlayGame(int NumberOfRounds);
void ResetScreen();
string Tabs(int Number);
void ShowOverScreen();
void ShowFinalResult(stGameResults GameResults);
void StartGame();

int main()
{
    srand(static_cast<unsigned>(time(NULL)));
    StartGame();
    return 0;
}


short HowManyRounds()
{
    int GameRounds = 0;
    do
    {
        cout << "How Many Rounds 1 to 10?\n";
        cin >> GameRounds;
    } while (GameRounds < 1 || GameRounds > 10);
    return GameRounds;
}


int RandomNumber(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;
    return Random;
}

    enGameChoice Player1Choice()
    {
        short Choice = 0;
        do
        {
            cout << "\nYour Choice: [1]:Stone, [2]:Paper, [3]:Scissors? ";
            cin >> Choice;
        } while (Choice < 1 || Choice > 3);
        return static_cast<enGameChoice>(Choice);
    }


    enGameChoice ComputerChoice()
    {
        return static_cast<enGameChoice>(RandomNumber(1, 3));
    }


    enWinner WhoWonTheRound(stRoundInfo RoundInfo)
    {
        if (RoundInfo.Player1Choice == RoundInfo.ComputerChoice)
        {
            return enWinner::Draw;
        }
        switch (RoundInfo.Player1Choice)
        {
        case enGameChoice::Stone:
            return RoundInfo.ComputerChoice == enGameChoice::Paper ? enWinner::Computer : enWinner::Player1;
            break;
        case enGameChoice::Paper:
            return RoundInfo.ComputerChoice == enGameChoice::Scissors ? enWinner::Computer : enWinner::Player1;
            break;
        case enGameChoice::Scissors:
            return RoundInfo.ComputerChoice == enGameChoice::Stone ? enWinner::Computer : enWinner::Player1;
            break;
        default:
            return enWinner::Player1;
            break;
        }
    }

    string WinnerName(enWinner Winner)
    {
        string GameWinner[3] = {"Player1", "Computer", "No Winner (Draw)"};
        return GameWinner[Winner - 1];
    }

    void SetWinnerScreenColor(enWinner Winner)
    {
        switch (Winner)
        {
        case enWinner::Player1:
            system("color 2F");
        break;
        case enWinner::Computer:
            system("color 4F");
            cout << "\a";
        break;
        default:
            system("color 6F");
        break;
        }
    }

    string ChoiceName(enGameChoice Choice)
    {
        string GameChoice[3] = { "Stone", "Paper", "Scissors" };
        return GameChoice[Choice - 1];
    }

    void PrintRoundResults(stRoundInfo RoundInfo)
    {
        cout << "\n____________ Round [" << RoundInfo.RoundNumber << "] ____________\n\n";
        cout << "Player1  Choice: " << ChoiceName(RoundInfo.Player1Choice) << endl;
        cout << "Computer Choice: " << ChoiceName(RoundInfo.ComputerChoice) << endl;
        cout << "Round Winner   : [" << RoundInfo.WinnerName << "]\n";
        cout << "_________________________________________\n" << endl;
        SetWinnerScreenColor(RoundInfo.Winner);
    }



    enWinner WhoWonTheGame(short Player1WinTimes, short ComputerWinTimes)
    {
        if (Player1WinTimes > ComputerWinTimes)
            return enWinner::Player1;
        else if(Player1WinTimes < ComputerWinTimes)
            return enWinner::Computer;
        else
            return enWinner::Draw;
    }

stGameResults PlayGame(int NumberOfRounds)
{
    stRoundInfo RoundInfo;
    short Player1WinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;
    for (int GameRound = 1; GameRound <= NumberOfRounds; GameRound++)
    {
        cout << "Round [" << GameRound << "] Begins:\n";
        RoundInfo.RoundNumber = GameRound;
        RoundInfo.Player1Choice = Player1Choice();
        RoundInfo.ComputerChoice = ComputerChoice();
        RoundInfo.Winner = WhoWonTheRound(RoundInfo);
        RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);

    if (RoundInfo.Winner == enWinner::Player1)
        Player1WinTimes++;
    else if(RoundInfo.Winner == enWinner::Computer)
        ComputerWinTimes++;
    else
        DrawTimes++;

    PrintRoundResults(RoundInfo);
    }

    enWinner FinalWinner = WhoWonTheGame(Player1WinTimes, ComputerWinTimes);
    return {RoundInfo.RoundNumber, Player1WinTimes, ComputerWinTimes, DrawTimes, FinalWinner, WinnerName(FinalWinner)};
}



void ResetScreen()
{
    system("cls");
    system("color 0f");
}

string Tabs(int Number)
{
    string Tabs = "";
    for (int i = 1; i <= Number; i++)
    {
        Tabs += "\t";
    }
    return Tabs;
}

void ShowOverScreen()
{
    cout << Tabs(2) << "__________________________________________________________\n\n";
    cout << Tabs(2) << "                 +++ G a m e  O v e r +++\n";
    cout << Tabs(2) << "__________________________________________________________\n\n";
}
void ShowFinalResult(stGameResults GameResults)
{
    cout << Tabs(2) << "_____________________ [Game Results ]_____________________\n\n";
    cout << Tabs(2) << "Game Rounds        : " << GameResults.GameRounds << endl;
    cout << Tabs(2) << "Player1 won times  : " << GameResults.Player1WinTimes << endl;
    cout << Tabs(2) << "Computer won times : " << GameResults.ComputerWinTimes << endl;
    cout << Tabs(2) << "Draw times         : " << GameResults.DrawTimes << endl;
    cout << Tabs(2) << "Final Winner       : " << GameResults.WinnerName << endl;
    cout << Tabs(2) << "___________________________________________________________\n";

    SetWinnerScreenColor(GameResults.GameWinner);
}


    void StartGame()
    {
        char PlayAgain = 'Y';
        do
        {
            ResetScreen();
            stGameResults GameResults = PlayGame(HowManyRounds());
            ShowOverScreen();
            ShowFinalResult(GameResults);

            cout << endl << Tabs(3) << "Do you want to play again? Y/N? ";
            cin >> PlayAgain;
        } while (PlayAgain == 'Y' || PlayAgain == 'y');
    }
