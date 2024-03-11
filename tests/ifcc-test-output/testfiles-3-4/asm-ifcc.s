.globl main
 main: 
	pushq	%rbp
	movq	%rsp, %rbp
	movl	$2, -8(%rbp)
	movl	$4, -4(%rbp)
	movl 	-4(%rbp), %eax
	popq	%rbp
	ret
