.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	movl 	$3, %eax
	movl 	%eax, -8(%rbp)
	movl 	$2, %eax
	addl	-8(%rbp), %eax
	movl 	%eax, -4(%rbp)
	movl 	-4(%rbp), %eax
	popq	%rbp
	ret
