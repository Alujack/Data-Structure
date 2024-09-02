#include <iostream>
#include <stack>
#include <vector>

bool isElementInStack(std::stack<int> stack, int element)
{
    while (!stack.empty())
    {
        if (stack.top() == element)
        {
            return true;
        }
        stack.pop();
    }
    return false;
}
bool isElementInNode(std::vector<int> visitedNodes, int element)
{
    for (int i = 0; i < 6; i++)
    {
        if(visitedNodes[i] == element){
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

void DFS(int G[6][6], int start, int goal)
{
    std::stack<int> stack;
    std::vector<int> visitedNodes;
    int n;
    // Adjust start and goal to 0-based index
    stack.push(start);

    STEP2:
    if (stack.empty())
    {
        std::cout << "Goal not found" << std::endl;
        printVisitedNode(visitedNodes);
        return;
    }

    n = stack.top();
    stack.pop();

    if (n == goal)
    {
        std::cout << "Goal found" << std::endl;
        printVisitedNode(visitedNodes);
        return ;
    }
    else
    {
        visitedNodes.push_back(n);
    }

    for (int i = 0; i < 6; i++)
    {
        if (G[n-1][i] != 0 && !isElementInStack(stack, i+1) && !isElementInNode(visitedNodes,i+1)){
            stack.push(i+1);
        }
    }
    goto STEP2;

    
}

int main()
{
    int G[6][6] = {
        {0, 1, 1, 1, 0, 0},
        {1, 0, 1, 0, 0, 0},
        {0, 1, 0, 1, 1, 1},
        {0, 0, 1, 0, 1, 0},
        {0, 0, 1, 1, 0, 1},
        {0, 0, 1, 0, 1, 0}};

    int startVertex = 1;
    int goal = 7;

    std::cout << "DFS starting from vertex " << startVertex << ":\n";

    DFS(G, startVertex, goal);

    return 0;
}
