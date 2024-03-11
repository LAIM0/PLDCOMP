.globl main
 main: 
	pushq	%rbp
	movq	%rsp, %rbp
	movl	$20, -12(%rbp)
	movl	$5, -8(%rbp)
	movl	$0, -4(%rbp)
	movl 	-4(%rbp), %eax
	popq	%rbp
	ret
