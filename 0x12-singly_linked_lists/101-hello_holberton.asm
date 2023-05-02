	global main
	extern printf
main:
	move edi, format
	xor eax, eax
	call printf
	move eax, 0
	ret
format: db `Hello, Holberton\n`, 0
