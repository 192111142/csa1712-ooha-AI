 python for 8 puzzle problem


import heapq

def find_zero(state):
    for i in range(3):
        for j in range(3):
            if state[i][j] == 0:
                return i, j
    return -1, -1

def move_up(state, i, j):
    if i > 0:
        new_state = [row[:] for row in state]
        new_state[i][j], new_state[i-1][j] = new_state[i-1][j], new_state[i][j]
        return new_state
    else:
        return None

def move_down(state, i, j):
    if i < 2:
        new_state = [row[:] for row in state]
        new_state[i][j], new_state[i+1][j] = new_state[i+1][j], new_state[i][j]
        return new_state
    else:
        return None

def move_left(state, i, j):
    if j > 0:
        new_state = [row[:] for row in state]
        new_state[i][j], new_state[i][j-1] = new_state[i][j-1], new_state[i][j]
        return new_state
    else:
        return None

def move_right(state, i, j):
    if j < 2:
        new_state = [row[:] for row in state]
        new_state[i][j], new_state[i][j+1] = new_state[i][j+1], new_state[i][j]
        return new_state
else:
        return None

def get_successors(state):
    i, j = find_zero(state)
    return [move_up(state, i, j), move_down(state, i, j), move_left(state, i, j), move_right(state, i, j)]

def manhattan_distance(state1, state2):
    distance = 0
    for i in range(3):
        for j in range(3):
            num = state1[i][j]
            if num != 0:
                x, y = divmod(state2.index(num), 3)
                distance += abs(i - x) + abs(j - y)
    return distance

def astar_search(start, end):
    heap = [(0, start, [])]
    visited = set()
    while heap:
        (cost, state, path) = heapq.heappop(heap)
        if state == end:
            return path
        if state in visited:
            continue
        visited.add(state)
        for next_state in get_successors(state):
            if next_state is not None


