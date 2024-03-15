.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	movl 	$20, %eax
	movl 	%eax, -12(%rbp)
	movl 	$6, %eax
	movl 	%eax, -8(%rbp)
	movl 	-8(%rbp), %eax
	movl 	%eax, -16(%rbp)
	movl 	-12(%rbp), %eax
	cltd
	idivl 	-16(%rbp)
	movl 	%edx, %eax
	movl 	%eax, -4(%rbp)
	movl 	-4(%rbp), %eax
	popq	%rbp
	ret
