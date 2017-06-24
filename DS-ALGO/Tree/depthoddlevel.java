import java.util.*;
import java.io.*;
import java.Math.lang;
class Node
{
	int value;
	Node left,right;

	Node(int data)
	{
		value = data;
		left = right = null;
	}
}

class BinaryTree {
	Node root;

	bool hasLeaf(Node current_node)
	{
		return (current_node.left == null && current_node.right == null);
	}

	int deepestOddLevelDepthUtil(Node current_node, int current_level)
	{
		if(current_node == null)
			return 0;

		current_level += 1;
		

		if(current_level % 2 != 0 && hasLeaf(current_node))
		{
			return current_level;
			
		}
			
			return Math.max(deepestOddLevelDepthUtil(current_node.left,current_level), deepestOddLevelDepthUtil(current_node.right,current_level));
	}

	int deepestOddLevelDepth(Node current_node)
	{
		return deepestOddLevelDepthUtil(current_node, 0);
	}


	public static void main(String args[])
	{
		int sum;
		BufferedReader br  = new BufferedReader(new InputStreamReader(System.in));
		sum  = Integer.parseInt(br.readLine());
		ArrayList<Integer> a = new ArrayList<Integer>();
		BinaryTree t = new BinaryTree();
		tree.root = new node(10);
		tree.root.left = new Node(28);
        tree.root.right = new Node(13);
        tree.root.left.left = new Node(14);
        tree.root.left.right = new Node(15);
        tree.root.right.left = new Node(23);
        tree.root.right.right = new Node(24);
        t.deepestOddLevelDepth(root);
    }    
}

