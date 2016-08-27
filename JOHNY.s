	.file	"JOHNY.C"
	.section	.rodata
.LC0:
	.string	"%d"
.LC1:
	.string	"%lld"
.LC2:
	.string	"%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	andl	$-16, %esp
	subl	$848, %esp
	.cfi_offset 3, -12
	leal	24(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$.LC0, (%esp)
	call	scanf
	movl	$0, 36(%esp)
	jmp	.L2
.L9:
	movl	$1, 44(%esp)
	leal	32(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$.LC0, (%esp)
	call	scanf
	movl	$0, 40(%esp)
	jmp	.L3
.L4:
	leal	48(%esp), %eax
	movl	40(%esp), %edx
	sall	$3, %edx
	addl	%edx, %eax
	movl	%eax, 4(%esp)
	movl	$.LC1, (%esp)
	call	scanf
	addl	$1, 40(%esp)
.L3:
	movl	32(%esp), %eax
	cmpl	%eax, 40(%esp)
	jl	.L4
	leal	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$.LC0, (%esp)
	call	scanf
	movl	$0, 40(%esp)
	jmp	.L5
.L8:
	movl	40(%esp), %eax
	movl	48(%esp,%eax,8), %ecx
	movl	52(%esp,%eax,8), %ebx
	movl	28(%esp), %eax
	subl	$1, %eax
	movl	52(%esp,%eax,8), %edx
	movl	48(%esp,%eax,8), %eax
	cmpl	%edx, %ebx
	jg	.L6
	cmpl	%edx, %ebx
	jl	.L11
	cmpl	%eax, %ecx
	ja	.L6
.L11:
	movl	28(%esp), %eax
	subl	$1, %eax
	cmpl	40(%esp), %eax
	je	.L6
	addl	$1, 44(%esp)
.L6:
	addl	$1, 40(%esp)
.L5:
	movl	32(%esp), %eax
	cmpl	%eax, 40(%esp)
	jl	.L8
	movl	44(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$.LC2, (%esp)
	call	printf
	addl	$1, 36(%esp)
.L2:
	movl	24(%esp), %eax
	cmpl	%eax, 36(%esp)
	jl	.L9
	movl	$0, %eax
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.2-19ubuntu1) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
