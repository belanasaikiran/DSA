#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;


class Graph{
    public:
        unordered_map<string, unordered_set<string>> adjList;

        bool addVertex(string vertex){
            if(adjList.count(vertex) == 0) {
                adjList[vertex]; // if the vertex not in adjacency List, we add it
                // Gives
                //      {
                //      "A" : []
                //      }
                return true;
            }
            return false;
        }

        void printGraph(){
            for(auto [vertex, edges] : adjList){
                cout << vertex << ": [ " ;
                    for(string edge : edges){
                        cout << edge << " ";
                    }
                    cout << "]" << endl;
                }
        }

        bool addEdge(string vertex1, string vertex2){
            if(adjList.count(vertex1) != 0 && adjList.count(vertex2) != 0){
                adjList.at(vertex1).insert(vertex2);
                adjList.at(vertex2).insert(vertex1);
                return true;
            }

            return false;
        }

        bool removeEdge(string vertex1, string vertex2){
            if(adjList.count(vertex1) != 0 && adjList.count(vertex2) != 0){
                adjList.at(vertex1).erase(vertex2);
                adjList.at(vertex2).erase(vertex1);
                return true;
            }
            return false;
        }

        bool removeVertex(string vertex){
            if(adjList.count(vertex) == 0) return false;
            for(auto otherVertex : adjList.at(vertex)){
                adjList.at(otherVertex).erase(vertex);
            }

            adjList.erase(vertex);
            return true;
        }
};


int main(){

    Graph* myGraph = new Graph;
    myGraph->addVertex("A");
    myGraph->addVertex("B");
    myGraph->addVertex("C");
    myGraph->addVertex("D");
    myGraph->addEdge("A", "B");
    myGraph->addEdge("A", "C");
    myGraph->addEdge("A", "D");
    // myGraph->removeEdge("A", "C");
    myGraph->removeVertex("B");

    myGraph->printGraph();

    return 0;
}
