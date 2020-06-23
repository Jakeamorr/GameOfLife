#include <iostream>
#include <cstdlib>

struct person {
    int age = 0;
    bool alive = false;
    int neighbors = 0;
};

void initializeGameBoard(bool a[40][40]);
void logGameBoard(bool b[40][40]);


int main() {
    bool board[40][40];

    std::cout << "Hello, this is the game of life!" << std::endl;
    initializeGameBoard(board);
    logGameBoard(board);

    return 0;
}

void initializeGameBoard(bool board[40][40]) {
    for(int i = 0; i < 40; i++) {
        for(int j = 0; j < 40; j++) {
            int rnum = rand() % 2;
            if(rnum == 0) {
                board[i][j] = true;
            } else {
                board[i][j] = false;
            }
        }
    }
}

void logGameBoard(bool board[40][40]) {
    for(int i = 0; i < 40; i++) {
        for(int j = 0; j < 40; j++) {
            std::cout << (board[i][j] ? "X" : "-") << " ";
        }
        // Add a line break after every row
        std::cout << std::endl;
    }
}

