import java.util.Scanner;

public class Graph {
   static  int[][] Matrix = {
            { -1, 2, -1, 3, -1, -1, -1, -1, -1, -1 },
            { -1, -1, 4, 2, 7, -1, -1, -1, -1, -1 },
            { -1, -1, -1, -1, 3, 2, -1, -1, -1, 2 },
            { 3, -1, -1, -1, 4, -1, -1, -1, -1, -1 },
            { 1, -1, -1, -1, -1, -1, -1, -1, 8, -1 },
            { -1, -1, -1, -1, -1, -1, -1, -1, -1, 1 },
            { -1, -1, -1, 2, 6, -1, -1, -1, -1, -1 },
            { -1, -1, -1, -1, -1, 3, -1, -1, 2, -1 },
            { -1, -1, 6, -1, -1, 3, 10, -1, -1, 4 },
            { -1, -1, -1, -1, -1, 1, -1, 1, -1, -1 } };
    static int numberOfNodes = Matrix[0].length;


    // Find if a node exists
    public static boolean findNode(int node) {
        return node >= 0 && node < numberOfNodes;
    }

    // Print the adjacency matrix
    public static void printMatrix() {
        for (int i = 0; i < numberOfNodes; i++) {
            for (int j = 0; j < numberOfNodes; j++) {
                System.out.print(Matrix[i][j] + ",  ");
            }
            System.out.println();
        }

    }

    public static void findAllConnectionsForNode(int node) {
        if (findNode(node)) {
            System.out.println("Connections involving node " + (node + 1) + ":");
            for (int i = 0; i < numberOfNodes; i++) {
                if (Matrix[node][i] != -1) {
                    if (Matrix[i][node] != -1) {
                        System.out
                                .println("Node " + (node + 1) + " --(" + Matrix[i][node] + ")-- Node " + (i + 1));

                    } else {
                        System.out
                                .println("Node " + (node + 1) + " --(" + Matrix[node][i] + ")--> Node " + (i + 1));
                    }
                } else if (Matrix[i][node] != -1) {
                    System.out
                            .println("Node " + (node + 1) + " <--(" + Matrix[i][node] + ")-- Node " + (i + 1));
                }

            }
        } else {
            System.out.println("Invalid node index. Please try again.");
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println(" Matrix:");
       printMatrix();

        System.out.print("Enter a node to find its connections: ");
        int node = input.nextInt();
        findAllConnectionsForNode(node - 1);

        input.close();
    }
}
