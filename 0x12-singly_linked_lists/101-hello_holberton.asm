section .data
	message db "Hello, Holberton", 0
	format db "%s", 10, 0

section .text
	global main

	extern printf

main:
	push    rbp
	mov     rdi, format
	mov     rsi, message
	xor     rax, rax
	call    printf
	pop     rbp

	mov     rax, 0
	ret
