#Gross Salary Calculator

def cal_gross_sal(sal, hra, da):
    return (sal + (sal*(hra/100)) + (sal*(da/100)))

base_sal = int(input("Salary: "))

if (base_sal <= 10000):
    print("\nGross Salary: ", cal_gross_sal(base_sal, 20, 80))
elif (base_sal > 10000 and base_sal <= 20000):
    print("\nGross Salary: ", cal_gross_sal(base_sal, 25, 90))
else:
    print("\nGross Salary: ", cal_gross_sal(base_sal, 30, 95))