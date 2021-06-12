import copy

last=[]
qu=[]
tempque=[]

def generate_children(t):
    s=t[0]
    currentdepth=t[1]
    global last,qu,tempque
    children=[]
    for i in range(len(s)):
        temp=copy.deepcopy(s)
        if len(temp[i]) > 0:
            elem=temp[i].pop()
            for j in range(len(temp)):
                temp1=copy.deepcopy(temp)
                if j!= i:
                    temp1[j]=temp1[j] + [elem]
                    if (temp1 not in last) and (temp1 not in tempque):
                        tempque+=[temp1]
                        children+=[(temp1,currentdepth+1)]
    return children
depth=1

def searchQ3(initial,final):
    global last, qu
    if (initial[0] in final):
        print(final)
        print(f"solution found at the depth:-{initial[1]}")
        print(f"total number of states visited:-{len(last)}")
        return
    currentstate= copy.deepcopy(initial)
    global depth
    while(1):
        if currentstate[1]<= depth:
            children =generate_children(currentstate)
            print(currentstate)
            print("------------")
        if (currentstate[0]== final):
            print(final)
            print(f"solution found at the depth:-{currentstate[1]}")
            print(f"total number of states visited:-{len(last)}")
            return
        else:
            qu +=children
        if len(qu)== 0:
            print("solution does not exists")
            print(f"current depth is{currentstate[1]}")
            print(f"total number of states visited:-{len(last)}")
            return
        else:
            currentstate=qu[len(qu)-1]
            last =last+ [currentstate]
            del qu[len(qu)-1]
            
block = 3
state = [[]]*block
initial= [['B'],['A','C'],[]]
final= [['A','B','C'],[],[]]
last = last + [initial]
searchQ3((initial,0),final)