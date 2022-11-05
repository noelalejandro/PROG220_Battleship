// PROG 220-02
// Battleship
// Noel Gutierrez

#include "game_logic.h"
#include <cstdlib>
#include <iostream>

using namespace std;

const int row = 16;
const int column = 16;
const int maximum_ships = 10;
int grid[row][column];

bool **create_grid(
    const int column, 
    const int row) 
    {
    bool **grid = (bool **)malloc(sizeof(bool *) * column);
    
    for (int i = 0; i < column; i++) 
        {
        grid[i] = (bool *)malloc(sizeof(bool) * row);
        }
    return grid;
    }

void clear_grid(
    bool **grid,
    const int column, 
    const int row) 
    {
        for (int i = 0; i < column; ++i) {
            for (int j=0; j < row; j++)
            {
                grid[i][j] = 0;
            }
        }
    }

void place_ships(
    bool **grid,  
    const int column,
    const int row,
    int ship_count) 
    {
        srand(time(0));
        while(ship_count < maximum_ships)
        {
            int x = rand() % row;
            int y = rand() % column;
            if (grid[x][y] != 1)
            {
                ship_count++;
                grid[x][y] = 1;
            }
        }
    }

Coordinates search(
    bool **grid, 
    const int column, 
    const int row,
    int ship_count) 
    {
        
    }

ResponseType guess(
    bool **grid, 
    const int x, 
    const int y) 
    {
    
        return ResponseType::HIT;
        return ResponseType::NEAR_MISS;
        return ResponseType::MISS;
    }