.python for 8 queen problem


def solve_eight_queens():
    def is_valid(board, row, col):
        # Check if there is a queen in the same column
        for i in range(row):
            if board[i] == col:
                return False

        # Check diagonal left up
        for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
            if board[i] == j:
                return False

        # Check diagonal right up
        for i, j in zip(range(row, -1, -1), range(col, 8)):
            if board[i] == j:
                return False

        return True

    def solve(board, row):
        if row == 8:
            return [board[:]]

        solutions = []
        for col in range(8):
            if is_valid(board, row, col):
                board[row] = col
                for solution in solve(board, row + 1):
                    solutions.append(solution)
        return solutions

    board = [-1] * 8
    return solve(board, 0)

solutions = solve_eight_queens()
print("Number of solutions:", len(solutions))
for i, solution in enumerate(solutions):
    print("Solution #{}: {}".format(i + 1, solution))

