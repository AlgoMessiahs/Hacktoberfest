class TreeNode{
    int key;
    TreeNode left;
    TreeNode right;

    public TreeNode(int key){
        this.key = key;
        this.left = null;
        this.right = null;
    }
}


class BinaryTree{

    public TreeNode insert(TreeNode root,int key){

        if(root == null){
            root = new TreeNode(key);
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
}

class Traversals{

    public void InOrderTraversal(TreeNode root){
        
        if(root == null){
            return;
        }

        InOrderTraversal(root.left);

        System.out.print(root.key + " ");

        InOrderTraversal(root.right);
    }

    public void PreOrderTraversal(TreeNode root){
        
        if(root == null){
            return;
        }

        System.out.print(root.key + " ");

        PreOrderTraversal(root.left);

        PreOrderTraversal(root.right);
    }

    public void PostOrderTraversal(TreeNode root){
        if(root == null){
            return;
        }

        PostOrderTraversal(root.left);

        PostOrderTraversal(root.right);

        System.out.print(root.key + " ");

    }
}



public class TreeTraversals {
    public static void main(String[] args) {
        BinaryTree tree = new BinaryTree();

        TreeNode root = null;

        root = tree.insert(root, 3);
        root = tree.insert(root, 2);
        root = tree.insert(root, 1);
        root = tree.insert(root, 4);
        root = tree.insert(root, 5);

        Traversals tr = new Traversals();

        System.out.print("InOrderTraversal : ");

        tr.InOrderTraversal(root);

        System.out.println("");

        System.out.print("PreOrderTraversal : ");

        tr.PreOrderTraversal(root);

        System.out.println("");

        System.out.print("PostOrderTraversal : ");

        tr.PostOrderTraversal(root);

        System.out.println("");
    }
}
