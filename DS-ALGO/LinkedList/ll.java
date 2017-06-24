import java.util.*;

public class LinkedList<AnyType> implements Iterable<AnyType>
{
	private Node<AnyType> head;

	public LinkedList()
	{
		head  = null;
	}

	public boolean isEmpty()
	{
		return head == null;
	}

	public void addFirst(AnyType item)
	{
		head = new Node<AnyType>(item, head);
	}

	public AnyType getFirst()
	{
		if(head == null) throw new NoSuchElementException();
		return head.data;

	}

	public AnyType removeFirst()
	{
		AnyType tmp = getFirst();
		head = head.next;
		return tmp;
	}

	public void addLast(AnyType item)
	{
		if( head == null)
			addFirst(item);
		else
		{
			Node<Anytype> tmp = head;
			while(tmp.next != null) tmp = tmp.next;

			tmp.next  = new Node<AnyType> (item, null);
		}
	}

	public AnyType getLast()
	{
		if(head == null) throw new NoSuchElementException();

		Node<AnyType> tmp = head;
		while(tmp.next != null) tmp = tmp.next;

		return tmp.data;
	}

	public void clear()
	{
		head = null;
	}

	public boolean contains(AnyType x)
	{
		for(AnyType tmp : this)
			if(tmp.equals(x)) return true;

		return false;
	}

	public AnyType get(int pos)
	{
		if(head == null) throw new IndexOutOfBoundsException();
		Node<AnyType> tmp = head;
		for(int k=0; k<pos; k++) tmp = tmp.next;

		if(tmp == null) throw new IndexOutOfBoundsException();
	    return tmp.data;
	}

	public void insertAfter(AnyType key, AnyType toInsert)
	{
		Node<AnyType> tmp = head;
		while(tmp != null && !tmp.data.equals(key)) tmp = tmp.next;
		
		if(tmp != null)
			tmp.next = new Node<AnyType>(toInsert, tmp.next);
	}

	public void insertBefore(AnyType key, AnyType toInsert)
	{
		if(head == null) return;

		if(head.data.equals(key))
		{
			addFirst(toInsert);
			return;
		}

		Node<AnyType> prev = null;
		Node<AnyType> cur = head;

		while(cur != null && !cur.data.equals(key))
		{
			prev = cur;
			cur = cur.next;
		}

		if(cur != null)
			prev.next = new Node<AnyType>(toInsert, cur);
	}


	public void remove(AnyType key)
	{
		if(head == null)
			throw new RuntimeException("cannot delete");

		if(head.data.equals(key))
		{
			head = head.next;
			return;
		}

		Node<AnyType> cur = head;
		Node<AnyType> prev = null;

		while(cur != null && !cur.data.equals(key))
		{
			prev = cur;
			cur = cur.next;
		}

		if(cur == null)
			throw new RuntimeException("cannot delete");

		prev.next = cur.next;
	}

	


}