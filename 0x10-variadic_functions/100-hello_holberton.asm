section .rodata
msg:	    db 'Hello, hoLberton', 10
msglen:	 equ $-msg

	section .text
main:
	        mov rdi, 1
	        mov rsi, msg
	        mov rdx, msglen
	        mov rax, 1
	        syscall
