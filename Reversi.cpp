
/**********|**********|**********|
Program: TT03_P1_Jeffry_Handani.cpp
Course:FCI
Year: 2015/16 Trimester 1
Name: Jeffry Handani
ID: 1131121266
Email: jeffryhandani@gmail.com
Phone: 0123520410
**********|**********|**********/
#include<iostream>
#include <cstdlib>

using namespace std;

void displayMenu()
{

    cout<<"1. New game"<<endl;
    cout<<"2. Help "<<endl;
    cout<<"3. Quit"<<endl;
    cout<< "Press any number"<<endl;
}
void displayBoard(int X_score, int O_score,char board[8][8])
{
    for(int i=1; i<=8; i++)
	{
	    cout << "  +---+---+---+---+---+---+---+---+\n" ;// part of board
	    cout<< i ;
		for(int j=0; j<=8; j++)
		{
            cout<<" |";
			cout << board[i][j]  << " ";                   // for loop have to use in order to show output
		}
		cout << endl;
	}
	cout << "  +---+---+---+---+---+---+---+---+\n" ;
    for (int k='a';k<='h';k++)

    cout <<"   "<< static_cast<char>(k);        // a-h board using static cast to make row
    cout<<endl<<endl;

}

void countingScore(int X_score, int O_score, char board[8][8])
{
    for (int i=1;i<8;i++)       // identify how many char of X and O in 2D loop in order to count score
    {
        for(int j=1;j<8;j++)
        {
            if (board[i][j]=='X')
            X_score++;
            else if
            (board[i][j]=='O')
            O_score ++ ;
        }
    }
    cout<< "Score :    X= " << X_score <<"    O =  "<< O_score<<endl;

}

void change (char &row)
{

switch (row)        // switching char to be a number
{                   // Row in board using char
    case 'a':       // I have to change in order to input in my 2 dimension array
    row=0;
    break;

    case 'b':
    row=1;
    break;

    case 'c':
    row=2;
    break;

    case 'd':
    row=3;
    break;

    case 'e':
    row=4;
    break;

    case 'f':
    row=5;
    break;

    case 'g':
    row=6;
    break;

    case 'h':
    row=7;
    break;
    }
}

int main()
{
    int col;
    char row;
	char board[9][8]={
    {' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},      //2D arrays with X and O declared already
	{' ',' ',' ','X','O',' ',' ',' '},
	{' ',' ',' ','O','X',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '},
	{' ',' ',' ',' ',' ',' ',' ',' '}};
    int select;
    int decision;
    int choose;
    char turn[2]={'X','O'}; // using for player turn (Have not complete yet
    int X_score=0;      //declaring score for x and y must inside do loop else they keep adding x and O for every turn
    int O_score=0;

    displayMenu();
    cin>>decision;

if(decision=1)
{
    do
    {
    displayBoard( X_score, O_score,board);
    countingScore(X_score, O_score,board);
    cout<< "Current Player= "<< turn[0]<<endl;
    cout<< " ==> 1.Move"<<endl;
    cout<< " ==> 2.Menu "<<endl;
    cout<< " ==> 3.Next Player "<<endl;
    cin>> choose;

    if(choose==1)
        {

        cout<<"Enter column(1-8)"<<endl;
        cin>> col;
        cout<<"Enter row(a-h)"<<endl;
        cin>>row;
        change(row);
        board[col][row]='X';
        }
    else if(choose==2)
        {
        system("pause");
        system("cls");
        displayMenu(); // have not complete yet
        }
    else if(choose==3)
        {
        displayBoard( X_score, O_score,board);
        countingScore(X_score, O_score,board);
        cout<< "Current Player= "<< turn[1]<<endl;
        cout<<"Enter column(1-8)"<<endl;
        cin>> col;
        cout<<"Enter row(a-h)"<<endl;
        cin>>row;
        change(row);
        board[col][row]='O';
        }
cout<<"Press 1 to Continue"<<endl;
cout<<"Press 2 to Quit"<<endl;
cin>> select;
    }
    while(select!=2);       // to quit program

}
}
