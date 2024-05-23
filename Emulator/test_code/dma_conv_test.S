.data
## input data size = 2x8x8
input_data:
.byte 0 1 2 3 4 5 6 7
.byte 0 1 2 3 4 5 6 7
.byte 0 1 2 3 4 5 6 7
.byte 0 1 2 3 4 5 6 7
.byte 0 1 2 3 4 5 6 7
.byte 0 1 2 3 4 5 6 7
.byte 0 1 2 3 4 5 6 7
.byte 0 1 2 3 4 5 6 7

.byte 0 1 2 3 4 5 6 7
.byte 0 1 2 3 4 5 6 7
.byte 0 1 2 3 4 5 6 7
.byte 0 1 2 3 4 5 6 7
.byte 0 1 2 3 4 5 6 7
.byte 0 1 2 3 4 5 6 7
.byte 0 1 2 3 4 5 6 7
.byte 0 1 2 3 4 5 6 7

## kernel size 2x3x3
kernel_data:
.byte 0 1 2
.byte 0 1 2
.byte 0 1 2

.byte 0 1 2
.byte 0 1 2
.byte 0 1 2

## output data size 1x5x5
output_data:
.byte 0 0 0 0 0 0
.byte 0 0 0 0 0 0
.byte 0 0 0 0 0 0
.byte 0 0 0 0 0 0
.byte 0 0 0 0 0 0
.byte 0 0 0 0 0 0

.text
######################
##                  ##
##      Step 0      ##
##                  ##
######################
la s0, input_data
# load LOCAL_MEM_BASE_ADDR = 0x64
li s3, 0x10000

## --------------------------------------------------------------
## copy input_data from global mem to local mem 
## --------------------------------------------------------------
# load DMA_REG_BASE_ADDR = 0x0

## 1. Program SOURCE_INFO reg
## t1 -> 0x04 (offset of SOURCE_INFO reg)
# load DMA_OFFSET_SOURCE_INFO = 0x4
li t1, 0x04
## store 0x8000 into mem[0x04]
sw s0, 0(t1)

## 2. Program DEST_INFO reg
## t1 -> 0x08 (offset of DEST_INFO reg)
# load DMA_OFFSET_DEST_INFO = 0x8
li t1, 0x08
## store 0x10000 into mem[0x08]
sw s3, 0(t1)

## 3. Program SIZE_CFG reg
## t1 -> 0x0c (offset of SIZE_CFG reg)
# load DMA_OFFSET_SIZE_CFG = 0xc
li t1, 0x0c
## store 0x04040425 into mem[0x0c]
li t2, 0x04040425
sw t2, 0(t1)

## 4. Enable DMA
li t1, 0x0
## store 0x01 into mem[0x00]
li t2, 0x01
sw t2, 0(t1)

## ... moving data ...
## wait DMA finish data movement
wait_dma1:
## t1 -> 0x14 (offset of DONE reg)
# load DMA_OFFSET_DONE = 0x14
li t1, 0x14
## load value of mem[0x14]
lw t2, 0(t1)
beq t2, x0, wait_dma1

## reset DONE reg in DMA
sw x0, 0(t1)

######################
##                  ##
##      Step 2      ##
##                  ##
######################

li sp,0x4
li a2,8
li a3,3
li a4,6
li s3, 0x8000
li s4, 0x10000
la a5, input_data
sub a5, a5, s3
add a5, a5, s4
la a6, kernel_data
sub a6, a6, s3
add a6, a6, s4
la a7, output_data
sub a7, a7, s3
add a7, a7, s4

## --------------------------------------------------------------
## run Conv2D
## --------------------------------------------------------------
addi sp,sp,-4
sw ra,0(sp)
jal ra, Conv2D
addi a5,a5,64
addi a6,a6,9
jal ra,Conv2D
lw ra,0(sp)
addi sp,sp,4
lw s6,0(a7)
lw s7,6(a7)
lw s8,12(a7)
lw s9,18(a7)
lw s10,24(a7)
lw s11,30(a7)

hcf

## --------------------------------------------------------------
## Conv2D
## --------------------------------------------------------------
Conv2D:
srli s0,a3,1
li t0,0
bge t0,a4,endLoop1
Loop1:
li t1,0
bge t1,a4,endLoop2
Loop2:
li t2,0
bge t2,a3,endLoop3
Loop3:
li t3,0
bge t3,a3,endLoop4
Loop4:
sub s1,t2,s0
add s1,s1,t0
addi s1,s1,1
sub s2,t3,s0
add s2,s2,t1
addi s2,s2,1

mul s3,s1,a2
add s3,s3,s2
add s3,s3,a5
lb s3,0(s3)

mul s4,t2,a3
add s4,s4,t3
add s4,s4,a6
lb s4,0(s4)

mul s3,s3,s4

mul s4,t0,a4
add s4,s4,t1
add s4,s4,a7
lb s5,0(s4)

add s5,s5,s3
sb s5,0(s4)

addi t3,t3,1
blt t3,a3,Loop4
endLoop4:
addi t2,t2,1
blt t2,a3,Loop3
endLoop3:
addi t1,t1,1
blt t1,a4,Loop2
endLoop2:
addi t0,t0,1
blt t0,a4,Loop1
endLoop1:
    ret
