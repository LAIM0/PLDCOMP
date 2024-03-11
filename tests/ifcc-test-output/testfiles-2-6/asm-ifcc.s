.globl main
 main: 
	pushq	%rbp
	movq	%rsp, %rbp
	movl	$2, -12(%rbp)
	movl	$3, -8(%rbp)
	movl	$0, -4(%rbp)
	movl 	-4(%rbp), %eax
	popq	%rbp
	ret
