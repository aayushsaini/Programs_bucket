#Brute force approach
routes = []

def find_paths(node, cities, path, distance):
    path.append(node)

    if len(path) > 1:
        distance += cities[path[-2]][node]
        
    if (len(cities) == len(path)) and (path[0] in cities[path[-1]]):
        global routes
        path.append(path[0])
        distance += cities[path[-2]][path[0]]
        print (path, distance)
        routes.append([distance, path])
        return

    for city in cities:
        if (city not in path) and (node in cities[city]):
            find_paths(city, dict(cities), list(path), distance)


if __name__ == '__main__':
    cities = {
        'Office': {'Dehradun': 195, 'Delhi': 86},
        'Dehradun': {'Office':195, 'Patiala': 214, 'Chandigarh': 200},
        'Patiala': {'Dehradun': 214, 'Chandigarh': 28, 'Saharanpur': 114},
        'Chandigarh': {'Dehradun': 200, 'Patiala': 28, 'Saharanpur': 180},
        'Saharanpur': {'Chandigarh': 180, 'Patiala': 114, 'Delhi': 170},
        'Delhi': {'Office':86, 'Saharanpur': 170}
    }

    place = input("Enter the place: ")
    print ("Start: {}".format(place))
    find_paths(place, cities, [], 0)
    print ("\n")
    routes.sort()
    if len(routes) != 0:
        print ("Shortest route: %s" % routes[0])
    else:
        print ("FAIL!")