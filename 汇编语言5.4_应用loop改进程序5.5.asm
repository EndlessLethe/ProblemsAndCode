assume cs:code
code segment
	nor dx, dx
	mov ax, 0ffffh
	mov ds, ax
	mov ah, 0
	mov cx, 0ch
L1:
	mov al, ds:[cs-1]
	add dx, ax
	loop L1

	mov ax, 4c00h
	int 21h
code ends
end
