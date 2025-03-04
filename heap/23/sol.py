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
    lists1 = [
        list_to_linked_list([1,4,5]),
        list_to_linked_list([1,3,4]),
        list_to_linked_list([2,6])
    ]
    print("Input: lists = [[1,4,5],[1,3,4],[2,6]]")
    result1 = solution.mergeKLists(lists1)
    output1 = linked_list_to_list(result1)
    print(f"Output: {output1}")
    expected1 = [1,1,2,3,4,4,5,6]
    print(f"Expected: {expected1}")
    print(f"Test passed: {output1 == expected1}")
    
    # Example 2
    print("\nExample 2:")
    lists2 = []
    print("Input: lists = []")
    result2 = solution.mergeKLists(lists2)
    output2 = linked_list_to_list(result2)
    print(f"Output: {output2}")
    expected2 = []
    print(f"Test passed: {output2 == expected2}")
    
    # Example 3
    print("\nExample 3:")
    lists3 = [list_to_linked_list([])]
    print("Input: lists = [[]]")
    result3 = solution.mergeKLists(lists3)
    output3 = linked_list_to_list(result3)
    print(f"Output: {output3}")
    expected3 = []
    print(f"Test passed: {output3 == expected3}")
    
    print("\nAll test cases completed!")