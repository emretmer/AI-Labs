using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab5
{
	class Program
	{
		static void Main(string[] args)
		{
			int[] puzzle =
				{
					1,2,3,
					5,6,0,
					7,8,4
				};

			Node root = new Node(puzzle);
			BFS ui = new BFS();

			List<Node> solution = ui.BreadthFirstSearch(root);

			if (solution.Count > 0)
			{
				for (int i = 0; i < solution.Count; i++)
				{
					solution[i].PrintPuzzle();
				}
			}
			else
			{
				Console.WriteLine("No path to solution is found");
			}
			Console.Read();
		}
	}
}
