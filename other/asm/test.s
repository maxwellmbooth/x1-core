	.option norvc
	.option norelax
	.text
	.globl _start
	.type _start, @function
	.align 2
_start:
	addi x1, x0, 13
go:	addi x1, x1, -1
	beq x1, x0, good
	jal x2, go
good:	addi x4, x4, 1
