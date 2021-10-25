class Node{
    int key;
    Node left;
    Node right;

    public Node(int key){
        this.key = key;
        this.left = null;
        this.right = null;
    }
}


class BST{
    public Node insert(Node root,int key){

        if(root == null){
            root = new Node(key);
            return root;
        }

        if(root.key > key){
            root.left = insert(root.left, key);
        }

        else{
            root.right = insert(root.right, key);
        }

        return root;
    }

    public void InOrderTraversal(Node root){
        if(root == null){
            return;
        }

        InOrderTraversal(root.left);

        System.out.print(root.key + " ");

        InOrderTraversal(root.right);
    }
}

public class BinarySearchTree{
    public static void main(String[] args) {
        BST bst = new BST();

        Node root = null;

        root = bst.insert(root, 3);
        root = bst.insert(root, 2);
        root = bst.insert(root, 1);
        root = bst.insert(root, 4);
        root = bst.insert(root, 5);

        bst.InOrderTraversal(root);
        System.out.println("");
    }
}