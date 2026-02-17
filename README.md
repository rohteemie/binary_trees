# Binary Trees

A comprehensive implementation of binary tree data structures and algorithms in C.

## 📋 Table of Contents
* [Description](#description)
* [Learning Objectives](#learning-objectives)
* [Project Structure](#project-structure)
* [Requirements](#requirements)
* [Installation](#installation)
* [Usage](#usage)
* [Data Structures](#data-structures)
* [Project Tasks](#project-tasks)
* [Authors](#authors)

## Description

This project implements various binary tree operations including node creation, insertion, deletion, and tree traversal algorithms. It covers fundamental concepts of binary trees, Binary Search Trees (BST), AVL trees, and Binary Heaps.

## Learning Objectives

After completing this project, you should be able to explain:
- What is a binary tree
- The difference between a binary tree and a Binary Search Tree
- The possible gain in terms of time complexity compared to linked lists
- What are the depth, the height, and the size of a binary tree
- Different traversal methods to go through a binary tree
- What is a complete, full, perfect, and balanced binary tree

## Project Structure

```
binary_trees/
├── include/           # Header files
│   └── binary_trees.h
├── src/              # Source files
│   ├── 0-binary_tree_node.c
│   ├── 1-binary_tree_insert_left.c
│   ├── 2-binary_tree_insert_right.c
│   └── ... (all implementation files)
├── tests/            # Test files
│   └── *-main.c
├── MISC/             # Miscellaneous files
└── README.md
```

## Requirements

**Environment:** Ubuntu 20.04 LTS

**Compiler:** gcc 4.8.4 with flags:
- `-Wall -Werror -Wextra -pedantic`

**Editors:** vi, vim, emacs

**Coding Style:** Betty style
- Code checked using `betty-style.pl` and `betty-doc.pl`

**Other Requirements:**
- All files should end with a new line
- No global variables allowed
- No more than 5 functions per file
- Standard library is allowed
- All function prototypes should be in `include/binary_trees.h`
- All header files should be include guarded

## Installation

1. Clone the repository:
```bash
git clone https://github.com/rohteemie/binary_trees.git
cd binary_trees
```

2. Compile using the Makefile (recommended):
```bash
make 0-node
build/0-node
```

Or compile manually:
```bash
gcc -Wall -Werror -Wextra -pedantic -I include/ src/0-binary_tree_node.c src/binary_tree_print.c tests/0-main.c -o 0-node
```

## Usage

### Using the Makefile

The project includes a Makefile for easy compilation:

```bash
# Compile task 0
make 0-node

# Compile task 1
make 1-left

# Clean build artifacts
make clean
```

### Example Code

Example usage for creating a binary tree node:

```c
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    /* Use the tree */
    
    binary_tree_delete(root);
    return (0);
}
```

Manual compilation and run:
```bash
gcc -Wall -Werror -Wextra -pedantic -I include/ src/0-binary_tree_node.c src/binary_tree_print.c tests/0-main.c -o 0-node
./0-node
```
```

## Data Structures

### Binary Tree Node
```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

### Type Definitions
```c
/* Binary Search Tree */
typedef struct binary_tree_s bst_t;

/* AVL Tree */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap */
typedef struct binary_tree_s heap_t;
```

### Print Function
For visualization purposes, you can use [this print function](https://github.com/holbertonschool/0x1C.c).
This function is used only for visualization and doesn't need to be pushed to your repository.

## Project Tasks

### Mandatory Tasks

<details>
<summary><strong>0. New node</strong></summary>

Write a function that creates a binary tree node

- Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
- Where `parent` is a pointer to the parent node of the node to create
- And `value` is the value to put in the new node
- When created, a node does not have any child
- Your function must return a pointer to the new node, or `NULL` on failure

</details>

<details>
<summary><strong>1. Insert left</strong></summary>

Write a function that inserts a node as the left-child of another node

- Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
- Where `parent` is a pointer to the node to insert the left-child in
- And `value` is the value to store in the new node
- Your function must return a pointer to the created node, or `NULL` on failure
- If `parent` already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

</details>

<details>
<summary><strong>2. Insert right</strong></summary>

Write a function that inserts a node as the right-child of another node

- Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
- Where `parent` is a pointer to the node to insert the right-child in
- And `value` is the value to store in the new node
- Your function must return a pointer to the created node, or `NULL` on failure
- If `parent` already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

</details>

<details>
<summary><strong>3. Delete</strong></summary>

Write a function that deletes an entire binary tree

- Prototype: `void binary_tree_delete(binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to delete

</details>

<details>
<summary><strong>4. Is leaf</strong></summary>

Write a function that checks if a node is a leaf

- Prototype: `int binary_tree_is_leaf(const binary_tree_t *node);`
- Where `node` is a pointer to the node to check
- Your function must return `1` if `node` is a leaf, and `0` otherwise
- If `node` is `NULL`, return `0`

</details>

<details>
<summary><strong>5. Is root</strong></summary>

Write a function that checks if a given node is a root

- Prototype: `int binary_tree_is_root(const binary_tree_t *node);`
- Where `node` is a pointer to the node to check
- Your function must return `1` if `node` is a root, and `0` otherwise
- If `node` is `NULL`, return `0`

</details>

<details>
<summary><strong>6. Pre-order traversal</strong></summary>

Write a function that goes through a binary tree using pre-order traversal

- Prototype: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`
- Where `tree` is a pointer to the root node of the tree to traverse
- And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.

</details>

<details>
<summary><strong>7. In-order traversal</strong></summary>

Write a function that goes through a binary tree using in-order traversal

- Prototype: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`
- Where `tree` is a pointer to the root node of the tree to traverse
- And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.

</details>

<details>
<summary><strong>8. Post-order traversal</strong></summary>

Write a function that goes through a binary tree using post-order traversal

- Prototype: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`
- Where `tree` is a pointer to the root node of the tree to traverse
- And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.

</details>

<details>
<summary><strong>9. Height</strong></summary>

Write a function that measures the height of a binary tree

- Prototype: `size_t binary_tree_height(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to measure the height of
- If `tree` is `NULL`, your function must return `0`

</details>

<details>
<summary><strong>10. Depth</strong></summary>

Write a function that measures the depth of a node in a binary tree

- Prototype: `size_t binary_tree_depth(const binary_tree_t *node);`
- Where `node` is a pointer to the node to measure the depth of
- If `node` is `NULL`, your function must return `0`

</details>

<details>
<summary><strong>11. Size</strong></summary>

Write a function that measures the size of a binary tree

- Prototype: `size_t binary_tree_size(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to measure the size of

</details>

<details>
<summary><strong>12. Leaves</strong></summary>

Write a function that counts the leaves in a binary tree

- Prototype: `size_t binary_tree_leaves(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to count the leaves in
- A `NULL` pointer is not a leaf

</details>

<details>
<summary><strong>13. Nodes</strong></summary>

Write a function that counts the nodes with at least 1 child in a binary tree

- Prototype: `size_t binary_tree_nodes(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to count the nodes in
- A `NULL` pointer is not a node

</details>

<details>
<summary><strong>14. Balance factor</strong></summary>

Write a function that measures the balance factor of a binary tree

- Prototype: `int binary_tree_balance(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to measure the balance factor of
- If `tree` is `NULL`, return `0`

</details>

<details>
<summary><strong>15. Is full</strong></summary>

Write a function that checks if a binary tree is full

- Prototype: `int binary_tree_is_full(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to check
- If `tree` is `NULL`, your function must return `0`

</details>

<details>
<summary><strong>16. Is perfect</strong></summary>

Write a function that checks if a binary tree is perfect

- Prototype: `int binary_tree_is_perfect(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to check
- If `tree` is `NULL`, your function must return `0`

</details>

<details>
<summary><strong>17. Sibling</strong></summary>

Write a function that finds the sibling of a node

- Prototype: `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`
- Where `node` is a pointer to the node to find the sibling of
- Your function must return a pointer to the sibling node
- If `node` has no sibling, return `NULL`

</details>

<details>
<summary><strong>18. Uncle</strong></summary>

Write a function that finds the uncle of a node

- Prototype: `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`
- Where `node` is a pointer to the node to find the uncle of
- Your function must return a pointer to the uncle node
- If `node` has no uncle, return `NULL`

</details>

### Advanced Tasks

The project includes advanced tasks covering:
- Lowest common ancestor
- Level-order traversal
- Binary tree completeness check
- Tree rotations (left and right)
- Binary Search Tree operations (insert, search, remove)
- AVL Tree operations
- Max Binary Heap operations
- Time complexity analysis

For detailed specifications of all advanced tasks, please refer to the project curriculum.

## Authors

* **Rotimi Owolabi** - [GitHub](https://github.com/rohteemie)

---

**Note:** Test files (`*-main.c`) are provided as examples for testing your functions. You don't need to push them to your repository as the project will be evaluated using separate test files.
