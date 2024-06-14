//
// Created by DELL on 14-06-2024.
//

#include "GenericRubiksCube.h"

class GenericRubiksCube3DRepresentation : public GenericRubiksCube{
public:
    char cube[6][3][3]{};

    GenericRubiksCube3DRepresentation() {
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    cube[i][j][k] = getColorLetter(COLOR(i));
                }
            }
        }
    }
};