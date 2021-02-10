	.file	"switch_.c"
	.text
	.globl	_Z7switch_l
	.type	_Z7switch_l, @function
_Z7switch_l:
.LFB0:
	.cfi_startproc
	endbr64
	movq	%rdi, %rax
	testq	%rdi, %rdi
	je	.L2
	js	.L3
	leaq	-1(%rdi), %rdx
	cmpq	$2, %rdx
	ja	.L3
	leaq	(%rdi,%rdi,2), %rax
.L3:
	ret
.L2:
	addq	%rax, %rax
	ret
	.cfi_endproc
.LFE0:
	.size	_Z7switch_l, .-_Z7switch_l
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
