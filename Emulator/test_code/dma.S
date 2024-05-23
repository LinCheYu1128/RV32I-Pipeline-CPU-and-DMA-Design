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

li t1, 0x0
li t1, 0x0
li t1, 0x0
li t1, 0x0
li t1, 0x0

hcf