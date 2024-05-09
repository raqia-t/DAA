def dfs(graph, root, goal):
    visited = set()
    stack = [(root, [root])]
    visited.add(root)
    
    while stack:
        vertex, path = stack.pop()
        
        if vertex == goal:
            return path
        
        for neighbour in graph[vertex]:
            if neighbour not in visited:
                new_path = path + [neighbour]
                stack.append((neighbour, new_path))
                visited.add(neighbour)
    
    return None

graph = {
    'A': ['B', 'D'],
    'B': ['C'],
    'C': ['E'],
    'D': ['E', 'F'],
    'E': ['B'],
    'F': ['G'],
    'G': ['E']
}
start_node = 'A'
goal_node = 'G'

print('Following is the Depth-First Search')
print(dfs(graph, start_node, goal_node))