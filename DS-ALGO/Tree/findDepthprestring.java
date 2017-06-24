import java.util.*;
import java.io.*;
import java.Math.lang.*;
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

	int findDepthPreUtil(ArrayList<Character> a, int n, int index)
	{
		if(index >= n  || a.get(index) == 'l')
			return 0;

		index = index + 1;
		int left = findDepthPreUtil(a, n, index);

		index =index+1;
		int right = findDepthPreUtil(a, n, index);

		return Math.max(left, right) + 1;	
	}

	int findDepthPre(ArrayList<Character> a, int n)
	{
		 int index = 0;
		 System.out.println(findDepthPreUtil(a, n, index));
	}


	public static void main(String args[])
	{
		
		BufferedReader br  = new BufferedReader(new InputStreamReader(System.in));
		ArrayList<Character> a = new ArrayList<Character>();
		String pre = br.readLine();
		for(int i = 0;i<pre.length(); i++)
			a.add(pre.charAt(i));

		int n = a.size();
		System.out.println(findDepthPre(a, n));
    }    
}

