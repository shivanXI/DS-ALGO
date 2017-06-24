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

	void hassumpathnotLeaf(Node node, int sum, int current_sum,ArrayList<Integer> a)
	{
		if(node == null)
			return;

		sum += node.value;
		a.add(node.value);

		if(current_sum == sum)
		{
			System.out.println("Path found: " + a);
			
		}
			
			if(node.left != null)
				hassumpathnotLeaf(node.left, sum, current_sum, a);
			if(node.right != null)
				hassumpathnotLeaf(node.right, sum, current_sum, a);
			a.remove(a.size()-1);
	}

	public static void main(String args[])
	{
		int sum;
		BufferedReader br  = new BufferedReader(new InputStreamReader(System.in));
		sum  = Integer.parseInt(br.readLine());
		ArrayList<Integer> a = new ArrayList<Integer>();
		BinaryTree t = new BinaryTree();
		tree.root = new node(10);
		tree.root.left = new Node(8);
        tree.root.right = new Node(2);
        tree.root.left.left = new Node(3);
        tree.root.left.right = new Node(5);
        tree.root.right.left = new Node(2);
        t.hassumpathnotLeaf(root,sum,0,a);
    }    
}

