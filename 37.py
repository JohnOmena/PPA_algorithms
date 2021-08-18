def tower_of_hanoi(number, source, aux_1, aux_2, destiny):
	if (number == 0):
		return 0

	if (number == 1):
		print("Deslocando disco", number, "de", source, "para", destiny)
		return 0

	tower_of_hanoi(number - 2, source, aux_2, destiny, aux_1)

	print("deslocando disco", number-1, "de", source, "para", aux_2)
    
	print("deslocando disco", number, "de", source, "para", destiny)
    
	print("deslocando disco", number-1, "de", aux_2, "para", destiny)

	tower_of_hanoi(number - 2, aux_1, aux_2, source, destiny)

	number = 3
	tower_of_hanoi(number, 'X', 'Y', 'W', 'Z')