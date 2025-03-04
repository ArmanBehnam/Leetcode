class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution(object):
    def mergeKLists(self, lists):
        """
        :type lists: List[Optional[ListNode]]
        :rtype: Optional[ListNode]
        """
        # Handle edge cases
        if not lists:
            return None
        if len(lists) == 1:
            return lists[0]
        
        # Use a min heap to efficiently merge the lists
        import heapq
        
        # Initialize a dummy head for the result linked list
        dummy = ListNode(0)
        current = dummy
        
        # Create a heap to store values from each list
        # We'll store tuples of (node_value, list_index, node)
        # We need list_index as a tiebreaker when values are equal
        heap = []
        
        # Add the head of each non-empty list to the heap
        for i, head in enumerate(lists):
            if head:
                heapq.heappush(heap, (head.val, i, head))
        
        # Process nodes from the heap until it's empty
        while heap:
            # Pop the smallest node
            val, list_idx, node = heapq.heappop(heap)
            
            # Add this node to our result list
            current.next = node
            current = current.next
            
            # If this node has a next node, add it to the heap
            if node.next:
                heapq.heappush(heap, (node.next.val, list_idx, node.next))
        
        return dummy.next