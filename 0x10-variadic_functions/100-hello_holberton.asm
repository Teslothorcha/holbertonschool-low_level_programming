	section .data
	    msg db "hello, world!", 0x0a ; 0x0a = \n
	    .size equ $ - msg

	section .text
	    global start
start:
	        mov rax, 0x2000004
	        mov rdi, 1
	        mov rsi, msg
	        mov rdx, msg.size
	        syscall

	        mov eax, 0x2000001
	        mov rdi, 0
