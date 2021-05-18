class BSTNode:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
    
    def add_node(self, data):
        if data == self.data:
            print("\nCannot insert an existing node!\n")
            return
        elif data < self.data:
            if self.left:
                self.left.add_node(data)
            else:
                self.left = BSTNode(data)
        elif data > self.data:
            if self.right:
                self.right.add_node(data)
            else:
                self.right = BSTNode(data)
        else:
            print("\nUnknown Error occured\n")
    
    def in_order_traversal(self):
        elements = []
        #left node traversal
        if self.left:
            elements +=  self.left.in_order_traversal()
        #parent node traversal
        elements.append(self.data)
        #right node traversal
        if self.right:
            elements += self.right.in_order_traversal()
        
        return elements
        
    def search_elem(self, data):
        if self.data == data:
            return True

        elif data < self.data:
            if self.left:
                return self.left.search_elem(data)
            else:
                return False    

        elif data > self.data:
            if self.right:  
                return self.right.search_elem(data)
            else:
                return False    

    def min_element(self):
        if self.left is None:
            return self.data
        return self.left.min_element()

    def max_element(self):
        if self.right is None:
            return self.data
        return self.right.max_element()

    def get_sum(self):
        left_sum = self.left.get_sum() if self.left else 0
        right_sum = self.right.get_sum() if self.right else 0
        return self.data + left_sum + right_sum

    def delete_node(self, data):
        if data < self.data:
            if self.left:
                self.left.delete_node(data)
        elif data > self.data:
            if self.right:
                self.right.delete_node(data)
        else:
            if ((self.left is None) and (self.right is None)):
                return None
            if self.left is None:
                return self.right
            if self.right is None:
                return self.left
            
            min_val = self.right.min_element()
            self.data = min_val
            self.right = self.right.delete_node(min_val)
        return self


def build_tree(elements):
    root = BSTNode(elements[0])
    for i in range(1, len(elements)):
        root.add_node(elements[i])
    return root

if __name__ == '__main__':
    elems = [17, 4, 1, 20, 9, 23, 18, 34]
    # elems = ['suraj', 'aayush', 'isha', 'kiran']
    numbers_tree = build_tree(elems)
    print(numbers_tree.in_order_traversal())
    numbers_tree.delete_node(17)
    print(numbers_tree.in_order_traversal())
    # print("Min: ", numbers_tree.min_element())
    # print("Max: ", numbers_tree.max_element())
    # print("Sum: ", numbers_tree.get_sum())
    # print("Sum: ", sum(numbers_tree.in_order_traversal()))
    # print(numbers_tree.search_elem('isha'))