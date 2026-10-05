## Iterative Inorder Traversal

**Definition:**
Inorder traversal visits a binary tree in the order **Left → Root → Right**.

**When to use:**
When you need to process a tree in **sorted order for a BST**, or when you want inorder traversal **without recursion**.

**Why:**
The explicit stack replaces the **call stack used by recursion**, giving you control over the traversal.

**How it works:**
Keep moving `curr` to the left and push nodes into the stack → when there is no left node, pop and process the node → move to its right subtree → repeat.

**Complexity:** `O(n)` time, `O(h)` space, where `h` is the tree height.

## Iterative Preorder Traversal

**Definition:**
Preorder traversal visits a binary tree in the order **Root → Left → Right**.

**When to use:**
When you need to process the **root before its children**, such as copying/serializing a tree or preorder-based problems.

**Why:**
The stack lets us perform preorder traversal **without recursion**.

**How it works:**
Process `curr` → push its **right child** onto the stack → move to the **left child** → when no left child exists, pop the next right subtree from the stack.

**Key idea:**
Push **right first** so the left subtree is processed first (**LIFO stack**).

**Complexity:** `O(n)` time, `O(h)` space.

## Iterative Postorder Traversal

**Definition:**
Postorder traversal visits a binary tree in the order **Left → Right → Root**.

**When to use:**
When a node must be processed **after both of its children**, such as deleting/freeing a tree or bottom-up tree problems.

**Why:**
The stack simulates the recursion call stack, allowing postorder traversal **without recursion**.

**How it works:**
Push the current node again with `visited = true` → push its **right child** → push its **left child** → when the node is popped with `visited = true`, process it.

**Key idea:**
A node is processed **only after both subtrees have been processed**.

**Complexity:** `O(n)` time, `O(h)` space.
