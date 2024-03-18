.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	movl 	$5, %eax
	movl 	%eax, -36(%rbp)
	movl 	$8, %eax
	movl 	-36(%rbp), %edx
	imull 	%eax, %edx
	movl 	%edx, %eax
	movl 	%eax, -32(%rbp)
	movl 	$2, %eax
	movl 	-32(%rbp), %edx
	movl 	%eax, -28(%rbp)
	movl 	%edx, %eax
	cltd
	idivl 	-28(%rbp)
	movl 	%eax, -24(%rbp)
	movl 	$7, %eax
	movl 	-24(%rbp), %edx
	movl 	%eax, -20(%rbp)
	movl 	%edx, %eax
	cltd
	idivl 	-20(%rbp)
	movl 	%edx, %eax
	movl 	%eax, -16(%rbp)
	movl 	$2, %eax
	movl 	-16(%rbp), %edx
	movl 	%eax, -12(%rbp)
	movl 	%edx, %eax
	cltd
	idivl 	-12(%rbp)
	movl 	%eax, -8(%rbp)
	movl 	$3, %eax
	movl 	-8(%rbp), %edx
	imull 	%eax, %edx
	movl 	%edx, %eax
	movl 	%eax, -4(%rbp)
	movl 	-4(%rbp), %eax
	popq	%rbp
	ret
