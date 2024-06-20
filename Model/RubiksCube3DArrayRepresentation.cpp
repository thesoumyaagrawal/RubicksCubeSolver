//
// Created by DELL on 14-06-2024.
//

#include "GenericRubiksCube.h"

class RubiksCube3DArrayRepresentation : public GenericRubiksCube{
public:
    char cube[6][3][3]{};
    
    RubiksCube3DArrayRepresentation() {
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    cube[i][j][k] = getColorLetter(COLOR(i));
                }
            }
        }
    }

    COLOR getColor(FACE face, unsigned row, unsigned col) const override {
        char color = cube[int(face)][row][col];
        switch (color) {
            case 'B':
                return COLOR::BLUE;
            case 'R':
                return COLOR::RED;
            case 'G':
                return COLOR::GREEN;
            case 'O':
                return COLOR::ORANGE;
            case 'Y':
                return COLOR::YELLOW;
            default:
                return COLOR::WHITE;
        }
    }

    bool isSolved() const override{
        for(int i=0;i<6;i++){
            for(int j=0;j<3;j++){
                for(int k =0;k<3;k++){
                    if(this->cube[i][j][k] == getColorLetter(COLOR(i))){
                        continue;
                    } return false;
                }
            }
        }
        return true;
    }


};