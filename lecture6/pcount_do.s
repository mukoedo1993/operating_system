	.file	"pcount_do.c"
	.text
	.globl	pcount_do
	.type	pcount_do, @function
pcount_do:
.LFB0:
	.cfi_startproc
	endbr64
	movl	$0, %eax
.L2:
	movq	%rdi, %rdx
	andl	$1, %edx
	addq	%rdx, %rax
	shrq	%rdi
	jne	.L2
	ret
	.cfi_endproc
.LFE0:
	.size	pcount_do, .-pcount_do
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
