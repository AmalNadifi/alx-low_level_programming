#!/usr/bin/python3
""" Definition of a class 'island_perimeter' """


def island_perimeter(grid):
    """ This class calculates the perimeter of the island described
    in grid.

    Args:
        grid(List[list[int]]): This is the list of lists representing
                                the grid

    Returns:
        int: The island's perimeter
    """
    if not grid:
        return 0

    # Getting the number of rows and columns in the grid
    rows, columns = len(grid), len(grid[0])

    # Initialization of the variable storing the perimeter
    perimeter = 0

    # Iteration through the grid
    for r in range(rows):
        for c in range(columns):
            if grid[r][c] == 1:
                # Starting with 4 sides for each land's cell
                perimeter += 4

                # Checking the adjacent cells and substract 1 for shared side
                if r > 0 and grid[r - 1][c] == 1:
                    perimeter -= 1
                if r < rows - 1 and grid[r + 1][c] == 1:
                    perimeter -= 1
                if c > 0 and grid[r][c - 1] == 1:
                    perimeter -= 1
                if c < columns - 1 and grid[r][c + 1] == 1:
                    perimeter -= 1

    return perimeter
