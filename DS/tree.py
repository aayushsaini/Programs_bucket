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

    def print_tree(self):
        spaces = " " * self.get_level() * 3
        prefix = spaces + "|__" if self.parent else ""
        print(prefix + self.data)
        if self.children:
            for child in self.children:
                child.print_tree()

def build_product_tree():

    root = TreeNode('Electronics')

    laptops = TreeNode('Laptops')
    laptops.add_child(TreeNode('Macbook Air'))
    laptops.add_child(TreeNode('Macbook Pro'))
    laptops.add_child(TreeNode('Dell XPS'))

    mobiles = TreeNode('Mobiles')
    mobiles.add_child(TreeNode('iPhone 12 Pro'))
    mobiles.add_child(TreeNode('Galaxy Note 20'))
    mobiles.add_child(TreeNode('Galaxt Fold 2'))

    tv = TreeNode('TV')
    tv.add_child(TreeNode('Samsung'))
    tv.add_child(TreeNode('Sony'))
    tv.add_child(TreeNode('LG'))

    root.add_child(laptops)
    root.add_child(mobiles)
    root.add_child(tv)

    return root

if __name__ == '__main__':
    root = build_product_tree()
    # print(root.get_level())
    root.print_tree()
    pass