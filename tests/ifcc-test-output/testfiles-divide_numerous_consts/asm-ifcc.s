.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
.main:
	movl 	$16, %eax
	movl 	%eax, -20(%rbp)
	movl 	$2, %eax
	movl 	%eax, -16(%rbp)
	movl 	-20(%rbp), %eax
	cltd
	idivl 	-16(%rbp)
	movl 	%eax, -12(%rbp)
	movl 	$10, %eax
	movl 	%eax, -8(%rbp)
	movl 	-12(%rbp), %eax
	cltd
	idivl 	-8(%rbp)
	movl 	%eax, -4(%rbp)
	movl 	-4(%rbp), %eax
	popq	%rbp
	ret
