	.option norvc
	.option norelax
	.text
	.global _start
	.type _start, @function
	.align 2
_start:
	addi x1, x0, 13
	addi x2, x0, 3
	addi x3, x0, 60
	addi x4, x0, 0
_back:
	addi x4, x4, 6
	beq x4, x3, _end
	jal x5, _back
_end:
	addi x6, x0, 1
