.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	movl 	$3, %eax
	movl 	%eax, -24(%rbp)
	movl 	$2, %eax
	movl 	%eax, -20(%rbp)
	movl 	$7, %eax
	movl 	%eax, -16(%rbp)
	movl 	$2, %eax
	movl 	%eax, -12(%rbp)
	movl 	$8, %eax
	movl 	%eax, -8(%rbp)
	movl 	$5, %eax
	imull 	-8(%rbp), %eax
	imull 	-24(%rbp), %eax
	movl 	%eax, -4(%rbp)
	movl 	-4(%rbp), %eax
	popq	%rbp
	ret
