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
static const char *ng0 = "/media/shared/co_file/p4/version1/MIPS-CPU/RF.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static const char *ng5 = "@%h: $%d <= %h";



static void Cont_35_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 3960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1528U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 4888);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 4776);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_36_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1688U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 4952);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 4792);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_38_2(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t45[8];
    char t70[8];
    char t71[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
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
    unsigned int t68;
    unsigned int t69;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;

LAB0:    t1 = (t0 + 4456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4808);
    *((int *)t2) = 1;
    t3 = (t0 + 4488);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t27 = (t9 ^ t10);
    t30 = (t8 | t27);
    t33 = *((unsigned int *)t4);
    t34 = *((unsigned int *)t5);
    t37 = (t33 | t34);
    t38 = (~(t37));
    t39 = (t30 & t38);
    if (t39 != 0)
        goto LAB19;

LAB16:    if (t37 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t13) = 1;

LAB19:    t12 = (t13 + 4);
    t40 = *((unsigned int *)t12);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB20;

LAB21:
LAB22:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(39, ng0);

LAB9:    xsi_set_current_line(40, ng0);
    xsi_set_current_line(40, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(40, ng0);

LAB13:    xsi_set_current_line(41, ng0);
    t12 = ((char*)((ng1)));
    t14 = (t0 + 3048);
    t17 = (t0 + 3048);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3048);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 2888);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2888);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB14:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB15;

LAB18:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(44, ng0);

LAB23:    xsi_set_current_line(45, ng0);
    t14 = (t0 + 1848U);
    t17 = *((char **)t14);
    t14 = ((char*)((ng1)));
    memset(t45, 0, 8);
    t18 = (t17 + 4);
    t19 = (t14 + 4);
    t46 = *((unsigned int *)t17);
    t47 = *((unsigned int *)t14);
    t48 = (t46 ^ t47);
    t49 = *((unsigned int *)t18);
    t50 = *((unsigned int *)t19);
    t51 = (t49 ^ t50);
    t52 = (t48 | t51);
    t53 = *((unsigned int *)t18);
    t54 = *((unsigned int *)t19);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB27;

LAB24:    if (t55 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t45) = 1;

LAB27:    memset(t16, 0, 8);
    t21 = (t45 + 4);
    t58 = *((unsigned int *)t21);
    t59 = (~(t58));
    t60 = *((unsigned int *)t45);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t21) != 0)
        goto LAB30;

LAB31:    t23 = (t16 + 4);
    t63 = *((unsigned int *)t16);
    t64 = *((unsigned int *)t23);
    t65 = (t63 || t64);
    if (t65 > 0)
        goto LAB32;

LAB33:    t66 = *((unsigned int *)t16);
    t67 = (~(t66));
    t68 = *((unsigned int *)t23);
    t69 = (t67 || t68);
    if (t69 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t23) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t16) > 0)
        goto LAB38;

LAB39:    memcpy(t15, t26, 8);

LAB40:    t25 = (t0 + 3048);
    t29 = (t0 + 3048);
    t72 = (t29 + 72U);
    t73 = *((char **)t72);
    t74 = (t0 + 3048);
    t75 = (t74 + 64U);
    t76 = *((char **)t75);
    t77 = (t0 + 1848U);
    t78 = *((char **)t77);
    xsi_vlog_generic_convert_array_indices(t70, t71, t73, t76, 2, 1, t78, 5, 2);
    t77 = (t70 + 4);
    t79 = *((unsigned int *)t77);
    t28 = (!(t79));
    t80 = (t71 + 4);
    t81 = *((unsigned int *)t80);
    t31 = (!(t81));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB41;

LAB42:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    t2 = (t0 + 2008U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng5, 4, t0, (char)118, t3, 32, (char)118, t4, 5, (char)118, t5, 32);
    goto LAB22;

LAB26:    t20 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB27;

LAB28:    *((unsigned int *)t16) = 1;
    goto LAB31;

LAB30:    t22 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB31;

LAB32:    t24 = ((char*)((ng1)));
    goto LAB33;

LAB34:    t25 = (t0 + 2008U);
    t26 = *((char **)t25);
    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t15, 32, t24, 32, t26, 32);
    goto LAB40;

LAB38:    memcpy(t15, t24, 8);
    goto LAB40;

LAB41:    t82 = *((unsigned int *)t70);
    t83 = *((unsigned int *)t71);
    t35 = (t82 - t83);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t25, t15, 0, *((unsigned int *)t71), t36, 0LL);
    goto LAB42;

}


extern void work_m_09832670232840899490_0621066737_init()
{
	static char *pe[] = {(void *)Cont_35_0,(void *)Cont_36_1,(void *)Always_38_2};
	xsi_register_didat("work_m_09832670232840899490_0621066737", "isim/mips_tb_isim_beh.exe.sim/work/m_09832670232840899490_0621066737.didat");
	xsi_register_executes(pe);
}
