#include <iostream>
#include <queue>
#include <vector>

bool isElementInQueue(std::queue<int> queue, int element)
{
    while (!queue.empty())
    {
        if (queue.front() == element)
        {
            return true;
        }
        queue.pop();
    }
    return false;
}
bool isElementInNode(std::vector<int> visitedNodes, int element)
{
    for (int i = 0; i < 8; i++)
    {
        if (visitedNodes[i] == element)
        {
            return true;
        }
    }
    return false;
}

void printVisitedNode(std::vector<int> visitedNodes)
{
    std::cout << "Visited nodes: ";
    for (int node : visitedNodes)
    {
        std::cout << node << " ";
    }
    std::cout << std::endl;
}

void DFS(int G[8][8], int start, int goal)
{
    std::queue<int> queue;
    std::vector<int> visitedNodes;
    int n;
    // Adjust start and goal to 0-based index
    queue.push(start);

STEP2:
    if (queue.empty())
    {
        std::cout << "Goal not found" << std::endl;
        printVisitedNode(visitedNodes);
        return;
    }

    n = queue.front();
    queue.pop();

    if (n == goal)
    {
        std::cout << "Goal found" << std::endl;
        printVisitedNode(visitedNodes);
        return;
    }
    else
    {
        visitedNodes.push_back(n);
    }

    for (int i = 0; i < 8; i++)
    {
        if (G[n - 1][i] != 0 && !isElementInQueue(queue, i + 1) && !isElementInNode(visitedNodes, i + 1))
        {
            queue.push(i + 1);
        }
    }
    goto STEP2;
}

int main()
{
    int G[8][8] = {
        {0, 0, 1, 1, 1, 0, 0, 0},
        {1, 0, 0, 1, 0, 0, 0, 1},
        {1, 0, 0, 0, 1, 0, 0, 0},
        {0, 1, 0, 0, 1, 1, 1, 1},
        {1, 0, 1, 1, 0, 1, 0, 0},
        {0, 0, 0, 1, 1, 0, 1, 0},
        {0, 0, 0, 1, 0, 1, 0, 1},
        {0, 1, 0, 1, 0, 0, 1, 0}};

    int startVertex = 1;
    int goal = 8;

    std::cout << "BFS starting from vertex " << startVertex << ":\n";

    DFS(G, startVertex, goal);

    return 0;
}
