import java.util.*;

class Node implements Comparable<Node> {
    int id;
    int cost;

    public Node(int id, int cost) {
        this.id = id;
        this.cost = cost;
    }

    @Override
    public int compareTo(Node other) {
        return Integer.compare(this.cost, other.cost);
    }
}

public class Optimize {

    public static void printVisitedNodes(List<Integer> visitedNodes) {
        System.out.print("Visited nodes: ");
        for (int node : visitedNodes) {
            System.out.print((node + 1) + " "); // +1 to match the 1-based indexing in your problem description
        }
        System.out.println();
    }

    public static boolean isNodeVisited(List<Integer> visitedNodes, int node) {
        return visitedNodes.contains(node);
    }

    public static void costSearch(int[][] matrix, int start, int goal) {
        List<Integer> visitedNodes = new ArrayList<>();
        PriorityQueue<Node> open = new PriorityQueue<>();
        Map<Integer, Integer> costSoFar = new HashMap<>(); // Tracks the lowest cost to reach each node

        open.add(new Node(start, 0));
        costSoFar.put(start, 0);

        while (!open.isEmpty()) {
            Node current = open.poll();

            if (current.id == goal) {
                System.out.println("Goal found! :" + current.cost);
                printVisitedNodes(visitedNodes);
                return;
            }

            if (!isNodeVisited(visitedNodes, current.id)) {
                visitedNodes.add(current.id);

                for (int i = 0; i < matrix.length; i++) {
                    if (matrix[current.id][i] != 0) {
                        int newCost = current.cost + matrix[current.id][i];

                        // If we find a cheaper way to reach node i, update the priority queue
                        if (!costSoFar.containsKey(i) || newCost < costSoFar.get(i)) {
                            costSoFar.put(i, newCost);
                            open.add(new Node(i, newCost));
                        }
                    }
                }
            }
        }

        System.out.println("Goal not found.");
        printVisitedNodes(visitedNodes);
    }

    public static void main(String[] args) {
        int[][] matrix = {
                { 0, 2, 0, 3, 0, 0, 0 },
                { 2, 0, 4, 0, 3, 0, 0 },
                { 1, 4, 0, 0, 0, 3, 0 },
                { 3, 0, 0, 0, 1, 0, 6 },
                { 0, 3, 0, 1, 0, 2, 1 },
                { 0, 0, 3, 0, 2, 0, 7 },
                { 0, 0, 0, 6, 1, 7, 0 }
        };

        int start = 1;
        int goal = 7;
        System.out.println("Cost Search from index " + (start) + ":");

        costSearch(matrix, start - 1, goal - 1);
    }
}
