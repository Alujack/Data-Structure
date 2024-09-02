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

public class CostSearch {

    public static void printVisitedNodes(List<Integer> visitedNodes) {
        System.out.print("Visited nodes: ");
        for (int node : visitedNodes) {
            System.out.print((node + 1) + " ");
        }
        System.out.println();
    }

    public static boolean isNodeVisited(List<Integer> visitedNodes, int node) {
        return visitedNodes.contains(node);
    }

    public static void costSearch(int[][] matrix, int start, int goal) {
        List<Integer> visitedNodes = new ArrayList<>();
        PriorityQueue<Node> open = new PriorityQueue<>();

        open.add(new Node(start, 0)); // start node with cost 0

        while (!open.isEmpty()) {
            Node current = open.poll();

            if (current.id == goal) {
                System.out.println("Goal found! :" + current.cost);
                printVisitedNodes(visitedNodes);
                return;
            }

            if (!isNodeVisited(visitedNodes, current.id)) {
                visitedNodes.add(current.id);

                // Generate successors based on direct connections (edges)
                for (int i = 0; i < matrix.length; i++) {
                    if (matrix[current.id][i] != 0 && !isNodeVisited(visitedNodes, i)) {
                        int newCost = current.cost + matrix[current.id][i];
                        open.add(new Node(i, newCost));
                    }
                }
            }
        }
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
        int goal = 6;
        System.out.println("Cost Search from index " + (start) + ":");

        costSearch(matrix, start - 1, goal - 1);
    }
}
