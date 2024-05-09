from collections import deque

def bfs(graph, root, goal):
    visited = set()
    queue = deque([(root, [root])])
    visited.add(root)
    
    while queue:
        vertex, path = queue.popleft()
        
        if vertex == goal:
            return path
        
        for neighbour in graph[vertex]:
            if neighbour not in visited:
                new_path = path + [neighbour]
                queue.append((neighbour, new_path))
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

print('Following is the Breadth-First Search')
print(bfs(graph, start_node, goal_node))
