def shuffle(array):
    pass

#initial block arrangement
# blocks_init = {
#                 1:{'c': -1, 'b':-0}, 
#                 2:{'a':0}
#             } 

#goal block arrangement
# blocks_fin = {
#                 1:{'c':2,'b':1,'a':0}
#             }  

blocks_init = [['c','b'],['a']]
blocks_fin = [['c','b','a']]

try_blocks = []

while(try_blocks != blocks_fin):
    try_blocks = blocks_init
    for x in try_blocks:
        if len(x) > 1:
            for i in range(len(x)-1):
                temp = x.pop()
                # try_blocks += temp
                print(temp)
    

    # print(try_blocks)
    # print(blocks_fin)
    break

# print(blocks_init)
