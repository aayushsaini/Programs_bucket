#User class and related function and members

class User:
    def __init__(self, name, edu, address, occupation, org):
        self.name = name
        self.add = address
        self.edu = edu
        self.occupation = occupation
        self.org = org
    
    def describe_user(self):
        print("{0} lives in {1}\n{0} is {3} at {4}\n{0} has an education of {2}".format(self.name, self.add, self.edu, self.occupation, self.org))
    
    def greet_user(self):
        print("\nHello {0}! How are you doing? ".format(self.name))


if __name__ == '__main__':
    u1 = User("Aayush Saini", "BCA, MCA", "JP Residency, Main Rd., Bsp(C.G.)","Student", "Thapar University")
    u1.greet_user()
    u1.describe_user()