unsorted_array = [2,4,1,5,3]
n = len(unsorted_array)

print("Before sorting: ")
for element in unsorted_array:
    print(element, end=" ")

for i in range(n): # Iterate through each element in the list
    temp = i  # Assume the current element is the smallest
    for j in range(i+1,n):  # Iterate through the rest of the list
        if(unsorted_array[temp]>unsorted_array[j]):
            temp = j  # Update temp to index of the new smallest element
        else:
            continue
        
    # Swap the found smallest element with the element at position i
    temp_value = unsorted_array[i]
    unsorted_array[i] = unsorted_array[temp]
    unsorted_array[temp] = temp_value
print()
print("After sorting: ")
for element in unsorted_array:
    print(element, end=" ")
    