/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/media/shared/co_file/p4/version1/MIPS-CPU/EXT.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {65535U, 0U};
static int ng4[] = {0, 0};



static void Cont_26_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t40[8];
    char t41[8];
    char t44[8];
    char t53[8];
    char t80[8];
    char t87[8];
    char t88[8];
    char t91[8];
    char t100[8];
    char t127[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t43;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t89;
    char *t90;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    char *t139;
    char *t140;

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t135 = (t0 + 2920);
    t136 = (t135 + 56U);
    t137 = *((char **)t136);
    t138 = (t137 + 56U);
    t139 = *((char **)t138);
    memcpy(t139, t3, 8);
    xsi_driver_vfirst_trans(t135, 0, 31);
    t140 = (t0 + 2840);
    *((int *)t140) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 1048U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng1)));
    xsi_vlogtype_concat(t33, 32, 32, 2U, t34, 16, t35, 16);
    goto LAB13;

LAB14:    t42 = (t0 + 1048U);
    t43 = *((char **)t42);
    memset(t44, 0, 8);
    t42 = (t44 + 4);
    t45 = (t43 + 4);
    t46 = *((unsigned int *)t43);
    t47 = (t46 >> 15);
    t48 = (t47 & 1);
    *((unsigned int *)t44) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 >> 15);
    t51 = (t50 & 1);
    *((unsigned int *)t42) = t51;
    t52 = ((char*)((ng2)));
    memset(t53, 0, 8);
    t54 = (t44 + 4);
    t55 = (t52 + 4);
    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t52);
    t58 = (t56 ^ t57);
    t59 = *((unsigned int *)t54);
    t60 = *((unsigned int *)t55);
    t61 = (t59 ^ t60);
    t62 = (t58 | t61);
    t63 = *((unsigned int *)t54);
    t64 = *((unsigned int *)t55);
    t65 = (t63 | t64);
    t66 = (~(t65));
    t67 = (t62 & t66);
    if (t67 != 0)
        goto LAB24;

LAB21:    if (t65 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t53) = 1;

LAB24:    memset(t41, 0, 8);
    t69 = (t53 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t53);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t69) != 0)
        goto LAB27;

LAB28:    t76 = (t41 + 4);
    t77 = *((unsigned int *)t41);
    t78 = *((unsigned int *)t76);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB29;

LAB30:    t83 = *((unsigned int *)t41);
    t84 = (~(t83));
    t85 = *((unsigned int *)t76);
    t86 = (t84 || t85);
    if (t86 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t76) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t41) > 0)
        goto LAB35;

LAB36:    memcpy(t40, t87, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB23:    t68 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t41) = 1;
    goto LAB28;

LAB27:    t75 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB28;

LAB29:    t81 = (t0 + 1048U);
    t82 = *((char **)t81);
    t81 = ((char*)((ng3)));
    xsi_vlogtype_concat(t80, 32, 32, 2U, t81, 16, t82, 16);
    goto LAB30;

LAB31:    t89 = (t0 + 1048U);
    t90 = *((char **)t89);
    memset(t91, 0, 8);
    t89 = (t91 + 4);
    t92 = (t90 + 4);
    t93 = *((unsigned int *)t90);
    t94 = (t93 >> 15);
    t95 = (t94 & 1);
    *((unsigned int *)t91) = t95;
    t96 = *((unsigned int *)t92);
    t97 = (t96 >> 15);
    t98 = (t97 & 1);
    *((unsigned int *)t89) = t98;
    t99 = ((char*)((ng1)));
    memset(t100, 0, 8);
    t101 = (t91 + 4);
    t102 = (t99 + 4);
    t103 = *((unsigned int *)t91);
    t104 = *((unsigned int *)t99);
    t105 = (t103 ^ t104);
    t106 = *((unsigned int *)t101);
    t107 = *((unsigned int *)t102);
    t108 = (t106 ^ t107);
    t109 = (t105 | t108);
    t110 = *((unsigned int *)t101);
    t111 = *((unsigned int *)t102);
    t112 = (t110 | t111);
    t113 = (~(t112));
    t114 = (t109 & t113);
    if (t114 != 0)
        goto LAB41;

LAB38:    if (t112 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t100) = 1;

LAB41:    memset(t88, 0, 8);
    t116 = (t100 + 4);
    t117 = *((unsigned int *)t116);
    t118 = (~(t117));
    t119 = *((unsigned int *)t100);
    t120 = (t119 & t118);
    t121 = (t120 & 1U);
    if (t121 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t116) != 0)
        goto LAB44;

LAB45:    t123 = (t88 + 4);
    t124 = *((unsigned int *)t88);
    t125 = *((unsigned int *)t123);
    t126 = (t124 || t125);
    if (t126 > 0)
        goto LAB46;

LAB47:    t130 = *((unsigned int *)t88);
    t131 = (~(t130));
    t132 = *((unsigned int *)t123);
    t133 = (t131 || t132);
    if (t133 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t123) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t88) > 0)
        goto LAB52;

LAB53:    memcpy(t87, t134, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t40, 32, t80, 32, t87, 32);
    goto LAB37;

LAB35:    memcpy(t40, t80, 8);
    goto LAB37;

LAB40:    t115 = (t100 + 4);
    *((unsigned int *)t100) = 1;
    *((unsigned int *)t115) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t88) = 1;
    goto LAB45;

LAB44:    t122 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t122) = 1;
    goto LAB45;

LAB46:    t128 = (t0 + 1048U);
    t129 = *((char **)t128);
    t128 = ((char*)((ng1)));
    xsi_vlogtype_concat(t127, 32, 32, 2U, t128, 16, t129, 16);
    goto LAB47;

LAB48:    t134 = ((char*)((ng4)));
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t87, 32, t127, 32, t134, 32);
    goto LAB54;

LAB52:    memcpy(t87, t127, 8);
    goto LAB54;

}


extern void work_m_08358127307008688904_1785967555_init()
{
	static char *pe[] = {(void *)Cont_26_0};
	xsi_register_didat("work_m_08358127307008688904_1785967555", "isim/mips_tb_isim_beh.exe.sim/work/m_08358127307008688904_1785967555.didat");
	xsi_register_executes(pe);
}
