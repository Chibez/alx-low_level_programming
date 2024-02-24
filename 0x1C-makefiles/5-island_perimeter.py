#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""

def count_water_neighbors(grid, w, l):
    """Count the number of water neighbors for a cell in the grid."""
    count = 0

    # Check the neighbors to the left, right, above, and below
    if w == 0 or not grid[w - 1][l]:
        count += 1
    if w == len(grid) - 1 or not grid[w + 1][l]:
        count += 1
    if l == 0 or not grid[w][l - 1]:
        count += 1
    if l == len(grid[w]) - 1 or not grid[w][l + 1]:
        count += 1

    return count

def island_perimeter(grid):
    """Calculate the perimeter of the island in the grid."""
    perimeter = 0

    for w in range(len(grid)):
        for l in range(len(grid[w])):
            if grid[w][l]:  # If the cell is land
                perimeter += count_water_neighbors(grid, w, l)

    return perimeter
