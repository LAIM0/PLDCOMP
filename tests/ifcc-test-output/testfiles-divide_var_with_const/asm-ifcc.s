.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	movl 	$4, %eax
	movl 	%eax, -8(%rbp)
	movl 	-8(%rbp), %eax
	movl 	%eax, -12(%rbp)
	movl 	$12, %eax
	movl 	%eax, -4(%rbp)
	movl 	-4(%rbp), %eax
	popq	%rbp
	ret