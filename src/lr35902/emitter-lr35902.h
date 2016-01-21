/* Copyright (c) 2013-2016 Jeffrey Pfau
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */
#ifndef EMITTER_LR35902_H
#define EMITTER_LR35902_H

#define DECLARE_INSTRUCTION_LR35902(EMITTER, NAME) \
	EMITTER ## NAME

#define DECLARE_LR35902_EMITTER_BLOCK(EMITTER) \
	DECLARE_INSTRUCTION_LR35902(EMITTER, NOP), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDBC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDBC_A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, INCBC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, INCB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, DECB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDB_), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RLCA_), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDISP), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ADDHL_BC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDA_BC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, DECBC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, INCC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, DECC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDC_), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RRCA_), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, STUB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDDE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDDE_A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, INCDE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, INCD), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, DECD), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDD_), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RLA_), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, JR), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ADDHL_DE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDA_DE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, DECDE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, INCE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, DECE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDE_), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RRA_), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, JRNZ), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDIHLA), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, INCHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, INCH), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, DECH), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDH_), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, STUB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, JRZ), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ADDHL_HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDA_IHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, DECHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, INCL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, DECL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDL_), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, CPL_), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, JRNC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDSP), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDDHLA), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, INCSP), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, INC_HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, DEC_HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDHL_), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SCF), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, JRC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ADDHL_SP), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDA_DHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, DECSP), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, INCA), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, DECA), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDA_), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, CCF), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDB_B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDB_C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDB_D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDB_E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDB_H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDB_L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDB_HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDB_A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDC_B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDC_C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDC_D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDC_E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDC_H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDC_L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDC_HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDC_A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDD_B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDD_C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDD_D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDD_E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDD_H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDD_L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDD_HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDD_A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDE_B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDE_C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDE_D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDE_E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDE_H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDE_L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDE_HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDE_A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDH_B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDH_C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDH_D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDH_E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDH_H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDH_L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDH_HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDH_A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDL_B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDL_C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDL_D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDL_E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDL_H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDL_L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDL_HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDL_A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDHL_B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDHL_C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDHL_D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDHL_E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDHL_H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDHL_L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, HALT), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDHL_A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDA_B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDA_C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDA_D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDA_E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDA_H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDA_L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDA_HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDA_A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ADDB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ADDC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ADDD), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ADDE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ADDH), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ADDL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ADDHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ADDA), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ADCB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ADCC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ADCD), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ADCE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ADCH), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ADCL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ADCHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ADCA), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SUBB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SUBC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SUBD), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SUBE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SUBH), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SUBL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SUBHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SUBA), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SBCB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SBCC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SBCD), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SBCE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SBCH), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SBCL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SBCHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SBCA), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ANDB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ANDC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ANDD), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ANDE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ANDH), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ANDL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ANDHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ANDA), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, XORB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, XORC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, XORD), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, XORE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, XORH), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, XORL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, XORHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, XORA), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ORB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ORC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ORD), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ORE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ORH), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ORL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ORHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ORA), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, CPB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, CPC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, CPD), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, CPE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, CPH), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, CPL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, CPHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, CPA), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RETNZ), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, POPBC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, JPNZ), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, JP), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, CALLNZ), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, PUSHBC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ADD), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RST00), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RETZ), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RET), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, JPZ), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, CB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, CALLZ), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, CALL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ADC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RST08), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RETNC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, POPDE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, JPNC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, STUB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, CALLNC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, PUSHDE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SUB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RST10), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RETC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RETI), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, JPC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, STUB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, CALLC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, STUB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SBC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RST18), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDIOA), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, POPHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDIOCA), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, STUB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, STUB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, PUSHHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, AND), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RST20), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, ADDSP), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, JPHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDIA), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, STUB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, STUB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, STUB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, XOR), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RST28), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDAIO), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, POPAF), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDAIOC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, DI), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, STUB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, PUSHAF), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, OR), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RST30), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDHL_SP), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDSP_HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, LDAI), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, EI), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, STUB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, STUB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, CP), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RST38)

#define DECLARE_LR35902_CB_EMITTER_BLOCK(EMITTER) \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RLCB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RLCC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RLCD), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RLCE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RLCH), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RLCL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RLCHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RLCA), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RRCB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RRCC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RRCD), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RRCE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RRCH), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RRCL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RRCHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RRCA), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RLB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RLC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RLD), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RLE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RLH), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RLL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RLHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RLA), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RRB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RRC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RRD), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RRE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RRH), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RRL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RRHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RRA), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SLAB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SLAC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SLAD), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SLAE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SLAH), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SLAL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SLAHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SLAA), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SRAB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SRAC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SRAD), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SRAE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SRAH), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SRAL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SRAHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SRAA), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SWAPB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SWAPC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SWAPD), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SWAPE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SWAPH), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SWAPL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SWAPHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SWAPA), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SRLB), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SRLC), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SRLD), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SRLE), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SRLH), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SRLL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SRLHL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SRLA), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT0B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT0C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT0D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT0E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT0H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT0L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT0HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT0A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT1B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT1C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT1D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT1E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT1H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT1L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT1HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT1A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT2B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT2C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT2D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT2E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT2H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT2L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT2HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT2A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT3B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT3C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT3D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT3E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT3H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT3L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT3HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT3A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT4B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT4C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT4D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT4E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT4H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT4L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT4HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT4A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT5B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT5C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT5D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT5E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT5H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT5L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT5HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT5A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT6B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT6C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT6D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT6E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT6H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT6L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT6HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT6A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT7B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT7C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT7D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT7E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT7H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT7L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT7HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, BIT7A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES0B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES0C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES0D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES0E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES0H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES0L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES0HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES0A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES1B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES1C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES1D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES1E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES1H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES1L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES1HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES1A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES2B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES2C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES2D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES2E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES2H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES2L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES2HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES2A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES3B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES3C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES3D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES3E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES3H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES3L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES3HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES3A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES4B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES4C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES4D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES4E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES4H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES4L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES4HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES4A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES5B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES5C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES5D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES5E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES5H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES5L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES5HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES5A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES6B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES6C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES6D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES6E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES6H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES6L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES6HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES6A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES7B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES7C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES7D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES7E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES7H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES7L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES7HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, RES7A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET0B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET0C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET0D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET0E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET0H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET0L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET0HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET0A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET1B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET1C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET1D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET1E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET1H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET1L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET1HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET1A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET2B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET2C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET2D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET2E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET2H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET2L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET2HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET2A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET3B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET3C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET3D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET3E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET3H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET3L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET3HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET3A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET4B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET4C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET4D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET4E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET4H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET4L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET4HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET4A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET5B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET5C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET5D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET5E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET5H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET5L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET5HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET5A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET6B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET6C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET6D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET6E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET6H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET6L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET6HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET6A), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET7B), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET7C), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET7D), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET7E), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET7H), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET7L), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET7HL), \
	DECLARE_INSTRUCTION_LR35902(EMITTER, SET7A)

#endif
