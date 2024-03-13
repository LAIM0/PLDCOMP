.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	movl 	$2, -12(%rbp)
	movl 	$4, -8(%rbp)
	movl 	-8(%rbp), %edx
	movl 	-12(%rbp), %eax
	addl	%eax, %edx
	movl 	%edx, -4(%rbp)
	movl 	-4(%rbp), %eax
	popq	%rbp
	ret
