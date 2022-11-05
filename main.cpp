// PROG 220-02
// Battleship
// Noel Gutierrez

#include <cstdlib>
#include <iostream>
#include "game_logic.h"

using namespace std;

int main() {
    bool **grid = create_grid(16,16);
    place_ships(grid,16,16,10);
    Coordinates search();
    clear_grid(grid,16,16);
}
