// PROG 220-02
// Battleship
// Noel Gutierrez

#pragma once

struct Coordinates {
  int x;
  int y;
};

enum ResponseType { 
    HIT, 
    MISS, 
    NEAR_MISS 
    };

bool **create_grid(
    const int column, 
    const int row
    );

void clear_grid(
    bool **grid, 
    const int column, 
    const int row
    );

void place_ships(
    bool **grid,  
    const int column,
    const int row,
    int ship_count
    );

Coordinates search(
    bool **grid,
    const int column,
    const int row,
    int ship_count
    );

ResponseType guess(
    bool **grid, 
    const int x, 
    const int y
    );