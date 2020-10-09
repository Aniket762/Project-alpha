import java.util.Stack;

class TreeNode {
    String val;
    TreeNode left;
    TreeNode right;

    public TreeNode(String val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }

    public String getValue() {
        return this.val;
    }

    public TreeNode getLeft() {
        return this.left;
    }

    public TreeNode getRight() {
        return this.right;
    }
}

public class DepthFirstSearch {

    public static void executeDFS(TreeNode root) {
        Stack<TreeNode> stack = new Stack<>();
        TreeNode current = root;
        stack.push(current);
        
        while (!stack.isEmpty()) {
            current = stack.pop();
            System.out.println(current.getValue());
            if (current.getLeft() == null && current.getRight() == null) {
                continue;
            } else {
                if (current.getRight() != null) {
                    stack.push(current.getRight());
                }
                if (current.getLeft() != null) {
                    stack.push(current.getLeft());
                }
            }
        }
    }

    public static void main(String[] args) {
        TreeNode node4 = new TreeNode("4", null, null);
        TreeNode node5 = new TreeNode("5", null, null);
        TreeNode node6 = new TreeNode("6", null, null);
        TreeNode node3 = new TreeNode("3", null, node6);
        TreeNode node2 = new TreeNode("2", node4, node5);
        TreeNode root = new TreeNode("1", node2, node3);

        DepthFirstSearch.executeDFS(root);
    }
}
