.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	movl 	$10, %eax
	movl 	%eax, -12(%rbp)
	movl 	$2, %eax
	movl 	%eax, -8(%rbp)
	movl 	$16, %eax
	cltd
	idivl 	-8(%rbp)
	cltd
	idivl 	-12(%rbp)
	movl 	%eax, -4(%rbp)
	movl 	-4(%rbp), %eax
	popq	%rbp
	ret
