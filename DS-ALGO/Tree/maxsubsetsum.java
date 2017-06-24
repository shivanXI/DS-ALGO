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

	bool sumOfGrandChildren(Node current_node,HashMap m)
	{
		int total = 0;
		if(current_node.left)
			total = total + getMaxSumUtil(node.left.left, m) + getMaxSum(node.left.right,m);
		if(current_node.right)
			total = total + getMaxSumUtil(node.right.left, m) + getMaxSum(node.right.right, m);
		return total;
	}

	int getMaxSumUtil(Node current_node, HashMap m)
	{
		if(current_node == null)
			return 0;

		
		

		if(m.containsKey(current_node) != )
		{
			return m.get(current_node);
			
		}

		int include  = current_node.data + sumOfGrandChildren(current_node, m);
		int exclude = getMaxSumUtil(current_node.left ,m) + getMaxSumUtil(current_node.right, m);
			
		m.put(current_node, Math.max(include,exclude));
		return m.get(current_node);
	}

	int getMaxSum(Node current_node)
	{
		if(current_node == null)
			return 0;
		HashMap m = new HashMap();
		return getMaxSumUtil(current_node, m);
	}


	public static void main(String args[])
	{
		
		BufferedReader br  = new BufferedReader(new InputStreamReader(System.in));
		
		BinaryTree t = new BinaryTree();
		tree.root = new node(10);
		tree.root.left = new Node(28);
        tree.root.right = new Node(13);
        tree.root.left.left = new Node(14);
        tree.root.left.right = new Node(15);
        tree.root.right.left = new Node(23);
        tree.root.right.right = new Node(24);
        System.out.println(t.getMaxSum(root));
    }    
}

