.globl main
 main: 
	pushq	%rbp
	movq	%rsp, %rbp
	movl	$1, -4(%rbp)
	addl	$1, -4(%rbp)
	movl	$0, %eax
	movl 	-4(%rbp), %eax
	popq	%rbp
	ret
