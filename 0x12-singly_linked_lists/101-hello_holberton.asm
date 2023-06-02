EXTERN printf
SECTION .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0
	SECTION .text
	global main
main:
	mov esi, msg ; fixes address
	mov edi, fmt ; load edi wf strg
	mov eax, 0
	call printf
	mov eax, 0 ; formats eax
	ret
