j1 = 5
j2 = 3
t = 4

def jugSolver(w1,w2):

    print(w1, w2)
    while(w1 != t and w2 != t):
        if(w2 == j2):
            w2 = 0
        elif(w1 != 0):
            if w1 <= j2 - w2:
                w1, w2 = 0, w1+w2
            else:
                w1, w2 = w1 - (j2-w2), j2
        else:
            w1 = j1
        print(w1, w2)

    # print(w1,w2)
    # if((w1==t and w2==0) or (w1==0 and w2==t)):
    #     if(w1==t):
    #         return 0
    #     elif(w2==t):
    #         w1=t
    #         w2=0
    #         return 
    # elif(w2==j2):
    #     jugSolver(w1, 0)
    # elif(w1>0):
    #     if (w1<=j2-w2):
    #         jugSolver(0, w1+w2)
    #     elif (w1>j2-w2):
    #         jugSolver(w1-(j2-w2), w2+(j2-w2))
    # else:
    #     jugSolver(j1,w2)

jugSolver(5,3)

