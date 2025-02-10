#include <iostream>
#include <random>
#include <list>
#include <ctime>
#include <emscripten.h>
#include "board.cpp"

// WASM-comptable 

using namespace std;

class gamePlay: public Board  {

    private:
        char board[3][3];
        char currentPlayer;
        int moves;        
        

    public:
        gamePlay() {
            resetBoard();
        }

        void resetBoard() {
            moves = 0;
            currentPlayer = 'X';
            for (int i = 0; i<3; i++) {
                for (int j = 0; j < 3; j++) {
                    board[i][j] = ' ';
                }
            }
        }

        bool makeMove(int row, int col);

        char checkWinner();

        void switchPlayer();

        char getCurrentPlayer();

        char getTitle(int row, int col);
    
    };


gamePlay game;

extern "C" {
}
