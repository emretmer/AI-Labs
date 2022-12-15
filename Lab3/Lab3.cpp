#include <stdio.h>
#include <iostream>
#include <queue>
#include <list>
using namespace std;

void printit(int no) {
	if (no == 0)
	{
		cout << "a" << " ";
	}
	else if (no == 1)
	{
		cout << "b" << " ";
	}
	else if (no == 2)
	{
		cout << "c" << " ";
	}
	else if (no == 3)
	{
		cout << "d" << " ";
	}
	else if (no == 4)
	{
		cout << "e" << " ";
	}
	else if (no == 5)
	{
		cout << "f" << " ";
	}
}

class Graph
{
	int nodeS; // Node sayisi
	vector<list<int>> adj;

public:

	Graph(int V); // Constructor fonksiyon
	
	void addPath(int node, int target); // Nodeların yollarını tanımlayan fonksiyon
	
	void BreadthFirstSearch(int no); // Breadth First Search algoritmasının izlediği yolu gösterir.
};

Graph::Graph(int V)
{
	this->nodeS = V;
	adj.resize(V);
}

void Graph::addPath(int node, int target)	// Nodeların yollarını tanımlayan fonksiyon
{
	adj[node].push_back(target); // 
}

void Graph::BreadthFirstSearch(int no)
{
	// Nodeları gezilmemiş olarak işaretler
	vector<bool> visited;
	visited.resize(nodeS, false);

	// Breadth First Search için queue oluşturma
	list<int> queue;

	// Üstünde olduğumuz nodeu gezilmiş olarak işaretle ve enqueue et.
	visited[no] = true;
	queue.push_back(no);

	while (!queue.empty())
	{
		no = queue.front();		
		printit(no);	// Yazdırma fonksiyonu
		queue.pop_front();

		// Dequeue edilen tüm komşu nodeları al
		// eğer komşu node ziyaret edilmemişse
		// ziyaret edildi olarak işaretle ve enqueue işlemini yap
		for (auto adjacent : adj[no])
		{
			if (!visited[adjacent])
			{	
				visited[adjacent] = true;
				queue.push_back(adjacent);
			}
		}
	}
}

int main()
{
	// 7 nodelu bir graph oluşturma
	Graph g(7);

	// Nodeların diğer nodelara olan yollarını tanımlama
	g.addPath(0, 1);	// a -> b
	g.addPath(0, 4);	// a -> e
	g.addPath(1, 2);	// b -> c
	g.addPath(1, 3);	// b -> d
	g.addPath(2, 1);	// c -> b
	g.addPath(2, 3);	// c -> d
	g.addPath(3, 1);	// d -> b
	g.addPath(3, 2);	// d -> c
	g.addPath(4, 5);	// e -> f
	g.addPath(5, 5);	// f -> f

	// Breadth First Search sonuçları
	g.BreadthFirstSearch(0);

	return 0;
}
