def max_point(strA, left, right):
	if right < left:
		return -1

	mid = (left + right) // 2

	if strA[mid] > strA[mid -1] and strA[mid] > strA[mid + 1]:
		return strA[mid]
	
	elif strA[mid] > strA[mid -1] and strA[mid] < strA[mid + 1]:
		return max_point(strA, mid, right)

	elif strA[mid] < strA[mid -1] and strA[mid] > strA[mid + 1]:
		return max_point(strA, left, mid)

strA = [ 13, 31, 10, 15, 9, 11]
print(max_point(strA, 0, len(strA) - 1))
strA = [ 6, 14, 21, 7, 17]
print(max_point(strA, 0, len(strA) - 1))
strA = [ 11, 66, 41, 21 ]
print(max_point(strA, 0, len(strA) - 1))