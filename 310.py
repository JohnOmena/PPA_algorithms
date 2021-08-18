def divide_conquer(str1, start, end):
	if start >= end:
		return [0,0]

	mid = (start + end) // 2
	print("meio: ", mid)

	X = divide_conquer(str1, start, mid)
	Y = divide_conquer(str1, mid + 1, start)

	max_ = str1[mid + 1]
	max_i = mid + 1

	for ii in range(mid+1, len(str1[(mid+1):]), end):
		print("1: preço ", ii, ": ", str1[ii])
		if str1[ii] > max_:
		  max_ = str1[ii]
		  max_i = ii

	min_ = str1[mid]
	min_i = mid

	for i in range(start, len(str1[:mid])):
		print("2: preço ", i, ": ", str1[i])
		if str1[i] < min_:
		  min_ = str1[i]
		  min_i = mid

	value = str1[max_i] - str1[min_i]
	Xvalue = str1[X[1]] - str1[X[0]]
	Yvalue = str1[Y[1]] - str1[Y[0]]

	if (Xvalue > Yvalue) and ( Xvalue > value):
		return X
	elif(Yvalue > Xvalue) and (Yvalue > value):
		return Y
	else:
		return [min_i, max_i]