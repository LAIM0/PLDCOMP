.globl main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	movl 	$2, %eax
	movl 	%eax, -12(%rbp)
	movl 	$3, %eax
	movl 	-12(%rbp), %edx
	imull 	%eax, %edx
	movl 	%edx, %eax
	movl 	%eax, -8(%rbp)
	movl 	$6, %eax
	movl 	-8(%rbp), %edx
	imull 	%eax, %edx
	movl 	%edx, %eax
	movl 	%eax, -4(%rbp)
	movl 	-4(%rbp), %eax
	popq	%rbp
	ret
