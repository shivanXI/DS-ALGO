import java.util.HashMap;
import java.util.Map;

class Node
{
	int data;
	Node next, random;

	public Node(int data)
	{
		this.data = data;
		this.next = this.random = null;
	}
}

class LinkedList
{
	Node head;
	public LinkedList(Node head)
	{
		this.head = head;
	}

	public void push(int data)
	{
		Node node = new Node(data);
		node.next = this.head;
		this.head = node;
	}

	void print()
	{
		Node temp = head;
		while(temp != null)
		{
			Node random = temp.random;
			int randomData = (random != null)? random.data: -1;
			System.out.println("Data =" + temp.data + ", Random data = "+ randomData);
			temp = temp.next;
		}
	}

	public LinkedList clone()
	{
		Node origCurr = this.head, cloneCurr = null;
		Map<Node, Node> map = new HashMap<Node, Node>();

		while(origCurr != null)
		{
			cloneCurr = new Node(origCurr.data);
			map.put(origCurr, cloneCurr);
			origCurr = origCurr.next;
		}

		origCurr = this.head;
		
		while(origCurr != null)
		{
			cloneCurr = map.get(origCurr);
			cloneCurr.next = map.get(origCurr.next);
			cloneCurr.random = map.get(origCurr.random);
			origCurr = origCurr.next;
		}

		return new LinkedList(map.get(this.head));
	}
}
