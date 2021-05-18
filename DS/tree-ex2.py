class TreeNode:
    def __init__(self, data):
        self.data = data
        self.children = []
        self.parent = None

    def add_child(self, child):
        child.parent = self
        self.children.append(child)

    def get_level(self):
        level = 0
        p = self.parent
        while p:
            level += 1
            p = p.parent
        return level

    def print_tree(self, level):
        if self.get_level() > level:
            return
        # print(self.get_level())
        spaces = " " * self.get_level() * 3
        prefix = spaces + "|__" if self.get_level else ""
        print(prefix + self.data)
        if self.children:
            for child in self.children:
                child.print_tree(level)

def add_node():
    global_ = TreeNode('Earth')
    
    country1 = TreeNode('India')
    country2 = TreeNode('USA')

    state1_1 = TreeNode('Himachal')
    state2_1 = TreeNode('Uttarakhand')
    
    state1_1.add_child(TreeNode('Kasol'))
    state1_1.add_child(TreeNode('Manali'))
    state2_1.add_child(TreeNode('Dehradun'))
    state2_1.add_child(TreeNode('Haridwar'))

    state1_2 = TreeNode('New Jersey')
    state2_2 = TreeNode('California')

    state1_2.add_child(TreeNode('Princeton'))
    state1_2.add_child(TreeNode('Trenton'))
    state2_2.add_child(TreeNode('San Fransisco'))
    state2_2.add_child(TreeNode('Mountain View'))
    state2_2.add_child(TreeNode('Palo Alto'))
    
    country1.add_child(state1_1)
    country1.add_child(state2_1)
    country2.add_child(state1_2)
    country2.add_child(state2_2)

    global_.add_child(country1)
    global_.add_child(country2)

    return global_

if __name__ == '__main__':
    root = add_node()
    root.print_tree(3)
    pass