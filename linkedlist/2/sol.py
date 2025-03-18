from my import Solution, ListNode

def list_to_linked_list(lst):
    """Convert a Python list to a linked list"""
    if not lst:
        return None
    
    dummy = ListNode(0)
    current = dummy
    
    for val in lst:
        current.next = ListNode(val)
        current = current.next
    
    return dummy.next

def linked_list_to_list(head):
    """Convert a linked list to a Python list"""
    result = []
    
    while head:
        result.append(head.val)
        head = head.next
    
    return result

if __name__ == "__main__":
    solution = Solution()
    
    # Example 1
    print("Example 1:")
    l1 = list_to_linked_list([2, 4, 3])
    l2 = list_to_linked_list([5, 6, 4])
    print("Input: l1 = [2,4,3], l2 = [5,6,4]")
    result1 = solution.addTwoNumbers(l1, l2)
    output1 = linked_list_to_list(result1)
    print(f"Output: {output1}")
    expected1 = [7, 0, 8]
    print(f"Expected: {expected1}")
    print(f"Test passed: {output1 == expected1}")
    
    # Example 2
    print("\nExample 2:")
    l1 = list_to_linked_list([0])
    l2 = list_to_linked_list([0])
    print("Input: l1 = [0], l2 = [0]")
    result2 = solution.addTwoNumbers(l1, l2)
    output2 = linked_list_to_list(result2)
    print(f"Output: {output2}")
    expected2 = [0]
    print(f"Test passed: {output2 == expected2}")
    
    # Example 3
    print("\nExample 3:")
    l1 = list_to_linked_list([9, 9, 9, 9, 9, 9, 9])
    l2 = list_to_linked_list([9, 9, 9, 9])
    print("Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]")
    result3 = solution.addTwoNumbers(l1, l2)
    output3 = linked_list_to_list(result3)
    print(f"Output: {output3}")
    expected3 = [8, 9, 9, 9, 0, 0, 0, 1]
    print(f"Test passed: {output3 == expected3}")
    
    print("\nAll test cases completed!")