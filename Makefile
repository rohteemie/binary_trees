# Makefile for Binary Trees project

CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
INCLUDES = -I include/
SRC_DIR = src
TEST_DIR = tests
BUILD_DIR = build

# Create build directory if it doesn't exist
$(shell mkdir -p $(BUILD_DIR))

# Example targets for each task
0-node: $(TEST_DIR)/0-main.c $(SRC_DIR)/0-binary_tree_node.c $(SRC_DIR)/binary_tree_print.c
	$(CC) $(CFLAGS) $(INCLUDES) $^ -o $(BUILD_DIR)/$@

1-left: $(TEST_DIR)/1-main.c $(SRC_DIR)/0-binary_tree_node.c $(SRC_DIR)/1-binary_tree_insert_left.c $(SRC_DIR)/binary_tree_print.c
	$(CC) $(CFLAGS) $(INCLUDES) $^ -o $(BUILD_DIR)/$@

2-right: $(TEST_DIR)/2-main.c $(SRC_DIR)/0-binary_tree_node.c $(SRC_DIR)/2-binary_tree_insert_right.c $(SRC_DIR)/binary_tree_print.c
	$(CC) $(CFLAGS) $(INCLUDES) $^ -o $(BUILD_DIR)/$@

3-del: $(TEST_DIR)/3-main.c $(SRC_DIR)/0-binary_tree_node.c $(SRC_DIR)/3-binary_tree_delete.c $(SRC_DIR)/binary_tree_print.c
	$(CC) $(CFLAGS) $(INCLUDES) $^ -o $(BUILD_DIR)/$@

4-leaf: $(TEST_DIR)/4-main.c $(SRC_DIR)/0-binary_tree_node.c $(SRC_DIR)/4-binary_tree_is_leaf.c $(SRC_DIR)/binary_tree_print.c
	$(CC) $(CFLAGS) $(INCLUDES) $^ -o $(BUILD_DIR)/$@

5-root: $(TEST_DIR)/5-main.c $(SRC_DIR)/0-binary_tree_node.c $(SRC_DIR)/5-binary_tree_is_root.c $(SRC_DIR)/binary_tree_print.c
	$(CC) $(CFLAGS) $(INCLUDES) $^ -o $(BUILD_DIR)/$@

clean:
	rm -rf $(BUILD_DIR)

.PHONY: clean
