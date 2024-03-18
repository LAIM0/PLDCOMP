.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	movl 	$8, %eax
	movl 	%eax, -20(%rbp)
	movl 	$8, %eax
	movl 	-20(%rbp), %edx
	movl 	%eax, -16(%rbp)
	movl 	%edx, %eax
	cltd
	idivl 	-16(%rbp)
	movl 	%edx, %eax
	movl 	%eax, -12(%rbp)
	movl 	$5, %eax
	movl 	-12(%rbp), %edx
	movl 	%eax, -8(%rbp)
	movl 	%edx, %eax
	cltd
	idivl 	-8(%rbp)
	movl 	%edx, %eax
	movl 	%eax, -4(%rbp)
	movl 	-4(%rbp), %eax
	popq	%rbp
	ret
