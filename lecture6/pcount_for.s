	.file	"pcount_for.c"
	.text
	.globl	_Z10pcount_form
	.type	_Z10pcount_form, @function
_Z10pcount_form:
.LFB30:
	.cfi_startproc
	endbr64
	movl	$0, %edx
	movl	$0, %ecx
.L2:
	movq	%rdi, %rax
	shrq	%cl, %rax
	andl	$1, %eax
	addq	%rax, %rdx
	addq	$1, %rcx
	cmpq	$64, %rcx
	jne	.L2
	movq	%rdx, %rax
	ret
	.cfi_endproc
.LFE30:
	.size	_Z10pcount_form, .-_Z10pcount_form
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
