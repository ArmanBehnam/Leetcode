from my import Solution, ListNode

# Helper functions for testing
def create_linked_list(arr):
    if not arr:
        return None
    
    head = ListNode(arr[0])
    current = head
    
    for val in arr[1:]:
        current.next = ListNode(val)
        current = current.next
    
    return head

def linked_list_to_array(head):
    result = []
    current = head
    
    while current:
        result.append(current.val)
        current = current.next
    
    return result

# Test cases
if __name__ == "__main__":
    solution = Solution()
    
    # Example 1: [1,2,3,4,5], k = 2 -> [2,1,4,3,5]
    test1 = create_linked_list([1, 2, 3, 4, 5])
    result1 = solution.reverseKGroup(test1, 2)
    print("Example 1:")
    print("Input: [1,2,3,4,5], k = 2")
    print(f"Output: {linked_list_to_array(result1)}")
    print(f"Expected: [2,1,4,3,5]")
    
    # Example 2: [1,2,3,4,5], k = 3 -> [3,2,1,4,5]
    test2 = create_linked_list([1, 2, 3, 4, 5])
    result2 = solution.reverseKGroup(test2, 3)
    print("\nExample 2:")
    print("Input: [1,2,3,4,5], k = 3")
    print(f"Output: {linked_list_to_array(result2)}")
    print(f"Expected: [3,2,1,4,5]")
    
    # Additional test: [1,2,3,4,5,6], k = 2 -> [2,1,4,3,6,5]
    test3 = create_linked_list([1, 2, 3, 4, 5, 6])
    result3 = solution.reverseKGroup(test3, 2)
    print("\nAdditional test:")
    print("Input: [1,2,3,4,5,6], k = 2")
    print(f"Output: {linked_list_to_array(result3)}")
    print(f"Expected: [2,1,4,3,6,5]")
    
    # Edge case: [1,2,3,4,5], k = 1 -> [1,2,3,4,5]
    test4 = create_linked_list([1, 2, 3, 4, 5])
    result4 = solution.reverseKGroup(test4, 1)
    print("\nEdge case 1:")
    print("Input: [1,2,3,4,5], k = 1")
    print(f"Output: {linked_list_to_array(result4)}")
    print(f"Expected: [1,2,3,4,5]")
    
    # Edge case: [1], k = 1 -> [1]
    test5 = create_linked_list([1])
    result5 = solution.reverseKGroup(test5, 1)
    print("\nEdge case 2:")
    print("Input: [1], k = 1")
    print(f"Output: {linked_list_to_array(result5)}")
    print(f"Expected: [1]")