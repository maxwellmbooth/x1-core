	.option norvc
	.option norelax
	.text
	.global _start
	.type _start, @function
	.align 2
_start:
	addi x1, x0, 13
	addi x2, x0, 3
	addi x3, x0, 65
