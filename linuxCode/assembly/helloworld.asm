SECTION .data
msg	db	'hello world',0Ah

SECTION .text
global _start

_start:
	mov	edx,13	;number of mag,include \n
	mov	ecx,msg	;move the memory adress of our message string to ecx
	mov	ebx,1	;write to the STDOUT file
	mov	eax,4	;SYS_WRITE
	int	80h

	mov	ebx,0	;return 0 status on exit -'No Errors'
	mov	eax,1	;SYS_EXIT
	int	80h
