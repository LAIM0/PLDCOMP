.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	movl 	$-1, %eax
	movl 	%eax, -4(%rbp)
	movl 	-4(%rbp), %eax
	movl 	%eax, -4(%rbp)
	movl 	-4(%rbp), %eax
	popq	%rbp
	ret