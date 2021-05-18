#include <stdc++.h> 
using namespace std; 
#define V 7

// void display(vector<int> d, vector<bool> f) {
//     for (int i = 0; i < d.size(); i++) {
//         cout << d[i] << " ";
//     }
//     cout << endl;
// }

vector<int> djikstra(int graph[V][V],int src) 
{ 
	vector<int> dist(V,INT_MAX);
	dist[src]=0;
	vector<bool> fin(V,false);

	for (int count = 0; count < V-1 ; count++) 
	{ 
		int u = -1; 

		for(int i=0; i<V; i++) {
            if (!fin[i] && (u==-1 || dist[i] < dist[u]))
		        u=i;
            // display(dist, fin);
        }
		fin[u] = true;
		
		for (int v = 0; v < V; v++) 

			if (graph[u][v]!=0 && fin[v] == false) 
				dist[v] = min(dist[v],dist[u]+graph[u][v]); 
	} 
    return dist;
} 

int main() 
{ 
	// int graph[V][V] = { { 0, 50, 100, 0}, 
	// 					{ 50, 0, 30, 200 }, 
	// 					{ 100, 30, 0, 20 }, 
	// 					{ 0, 200, 20, 0 }}; 

    int graph[V][V] = {{0,2,0,1,0,0,0},
                       {2,0,0,3,10,0,0},
                       {},
                       {},
                       {},
                       {},
                       {}};

	for (int x: djikstra(graph,0)) {
	    cout << x << " ";
	} 
	return 0; 
} 
