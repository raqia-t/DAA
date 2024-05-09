from queue import PriorityQueue

def UCS(graph, root, goal):
    visited = set()
    priority_queue = PriorityQueue()
    priority_queue.put((0, root,[root]))  
    visited.add(root)

    while not priority_queue.empty():
        cost, vertex,path = priority_queue.get()

        if vertex == goal:
            print("Shortest_path:",path)
            print("Total_cost:",cost)
            return

        for neighbour, edge_cost in graph[vertex]:
            if neighbour not in visited:
                new_cost = cost + edge_cost
                new_path = path + [neighbour]
                priority_queue.put((new_cost, neighbour,new_path))

    print("\nGoal not reachable.")

graph = {
    'A': [['B', 5], ['D', 3]],
    'B': [['C', 1]],
    'C': [['E', 6]],
    'D': [['E', 2], ['F', 2]],
    'E': [['B', 4]],
    'F': [['G', 3]],
    'G': [['E', 4]]
}

start_node = 'A'
goal_node = 'G'

print('Following is the Uniform Cost Search:')
UCS(graph, start_node, goal_node)