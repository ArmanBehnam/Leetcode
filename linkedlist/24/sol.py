from my import Solution, ListNode

        
# Helper function to create a linked list from array
def createLinkedList(arr):
    if not arr:
        return None
    
    head = ListNode(arr[0])
    current = head
    
    for val in arr[1:]:
        current.next = ListNode(val)
        current = current.next
    
    return head

# Helper function to convert linked list to array
def linkedListToArray(head):
    result = []
    current = head
    
    while current:
        result.append(current.val)
        current = current.next
    
    return result

if __name__ == "__main__":
    # Example 1: [1,2,3,4] -> [2,1,4,3]
    test1 = createLinkedList([1, 2, 3, 4])
    solution = Solution()
    result1 = solution.swapPairs(test1)
    print("Example 1:")
    print("Input: [1,2,3,4]")
    print(f"Output: {linkedListToArray(result1)}")
    print(f"Expected: [2,1,4,3]")
    
    # Example 2: [] -> []
    test2 = createLinkedList([])
    result2 = solution.swapPairs(test2)
    print("\nExample 2:")
    print("Input: []")
    print(f"Output: {linkedListToArray(result2)}")
    print(f"Expected: []")
    
    # Example 3: [1] -> [1]
    test3 = createLinkedList([1])
    result3 = solution.swapPairs(test3)
    print("\nExample 3:")
    print("Input: [1]")
    print(f"Output: {linkedListToArray(result3)}")
    print(f"Expected: [1]")
    
    # Example 4: [1,2,3] -> [2,1,3]
    test4 = createLinkedList([1, 2, 3])
    result4 = solution.swapPairs(test4)
    print("\nExample 4:")
    print("Input: [1,2,3]")
    print(f"Output: {linkedListToArray(result4)}")
    print(f"Expected: [2,1,3]")