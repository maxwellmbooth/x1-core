	.option norvc
	.option norelax
	.text
	.globl _start
	.type _start, @function
	.align 2
_start:
	addi x1, x0, 68
	sw x1, 0(x0)
