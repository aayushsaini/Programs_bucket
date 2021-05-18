
class Restaurant:
    def __init__(self, name, cuisine):
        self.name = name
        self.cuisine = cuisine
    
    def describe_restaurant(self):
        print("\nRestaurant Name: ", self.name, " | Cuisine type: ", self.cuisine)
    
    def open_restaurant(self):
        print("\nStatus: ",self.name, "restaurant is open now!")

if __name__ == '__main__':
    res1 = Restaurant('Tree-house Cafe', 'Indian Cuisine')
    print("\n->",res1.name, end=", ");
    print(res1.cuisine);
    res1.describe_restaurant()
    res1.open_restaurant()