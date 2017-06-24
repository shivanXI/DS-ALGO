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

	int numoffbt(ArrayList<Integer> a, int n)
	{
		int maximum = INT_MIN, minimum = INT_MAX;
		for(int i=0;i<n;i++)
		{
			maximum  = Math.max(maximum, a.get(i));
			minimum  = Math.min(minimum, a.get(i));
		}

		ArrayList<Integer> mark = new ArrayList<Integer>(maximum + 2);
		ArrayList<Integer> value = new Arraylist<Integer>(minimum + 2);
		
		for(int i=0; i<n; i++)
		{
			mark.add(a.get(i), 1);
			value.add(a.get(i) , 1);
		}

		int result = 0;
		for(int i = minimum; i<= maximum; i++)
		{
			if(mark.get(i))
			{
				for(int j = i+1; j<=maximum && j/i <= i; j+=i)
				{
					if(!mark.get(j))
						continue;

					value.add(j, value.get(j)+(value.get(i)*value.get(j/i)));

					if(i != j/i)
						value.add(j, value.get(j)+(value.get(i)*value.get(j/i)));
				}
			}
		
			result  = result + value.get(i);
		}

		return result;	
	}

	



	public static void main(String args[])
	{
		
		Scanner sc = new Scanner(System.in);
		ArrayList<Integer> a = new ArrayList<Integer>();
		BinaryTree t = new BinaryTree();
		while(true){
			a.add(sc.nextInt());
		}

		int n = a.size();
		System.out.println(t.numoffbt(a, n));
    }    
}

