class Node 
{
	int data;
	Node left, right;

	Node(int item)
	{
		data = item;
		right = left = null;
	}
}

public class BinaryTree
{
	Node root;
	Node head;
	Node prev;

	public Node removeLeafList(Node root)
	{
		if(root == null)
			return null;
		if(root.left == null && root.right == null)
		{
			if(head == null)
			{
				head = root;
				prev = root;
			}else{
				prev.right = root;
				root.left = prev;
				prev = root;
			}
			return null;
		}

		root.left = removeLeafList(root.left);
		root.right = removeLeafList(root.right);
		return root;
	}

	public void printDLL(Node head){
		Node last = null;
		while(head != null){
			System.out.println(head.data + " ");
			last = head;
			head = head.right;
		}
	}

	public static void main(String args[])
	{
		BinaryTree tree = new BinaryTree();
		tree.root = new Node(1);
		tree.removeLeafList(tree.root);
		tree.printDLL(tree.head);
	}
}