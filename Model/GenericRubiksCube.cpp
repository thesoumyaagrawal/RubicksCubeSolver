//
// Created by DELL on 14-06-2024.
//

#include "GenericRubiksCube.h"

//GIVE THE 1ST LETTER OF THE CUBIE
char GenericRubiksCube::getColorLetter(COLOR color) {
    switch (color) {
        case COLOR::RED: return 'R';
        case COLOR::WHITE: return 'W';
        case COLOR::GREEN: return 'G';
        case COLOR::BLUE: return 'B';
        case COLOR::ORANGE: return 'O';
        case COLOR::YELLOW: return 'Y';
    }
}

//returning the move using index
string GenericRubiksCube::getMove(MOVE ind){
    switch (ind) {
        case MOVE::F: return "F";
        case MOVE::B: return "B";
        case MOVE::U: return "U";
        case MOVE::D: return "D";
        case MOVE::L: return "L";
        case MOVE::R: return "R";
        case MOVE::F2: return "F2";
        case MOVE::B2: return "B2";
        case MOVE::U2: return "U2";
        case MOVE::D2: return "D2";
        case MOVE::R2: return "R2";
        case MOVE::L2: return "L2";
        case MOVE::FPRIME: return "F'";
        case MOVE::BPRIME: return "B'";
        case MOVE::UPRIME: return "U'";
        case MOVE::DPRIME: return "D'";
        case MOVE::RPRIME: return "R'";
        case MOVE::LPRIME: return "L'";
    }
}
