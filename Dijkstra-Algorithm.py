import heapq

def dijkstra(graph, start):
    # Number of nodes in the graph
    num_nodes = len(graph)
    
    # Distance vector initialized to infinity
    distances = {node: float('inf') for node in graph}
    distances[start] = 0

    # Priority queue to select the node with the smallest distance
    priority_queue = [(0, start)]

    # Set to keep track of visited nodes
    visited = set()

    while priority_queue:
        current_distance, u = heapq.heappop(priority_queue)

        if u in visited:
            continue
        
        # Mark the node as visited
        visited.add(u)

        for v, weight in graph[u].items():
            if v in visited:
                continue

            new_distance = current_distance + weight
            if new_distance < distances[v]:
                distances[v] = new_distance
                heapq.heappush(priority_queue, (new_distance, v))
    
    return distances

# Example usage
graph = {
    'A': {'B': 1, 'C': 4},
    'B': {'A': 1, 'C': 2, 'D': 5},
    'C': {'A': 4, 'B': 2, 'D': 1},
    'D': {'B': 5, 'C': 1}
}

start_node = 'A'
shortest_paths = dijkstra(graph, start_node)

print("Shortest paths from node", start_node)
for node, dist in shortest_paths.items():
    print(f"Node {node} - Distance: {dist}")
