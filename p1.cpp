// Cinema Reservation Program - Basil Ahmed

#include <iostream>
#include <sstream>  
using namespace std;

#define rows 3
#define cols 5

void printSeats(string seats[rows][cols]);

int main() {
    string seats[rows][cols];
    int count = 1; // helper variable
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            seats[i][j] = to_string(count);
            count++;
        }
    }

    // index = row * length_of_row + col
    // row = (index-col)/length_of_row
    int usr, row, col;
    printSeats(seats);
    cout << "Please Enter Number of Seat U want to Reserve: ";
    cin >> usr;
    col = usr % cols;
    row = (usr-col)/cols;
    seats[row][col-1] = "#";
    printSeats(seats);

    return 0;
}

void printSeats(string seats[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
}