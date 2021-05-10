#include <iostream>
#include <libchessviz/game.h>
#include <stdio.h>

char game(char Chess[9][9])
{
    char line, line2;
    int flag, column, column2, temp;
    cin >> line;
    cin >> column;
    cin >> line2;
    cin >> column2;
    flag = 0;
    if (line == 'a') {
        line = 1;
    } else if (line == 'b') {
        line = 2;
    } else if (line == 'c') {
        line = 3;
    } else if (line == 'd') {
        line = 4;
    } else if (line == 'e') {
        line = 5;
    } else if (line == 'f') {
        line = 6;
    } else if (line == 'g') {
        line = 7;
    } else if (line == 'h') {
        line = 8;
    } else {
        flag = 1;
    }

    if (line2 == 'a') {
        line2 = 1;
    } else if (line2 == 'b') {
        line2 = 2;
    } else if (line2 == 'c') {
        line2 = 3;
    } else if (line2 == 'd') {
        line2 = 4;
    } else if (line2 == 'e') {
        line2 = 5;
    } else if (line2 == 'f') {
        line2 = 6;
    } else if (line2 == 'g') {
        line2 = 7;
    } else if (line2 == 'h') {
        line2 = 8;
    } else {
        flag = 1;
    }
    if (column < 1 && column > 8) {
        flag = 1;
    }
    if (column2 < 1 && column2 > 8) {
        flag = 1;
    }
    if (flag == 0) {
        temp = Chess[column - 1][line];
        Chess[column - 1][line] = ' ';
        Chess[column2 - 1][line2] = temp;
        print(Chess);
    }
    return Chess[9][9];
}
