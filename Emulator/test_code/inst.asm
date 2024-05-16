lui x31, 0x00000008
addi x31, x31, 0x000000be
lw t0, 0(t6)
lui x31, 0x00000008
addi x31, x31, 0x000000de
lw t1, 0(t6)
add t1, t1, t0
sw s0, 0(t1)
lui x31, 0x00000008
addi x31, x31, 0x000000e2
lw t1, 0(t6)
add t1, t1, t0
sw s3, 0(t1)
lui x31, 0x00000008
addi x31, x31, 0x000000e6
lw t1, 0(t6)
add t1, t1, t0
lui x07, 0x00004040
addi x07, x07, 0x00000404
sw t2, 0(t1)
lui x06, 0x00000000
addi x06, x06, 0x00000000
add t1, t1, t0
lui x07, 0x00000000
addi x07, x07, 0x00000001
sw t2, 0(t1)
lui x31, 0x00000008
addi x31, x31, 0x000000ea
lw t1, 0(t6)
add t1, t1, t0
lw t2, 0(t1)
beq t2, x0, wait_dma1
sw x0, 0(t1)
hcf
hcf
nop
nop
nop
nop
nop
