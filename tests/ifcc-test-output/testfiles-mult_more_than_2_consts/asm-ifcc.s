.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	movl 	$6, %eax
	movl 	%eax, -12(%rbp)
	movl 	$3, %eax
	movl 	%eax, -8(%rbp)
	movl 	$2, %eax
	imull 	-8(%rbp), %eax
	imull 	-12(%rbp), %eax
	movl 	%eax, -4(%rbp)
	movl 	-4(%rbp), %eax
	popq	%rbp
	ret