import java.util.*;
import java.io.*;
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

	boolean hassumPath(Node node, int sum)
	{
		if(node == null)
			return (sum == 0);
		else
		{
			boolean result = false;
			int midsum = sum - node.value;
			if(midsum == 0 && node.left == null && node.right == null)
				return true;
			if(node.left != null)
				result = result || hassumPath(node.left, midsum);
			if(node.right != null)
				result = result || hassumPath(node.right, midsum);
			return result;

		}
	}

	public static void main(String args[])
	{
		int sum;
		BufferedReader br  = new BufferedReader(new InputStreamReader(System.in));
		sum  = Integer.parseInt(br.readLine());
		BinaryTree t = new BinaryTree();
		tree.root = new node(10);
		tree.root.left = new Node(8);
        tree.root.right = new Node(2);
        tree.root.left.left = new Node(3);
        tree.root.left.right = new Node(5);
        tree.root.right.left = new Node(2);

        if (t.hassumPath(tree.root, sum))
        	System.out.println("Root to leaf path exists with the sum" + sum);
        else
        	System.out.println("No root to leaf path");
	}
}

