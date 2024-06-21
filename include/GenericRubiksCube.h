#ifndef GENERICRUBIKSCUBE_H
#define GENERICRUBIKSCUBE_H

#include<bits/stdc++.h>
using namespace std;

class GenericRubiksCube{
public:
    enum class FACE{
        FRONT, BACK, RIGHT, LEFT, UP, DOWN
    };

    enum class COLOR{
        //6 COLORS FOR 6 FACES
        WHITE, RED, GREEN, YELLOW, BLUE, ORANGE
    };

    enum class MOVE{
        //18 MOVES
        F,FPRIME,F2, B,BPRIME,B2, L,LPRIME,L2, R,RPRIME,R2, U,UPRIME,U2, D,DPRIME,D2,
    };

   //Return true if the cube is solved else false
    virtual bool isSolved() const = 0;

    //the rows and cols are 0 indexed from top to bottom and left to right.
    virtual COLOR getColor(FACE face, unsigned row, unsigned col) const = 0;

    //give the first Letter of the color present in cell
    static char getColorLetter(COLOR color);

    static string getMove(MOVE ind);

    void print() const;

    //Randomly shuffle the cube with 'times' moves and returns the moves performed.
    vector<MOVE> randomShuffleCube(unsigned int times);

    //Perform moves on the Rubik Cube
    GenericRubiksCube &move(MOVE ind);

    //Invert a move
    GenericRubiksCube &invert(MOVE ind);


    //18 moves/Rotations
    virtual GenericRubiksCube &f() = 0;

    virtual GenericRubiksCube &fPrime() = 0;

    virtual GenericRubiksCube &f2() = 0;

    virtual GenericRubiksCube &u() = 0;

    virtual GenericRubiksCube &uPrime() = 0;

    virtual GenericRubiksCube &u2() = 0;

    virtual GenericRubiksCube &l() = 0;

    virtual GenericRubiksCube &lPrime() = 0;

    virtual GenericRubiksCube &l2() = 0;

    virtual GenericRubiksCube &r() = 0;

    virtual GenericRubiksCube &d() = 0;

    virtual GenericRubiksCube &dPrime() = 0;

    virtual GenericRubiksCube &d2() = 0;

    virtual GenericRubiksCube &rPrime() = 0;

    virtual GenericRubiksCube &r2() = 0;

    virtual GenericRubiksCube &b() = 0;

    virtual GenericRubiksCube &bPrime() = 0;

    virtual GenericRubiksCube &b2() = 0;

    string getCornerColorString(uint8_t ind) const;

    uint8_t getCornerIndex(uint8_t ind) const;

    uint8_t getCornerOrientation(uint8_t ind) const;

};

#endif // GENERICRUBIKSCUBE_H
