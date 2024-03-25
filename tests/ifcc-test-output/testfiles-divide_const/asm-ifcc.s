.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
.main:
	movl 	$8, %eax
	movl 	%eax, -12(%rbp)
	movl 	$2, %eax
	movl 	%eax, -8(%rbp)
	movl 	-12(%rbp), %eax
	cltd
	idivl 	-8(%rbp)
	movl 	%eax, -4(%rbp)
	movl 	-4(%rbp), %eax
	popq	%rbp
	ret
