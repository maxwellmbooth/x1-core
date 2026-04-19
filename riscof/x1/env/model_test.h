#ifndef _COMPLIANCE_MODEL_H
#define _COMPLIANCE_MODEL_H

#define RVMODEL_BOOT

#define sreg SREG
#define lreg LREG

#define RVMODEL_DATA_BEGIN \
    .pushsection .tohost,"aw",@progbits; \
    .align 8; .global tohost; tohost: .dword 0; \
    .align 8; .global fromhost; fromhost: .dword 0; \
    .popsection; \
    .align 4; .global begin_signature; begin_signature:

#define RVMODEL_DATA_END \
    .align 4; .global end_signature; end_signature:

#define RVMODEL_HALT \
    li t0, 1; \
    la t1, tohost; \
    sw t0, 0(t1); \
    1: j 1b;

#define RVMODEL_IO_INIT
#define RVMODEL_IO_WRITE_STR(_R, _STR)
#define RVMODEL_IO_CHECK()
#define RVMODEL_IO_ASSERT_GPR_EQ(_S, _R, _I)
#define RVMODEL_IO_ASSERT_SFPR_EQ(_F, _R, _I)
#define RVMODEL_IO_ASSERT_DFPR_EQ(_D, _R, _I)
#define RVMODEL_SET_MSW_INT
#define RVMODEL_CLEAR_MSW_INT
#define RVMODEL_CLEAR_MTIMER_INT
#define RVMODEL_CLEAR_MEXT_INT

#endif
