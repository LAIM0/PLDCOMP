.globl main
 main: 
	pushq	%rbp
	movq	%rsp, %rbp
	movl	$0, -4(%rbp)
	sub	$1, -4(%rbp)
	movl	$0, %eax
	movl 	-4(%rbp), %eax
	popq	%rbp
	ret
