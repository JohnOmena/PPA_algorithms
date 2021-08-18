def menor_i_esimo(strA, strB, i):
	
    if len(strA) == 0:
		return strB[i]
	elif len(strB) == 0:
		return StrA[i]
    
    mid_strB = len(strB) // 2
	mid_strA = len(strA) // 2

	if mid_srtA + mid_strB < i:
		if st1[mid_strA] > st2[mid_strB]:
			return menor_i_esimo(strA, strB[mid_strB+1:], i - mid_strB - 1)
		else:
			return menor_i_esimo(strA[mid_strA +1:], strB, i - mid_strA - 1)
	else:
		if st1[mid_strA] > st2[mid_strB]:
			return menor_i_esimo(strA[:mid_strA], strB, i)
		else:
			return menor_i_esimo(strA, strB[:mid_strB], i)