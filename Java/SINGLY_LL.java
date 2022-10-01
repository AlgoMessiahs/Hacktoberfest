
import java.util.Scanner;


public class SINGLY_LL {      //parent class
    public static node head=null;      //static or class variable whose single copy is available for all objects


    class node{             //internal child class for creating a node
        private int data;
        private node next;
        public node(int data)     //constructor for initialising
        {
            this.data=data;
            this.next=null;
        }
    }



    public void insertbeg(int a) {
        node n=new node(a);
        if(this.head==null)this.head=n;
        else
        {
            n.next=this.head;
            this.head=n;
        }
    }


    public void insertend(int a)
    {
      node n=new node(a);
      if(this.head==null)this.head=n;              //this keyword gives reference for current object
      else
      {   node ptr=this.head;
          while(ptr.next!=null)ptr=ptr.next;
          ptr.next=n;
      }
    }

public void insertpos(int pos,int a)
{
    node n=new node(a);
  if(this.head==null && pos==1)this.head=n;     // first position
  else if (this.head==null) System.out.println("List is Empty");      //for empty list
  else
  {
      node ptr=this.head;
      int count=1;
      while(count<pos-1)
      {
          if(ptr.next!=null){
          ptr=ptr.next;
          count++;}
          else      //for case if list is not filled till asked position
          {
              System.out.println("List is not available till asked position");
              break;
          }
      }
      n.next=ptr.next;
      ptr.next=n;
  }
}

public void delend()
{
    if(this.head==null) System.out.println("List is Empty");
    else
    {
      node ptr=this.head;
      while(ptr.next.next!=null)ptr=ptr.next;
      ptr.next=null;
        System.out.println("Data deleted successfully");
    }
}

public void delbeg()
{
    if(this.head==null) System.out.println("List is Empty");
    else
    {   node ptr=head;
        head=head.next;
        ptr.next=null;
        System.out.println("Data deleted successfully");
    }
}

public void delpos(int pos)
{
    if(this.head==null) System.out.println("List is Empty");
    else
    {
        node ptr=this.head;
        int count=1;
        while(count<pos-1)
        {
            if(ptr.next!=null){
                ptr=ptr.next;
                count++;}
            else      //for case if list is not filled till asked position
            {
                System.out.println("List is not available till asked position");
                break;
            }
        }
        ptr.next=ptr.next.next;
        System.out.println("Data deleted successfully");
    }
}

    public  void display()
    {
      node ptr=this.head;
      while(ptr!=null)
      {
          System.out.println(ptr.data);
          ptr=ptr.next;
      }
    }




    public static void main(String[] args) {
        Scanner sn=new Scanner(System.in);
        int k = 1;
        while (k == 1) {
            System.out.println("Press 1 for insertion at end");
            System.out.println("Press 2 for insertion at beginning");
            System.out.println("Press 3 for insertion at position");
            System.out.println("Press 4 for deletion  at end");
            System.out.println("Press 5 for deletion  at beginning");
            System.out.println("Press 6 for deletion at position");
            System.out.println("Press 7 for display");
            SINGLY_LL sll=new SINGLY_LL();      //object of parent class for accessing methods
            int choice = sn.nextInt();
            switch (choice) {
                case 1:
                    System.out.println("Enter value to be inserted at end");
                    sll.insertend(sn.nextInt());
                    break;
                case 2:
                    System.out.println("Enter value to be inserted at beg.");
                    sll.insertbeg(sn.nextInt());
                    break;
                case 3:
                    System.out.println("Enter the position and data separated by space");
                    sll.insertpos(sn.nextInt(),sn.nextInt());
                    break;
                case 4:
                    sll.delend();
                    break;
                case 5:
                    sll.delbeg();
                    break;
                case 6:
                    System.out.println("Enter the position to be deleted");
                    sll.delpos(sn.nextInt());
                    break;
                case 7:
                    sll.display();
                    break;
                default:
                    System.out.println("Please enter a valid value");

            }
            System.out.println("Press 1 to continue or 0 to exit");
            k = sn.nextInt();
        }
    }


}
