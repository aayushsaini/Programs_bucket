from collections import deque
import copy

class PuzzleSolver:
    def __init__(self, edges, cursor):
        self.edges = edges
        self.cursor = cursor #key element

    def get_pos(self, board):
        pos = 0
        for i, j in enumerate(board):
            if self.cursor in j:
                pos = (i, j.index(self.cursor))
        return pos

    def swapper(self, a, b):
        a,b = b,a
        return a,b

    def print_board(self, board):
        for i in range(len(board)):
            for j in range(len(board)):
                print(" ",board[i][j], end=" ")
            print("\n")

    def solve(self, pos, current_state):
        ctr = 0
        print("Opened: ", opened)
        current_state = opened.popleft()
        closed.append((current_state))
        print("Popped: ", current_state)
        print("Closed: ", closed)
        while(True):
            ctr += 1
            board = copy.deepcopy(current_state)
            self.move_left(copy.deepcopy(board))
            self.move_up(copy.deepcopy(board))
            self.move_right(copy.deepcopy(board))
            self.move_down(copy.deepcopy(board))
            if(final_state in opened):
                print("Found: ",ctr)
                return
            print("Opened: ", opened)
            current_state = opened.popleft()
            closed.append((current_state))
            print("Popped: ", current_state)
            print("Closed: ", closed)

    def move_left(self, board):
        pos = self.get_pos(board)
        # print("ML: ",pos)
        if (pos[1] != 0):
            board[pos[0]][pos[1]], board[pos[0]][pos[1]-1] = self.swapper( board[pos[0]][pos[1]], board[pos[0]][pos[1]-1])
            if board not in opened:
                print("\nLeft Move: ")
                self.print_board(board)
                opened.append(board)
            return True
        return False
        
    def move_up(self, board):
        pos = self.get_pos(board)
        # print("MR: ",pos)
        if (pos[0] != 0):
            board[pos[0]][pos[1]], board[pos[0]-1][pos[1]] = self.swapper( board[pos[0]][pos[1]], board[pos[0]-1][pos[1]])
            if board not in opened:
                print("\nUp Move: ")
                self.print_board(board)
                opened.append(board)
            return True
        return False

    def move_right(self, board):
        pos = self.get_pos(board)
        if (pos[1] != len(board[0])-1):
            board[pos[0]][pos[1]], board[pos[0]][pos[1]+1] = self.swapper( board[pos[0]][pos[1]], board[pos[0]][pos[1]+1])
            if board not in opened:
                print("\nRight Move: ")
                self.print_board(board)
                opened.append(board)
            return True
        return False

    def move_down(self, board):
        pos = self.get_pos(board)
        if (pos[0] != len(board[0])-1):
            board[pos[0]][pos[1]], board[pos[0]+1][pos[1]] = self.swapper( board[pos[0]][pos[1]], board[pos[0]+1][pos[1]])
            if board not in opened:
                print("\nDown Move: ")
                self.print_board(board)
                opened.append(board)
            return True
        return False


if __name__ == '__main__':
    start_state = [[2, 0, 3],
                   [1, 8, 4],
                   [7, 6, 5]]
    final_state = [[1, 2, 3], 
                   [8, 0, 4], 
                   [7, 6, 5]]

    puzzle = PuzzleSolver(start_state, 0)

    pos = puzzle.get_pos(start_state)
    print("\nInitial board: ")
    puzzle.print_board(start_state)

    opened = deque()
    closed = deque()
    opened.append(start_state)

    puzzle.solve(pos, puzzle.edges)

    print("Opened: \n", opened, end="\n\n")
    print("Closed: \n", closed, end="\n")