.section .text
.global sum_array

sum_array:
    
    xor %eax, %eax      # running sum
    xor %ecx, %ecx      # running counter

    cmp $0, %esi
    je return

    loop_sum:

    addl (%rdi, %rcx, 4), %eax
    inc %ecx
    cmp %ecx, %esi
    jne loop_sum
    
    return:
        ret

.section .note.GNU-stack,"",@progbits