	.text
	.file	"hello.ll"
	.globl	main                            # -- Begin function main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# %bb.0:
	pushq	%rax
	.cfi_def_cfa_offset 16
	movl	$.L.hello, %edi
	callq	puts@PLT
	xorl	%eax, %eax
	popq	%rcx
	.cfi_def_cfa_offset 8
	retq
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
	.cfi_endproc
                                        # -- End function
	.type	.L.hello,@object                # @.hello
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.hello:
	.asciz	"hello world\n"
	.size	.L.hello, 13

	.section	".note.GNU-stack","",@progbits
