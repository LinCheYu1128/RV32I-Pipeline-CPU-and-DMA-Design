lui x08, 0x00000008
addi x08, x08, 0x00000000
lui x19, 0x00000000
addi x19, x19, 0x00000064
lui x06, 0x00000000
addi x06, x06, 0x00000004
sw s0, 0(t1)
lui x06, 0x00000000
addi x06, x06, 0x00000008
sw s3, 0(t1)
lui x06, 0x00000000
addi x06, x06, 0x0000000c
lui x07, 0x00004040
addi x07, x07, 0x00000425
sw t2, 0(t1)
lui x06, 0x00000000
addi x06, x06, 0x00000000
lui x07, 0x00000000
addi x07, x07, 0x00000001
sw t2, 0(t1)
lui x06, 0x00000000
addi x06, x06, 0x00000014
lw t2, 0(t1)
beq t2, x0, wait_dma1
sw x0, 0(t1)
lui x3, 0x00000010
lui x3, 0x00000010
lui x3, 0x00000010
lui x3, 0x00000010
lui x3, 0x00000010
hcf
hcf
nop
nop
nop
nop
nop
