#Min/Max marks calculator for 4 subjects with avg

import random
totalStudent = 10
s1 = []
s2 = []
s3 = []
s4 = []
subjects = [s1, s2, s3, s4]
for i in range(totalStudent):
    s1.append([random.randint(50, 100) for i in range(4)]+[random.randint(50,100) for i in range(4)]+[random.randint(50,100) for i in range(4)]+[random.randint(50,100) for i in range(4)])
    s2.append([random.randint(50, 100) for i in range(4)]+[random.randint(50,100) for i in range(4)]+[random.randint(50,100) for i in range(4)]+[random.randint(50,100) for i in range(4)])
    s3.append([random.randint(50, 100) for i in range(4)]+[random.randint(50,100) for i in range(4)]+[random.randint(50,100) for i in range(4)]+[random.randint(50,100) for i in range(4)])
    s4.append([random.randint(50, 100) for i in range(4)]+[random.randint(50,100) for i in range(4)]+[random.randint(50,100) for i in range(4)]+[random.randint(50,100) for i in range(4)])

for i in range(totalStudent):
    sub = 0
    s = 1
    for y in range(4):
        for z in range(len(subjects)):
            total = 0
            if(sub>=4):
                break
            # print("Student: {} ".format(i+1), "Subject:{}".format(s),subjects[sub][y])
            print("Student:{} Min Marks of Subject[{}]".format(i+1,s),min(subjects[sub][y]))
            print("Student:{} Max Marks of Subject[{}]".format(i+1,s),max(subjects[sub][y]))
            for x in subjects[sub][y]:
                total = x+total
            # print("Student:{} Total Marks:{} & Average Marks: {}".format(i+1, total,total/len(subjects[sub][y])))
            sub+=1
            s+=1