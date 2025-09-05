	.option norvc
	.option norelax
	.text
	.globl _start
	.type _start, @function
	.align 2
_start:
	addi x1, x0, 68
	sw x1, 0(x0)
	lw x2, 0(x0)
	addi x2, x2, 1
