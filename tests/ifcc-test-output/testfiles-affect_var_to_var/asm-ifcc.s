.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
.main:
	movl 	$42, %eax
	movl 	%eax, -16(%rbp)
	movl 	-16(%rbp), %eax
	movl 	%eax, -12(%rbp)
	movl 	-12(%rbp), %eax
	movl 	%eax, -8(%rbp)
	movl 	-8(%rbp), %eax
	movl 	%eax, -4(%rbp)
	movl 	-4(%rbp), %eax
	popq	%rbp
	ret
