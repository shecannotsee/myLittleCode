SECTION .data
msg	db	'Hello,brave new woridl!',0Ah

SECTION .text
global	_start

_start:
	mov	ebx,msg
	mov	eax,ebx

nextchar:
	cmp	byte [eax],0	;zero is end of string delimiter
	jz	finished	;if 0 then,jump to finished 
	inc	eax		;(address)eax++
	jmp	nextchar	;jum to nextchar

finished:
	sub	eax,ebx		;eax = eax-ebx(address)
	mov	edx,eax
	mov	ecx,msg

	mov	ebx,1
	mov	eax,4

	mov	ebx,0
	mov	eax,1
	int	80h
