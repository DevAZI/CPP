#include<bits/stdc++.h>
using namespace std;

vector<bool> visited;
vector<vector<int>> graph;

void dfs(int node) {	//시작 노드 가져옴
    visited[node] = true;	//처음 시작한거 방문했으니까 TRUE
    cout << node << " ";	//노드 방문했으니까 그거 출력

    for (int i = 0; i < graph[node].size(); i++) {	//인접한 노드의 개수만큼 반복		
        int nextNode = graph[node][i];	//다음 인접 노드
		 
        if (!visited[nextNode] && graph[node][i] == true) {	//만약 방문 하지 않았으면 
            dfs(nextNode);	//다시 다음 인접노드를 시작 노드로 변경하고
        }
    }
}


void bfs(int startNode) {
    queue<int> que;
    visited[startNode] = true;	//방문했으니까 TRUE
    que.push(startNode);	//큐에 시작 노드 넣음

    while (!que.empty()) {	//큐가 빌때까지
        int node = que.front();	//큐 가장 앞에있는 놈
        que.pop();	//꺼내고
        cout << node << " ";	//가장 앞에있던 값 출력

        for (int i = 0; i < graph[node].size(); i++) {	// 인접한 그래프의 개수만큼 반복
            int nextNode = graph[node][i];	//다음 인접 노드
            if (!visited[nextNode]) {				
                visited[nextNode] = true;
				que.push(nextNode);
               
            }
        }
    }
}
int main() {
	ios_base:: sync_with_stdio(false); cin.tie(NULL);
    int numNodes, numEdges;
	int startNode;
    cin >> numNodes >> numEdges >> startNode;

    graph.resize(numNodes + 1);
    visited.resize(numNodes + 1, false);

    for (int i = 0; i < numEdges; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    
    
	dfs(startNode);
    bfs(startNode);
	
	for(int i = 0; i <visited.size() ; i++){
		visited[i] = false;
	}
	
	cout << '\n';
	bfs(startNode);
    return 0;
}
