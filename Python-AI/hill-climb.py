
start_state     = [[1, 2, 3],
                   [8, " ", 4],
                   [7, 6, 5]]

final_state      = [[8, 1, 3],
                    [" ", 2, 4],
                    [7, 6, 5]]

"""final_state      = [[2, 8, 1],
                   [" ", 4, 3],
                   [7, 6, 5]]
"""



global stack
global visited

visited         = []
desi            = dict()


def non_matchCount(current_state):
        count = 0
        for i in range(3):
            for j in range(3):
                if (current_state[i][j] != final_state[i][j]):
                    count = count+1
        return count
        
def find_index(current_state):
    cc = []
    for i in range(3):
        aa = []
        for j in range(3):
            aa.append(current_state[i][j])
        cc.append(aa)
        
    for i in range(len(current_state)):
        try:
            indx = current_state[i].index(" ")
            return (cc, i, indx)
        except:
            pass

def left_move(cc):
    global stack
    global visited
    current_state, row, col = find_index(cc)
    if col != 0:
        temp = current_state[row][col-1]
        current_state[row][col-1] = " "
        current_state[row][col]   = temp
        if current_state not in visited:
        
            count = non_matchCount(current_state)
            if count in desi:
                desi[count].append(current_state)
            else:
                desi[count] = [current_state]
                
            print("After left_move : ", current_state)
            return True
        else:
            return False
    else:
        return False

def right_move(cc):
    global stack
    global visited
    current_state, row, col = find_index(cc)
    if col != 2:
        temp = current_state[row][col+1]
        current_state[row][col+1] = " "
        current_state[row][col]   = temp
        if current_state not in visited:
        
            count = non_matchCount(current_state)
            if count in desi:
                desi[count].append(current_state)
            else:
                desi[count] = [current_state]
                
            print("After right_move : ", current_state)
            return True
        else:
            return False
    else:
        return False

def down_move(cc):
    global stack
    global visited
    current_state, row, col = find_index(cc)
    if row != 2:
        temp = current_state[row+1][col]
        current_state[row+1][col] = " "
        current_state[row][col]   = temp
        if current_state not in visited:
        
            count = non_matchCount(current_state)
            if count in desi:
                desi[count].append(current_state)
            else:
                desi[count] = [current_state]
                
            print("After down_move : ", current_state)
            return True
        else:
            return False
    else:
        return False


def up_move(cc):
    global stack
    global visited
    current_state, row, col = find_index(cc)
    if row != 0:
        temp = current_state[row-1][col]
        current_state[row-1][col] = " "
        current_state[row][col]   = temp
        if current_state not in visited:
        
            count = non_matchCount(current_state)
            if count in desi:
                desi[count].append(current_state)
            else:
                desi[count] = [current_state]
                
            print("After up_move : ", current_state)
            return True
        else:
            return False
    else:
        return False

def fun(cs):
    global stack
    global visited
    global desi 
    desi = dict()
    visited.append(cs)
    
    if cs == final_state:
        return True
    else:
        if right_move(cs):
            pass
        if left_move(cs):
            pass
        if down_move(cs):
            pass
        if up_move(cs):
            pass
        
            
        if desi == None:
            return False
        else:
            tempState = desi[min(desi)].pop(0)
            return fun(tempState)

print("  Y :  ", fun(start_state))
print("Visited States : ", visited)
            
