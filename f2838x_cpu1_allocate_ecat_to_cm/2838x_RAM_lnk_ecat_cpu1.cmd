MEMORY
{
   /* BEGIN is used for the "boot to SARAM" bootloader mode   */
   BEGIN            : origin = 0x000000, length = 0x000002
   BOOT_RSVD        : origin = 0x000002, length = 0x0001AE     /* Part of M0, BOOT rom will use this for stack */
   RAMM0            : origin = 0x0001B0, length = 0x000250
   RAMM1            : origin = 0x000400, length = 0x000400     /* on-chip RAM block M1 */
   RAMD0            : origin = 0x00C000, length = 0x000800
   RAMD1            : origin = 0x00C800, length = 0x000800
   RAMLS0_to_LS7    : origin = 0x008000, length = 0x004000
/*   RAMLS0           : origin = 0x008000, length = 0x000800 */
/*   RAMLS1           : origin = 0x008800, length = 0x000800 */
/*   RAMLS2           : origin = 0x009000, length = 0x000800 */
/*   RAMLS3           : origin = 0x009800, length = 0x000800 */
/*   RAMLS4           : origin = 0x00A000, length = 0x000800 */
/*   RAMLS5           : origin = 0x00A800, length = 0x000800 */
/*   RAMLS6           : origin = 0x00B000, length = 0x000800 */
/*   RAMLS7           : origin = 0x00B800, length = 0x000800 */
   RAMGS0           : origin = 0x00D000, length = 0x001000
   RAMGS1           : origin = 0x00E000, length = 0x001000
   RAMGS2           : origin = 0x00F000, length = 0x001000
   RAMGS3           : origin = 0x010000, length = 0x001000
   RAMGS4           : origin = 0x011000, length = 0x001000
   RAMGS5           : origin = 0x012000, length = 0x001000
   RAMGS6           : origin = 0x013000, length = 0x001000
   RAMGS7           : origin = 0x014000, length = 0x001000
   RAMGS8           : origin = 0x015000, length = 0x001000
   RAMGS9           : origin = 0x016000, length = 0x001000
   RAMGS10          : origin = 0x017000, length = 0x001000
   RAMGS11          : origin = 0x018000, length = 0x001000
   RAMGS12          : origin = 0x019000, length = 0x001000
   RAMGS13          : origin = 0x01A000, length = 0x001000
   RAMGS14          : origin = 0x01B000, length = 0x001000
   RAMGS15          : origin = 0x01C000, length = 0x001000

   /* Flash sectors */
   FLASH0           : origin = 0x080000, length = 0x002000  /* on-chip Flash */
   FLASH1           : origin = 0x082000, length = 0x002000  /* on-chip Flash */
   FLASH2           : origin = 0x084000, length = 0x002000  /* on-chip Flash */
   FLASH3           : origin = 0x086000, length = 0x002000  /* on-chip Flash */
   FLASH4           : origin = 0x088000, length = 0x008000  /* on-chip Flash */
   FLASH5           : origin = 0x090000, length = 0x008000  /* on-chip Flash */
   FLASH6           : origin = 0x098000, length = 0x008000  /* on-chip Flash */
   FLASH7           : origin = 0x0A0000, length = 0x008000  /* on-chip Flash */
   FLASH8           : origin = 0x0A8000, length = 0x008000  /* on-chip Flash */
   FLASH9           : origin = 0x0B0000, length = 0x008000  /* on-chip Flash */
   FLASH10          : origin = 0x0B8000, length = 0x002000  /* on-chip Flash */
   FLASH11          : origin = 0x0BA000, length = 0x002000  /* on-chip Flash */
   FLASH12          : origin = 0x0BC000, length = 0x002000  /* on-chip Flash */
   FLASH13          : origin = 0x0BE000, length = 0x002000  /* on-chip Flash */
   CPU1TOCPU2RAM    : origin = 0x03A000, length = 0x000800
   CPU2TOCPU1RAM    : origin = 0x03B000, length = 0x000800

   CPUTOCMRAM       : origin = 0x039000, length = 0x000200
   CMTOCPURAM       : origin = 0x038000, length = 0x000200

   CPUTOCMRAM_ECAT  : origin = 0x039200, length = 0x000200
   CMTOCPURAM_ECAT  : origin = 0x038200, length = 0x000200

   CANA_MSG_RAM     : origin = 0x049000, length = 0x000800
   CANB_MSG_RAM     : origin = 0x04B000, length = 0x000800
   RESET            : origin = 0x3FFFC0, length = 0x000002
}


SECTIONS
{
   codestart        : > BEGIN
   .text            : >> RAMD0 | RAMD1 | RAMLS0_to_LS7
   .cinit           : > RAMM0
   .switch          : > RAMM0
   .reset           : > RESET, TYPE = DSECT /* not used, */

   .stack           : > RAMGS0
#if defined(__TI_EABI__)
   .bss             : > RAMLS0_to_LS7
   .bss:output      : > RAMLS0_to_LS7
   .init_array      : > RAMM0
   .const           : > RAMGS0
   .data            : > RAMD0
   .sysmem          : > RAMD1
#else
   .pinit           : > RAMM0
   .ebss            : > RAMLS0_to_LS7
   .econst          : > RAMLS0_to_LS7
   .esysmem         : > RAMLS0_to_LS7
#endif

   ramgs0 : > RAMGS0, type=NOINIT
   ramgs1 : > RAMGS1, type=NOINIT

   MSGRAM_CPU1_TO_CPU2 > CPU1TOCPU2RAM, type=NOINIT
   MSGRAM_CPU2_TO_CPU1 > CPU2TOCPU1RAM, type=NOINIT

   MSGRAM_CPU_TO_CM   > CPUTOCMRAM, type=NOINIT
   MSGRAM_CM_TO_CPU   > CMTOCPURAM, type=NOINIT

   MSGRAM_CPU_TO_CM_ECAT > CPUTOCMRAM_ECAT, type=NOINIT
   MSGRAM_CM_TO_CPU_ECAT > CMTOCPURAM_ECAT, type=NOINIT

   /* The following section definition are for SDFM examples */
   Filter_RegsFile  : > RAMGS0
   Filter1_RegsFile : > RAMGS1, fill=0x1111
   Filter2_RegsFile : > RAMGS2, fill=0x2222
   Filter3_RegsFile : > RAMGS3, fill=0x3333
   Filter4_RegsFile : > RAMGS4, fill=0x4444
   Difference_RegsFile : >RAMGS5, fill=0x3333

    .TI.ramfunc : {} > RAMM0

}

/*
//===========================================================================
// End of file.
//===========================================================================
*/
