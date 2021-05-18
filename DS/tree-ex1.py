class TreeNode:
    def __init__(self, data, pos):
        self.data = data
        self.post = pos
        self.children = []
        self.parent = None

    def add_child(self, child):
        child.parent = self
        self.children.append(child)

    def get_level(self):
        levels = 0
        p = self.parent
        while p:
            levels += 1
            p = p.parent
        return levels

    def print_tree(self):
        spaces = " " * self.get_level() * 3
        prefix = spaces + "|__" if self.parent else ""
        print(prefix + self.data + " (" + self.post + ")")
        if self.children:
            for child in self.children:
                child.print_tree()

def build_tree():
    ceo = TreeNode('Nilupul', 'CEO')
    
    tech = TreeNode('Chinmay', 'CTO')
    #for tech postings
    infra = TreeNode('Vishwa', 'Infrastructure Head')
    app = TreeNode('Aamir', 'Application Head')
    infra.add_child(TreeNode('Dhaval', 'Cloud Manager'))
    infra.add_child(TreeNode('Abhijit', 'App Manager'))

    tech.add_child(infra)
    tech.add_child(app)

    hr = TreeNode('Gels', 'HR')
    #for HR postings
    hr.add_child(TreeNode('Peter', 'Recruitment Manager'))
    hr.add_child(TreeNode('Waqas', 'Policy Manager'))

    ceo.add_child(tech)
    ceo.add_child(hr)

    print(tech.get_level())

    return ceo

if __name__ == '__main__':
    root = build_tree()
    root.print_tree()
    pass