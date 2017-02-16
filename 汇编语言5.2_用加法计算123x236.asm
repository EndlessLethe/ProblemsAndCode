assume cs:code
code segment
	mov ax, 0
	mov cx, 236
L1:
	add ax, 123
	loop L1

	mov ax, 4c00h
	int 21h
code ends
end
