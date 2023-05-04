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
static const char *ng0 = "/media/shared/p1/6_BlockChecker/BlockChecker/BlockChecker.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {0U, 0U, 0U, 0U};
static int ng5[] = {32, 0};
static unsigned int ng6[] = {4294967295U, 0U};
static unsigned int ng7[] = {4294967294U, 0U};
static int ng8[] = {6, 0};
static int ng9[] = {65, 0};
static int ng10[] = {90, 0};
static int ng11[] = {97, 0};
static int ng12[] = {1701276014, 0, 98, 0};
static int ng13[] = {6647396, 0, 0, 0};



static void Cont_39_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 3160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2248);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t41 = (t0 + 3824);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 1U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 0, 0);
    t54 = (t0 + 3728);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng2)));
    goto LAB13;

LAB14:    t40 = ((char*)((ng3)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void Always_41_1(char *t0)
{
    char t13[8];
    char t30[16];
    char t31[8];
    char t32[8];
    char t33[8];
    char t34[8];
    char t40[8];
    char t44[8];
    char t48[8];
    char t93[8];
    char t95[8];
    char t102[16];
    char t106[16];
    char t122[8];
    char t138[8];
    char t154[8];
    char t162[8];
    char t204[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    unsigned int t46;
    char *t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    char *t94;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t103;
    char *t104;
    char *t105;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    int t186;
    int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;
    char *t201;
    char *t202;
    char *t203;
    char *t205;

LAB0:    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3744);
    *((int *)t2) = 1;
    t3 = (t0 + 3440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
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

LAB7:    xsi_set_current_line(47, ng0);

LAB10:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB14;

LAB11:    if (t18 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;

LAB14:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(54, ng0);

LAB26:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t13, 0, 8);
    xsi_vlog_signed_leq(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB27;

LAB28:
LAB29:
LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(42, ng0);

LAB9:    xsi_set_current_line(43, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 56, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB13:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(48, ng0);

LAB18:    xsi_set_current_line(49, ng0);
    t26 = ((char*)((ng3)));
    t27 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 32, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 56, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB22;

LAB19:    if (t18 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t13) = 1;

LAB22:    t27 = (t13 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB23;

LAB24:
LAB25:    goto LAB17;

LAB21:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(52, ng0);
    t28 = ((char*)((ng7)));
    t29 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    goto LAB25;

LAB27:    xsi_set_current_line(55, ng0);

LAB30:    xsi_set_current_line(56, ng0);
    t12 = ((char*)((ng9)));
    t26 = (t0 + 1368U);
    t27 = *((char **)t26);
    memset(t33, 0, 8);
    t26 = (t12 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB32;

LAB31:    t28 = (t27 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB32;

LAB35:    if (*((unsigned int *)t12) > *((unsigned int *)t27))
        goto LAB34;

LAB33:    *((unsigned int *)t33) = 1;

LAB34:    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t14 = *((unsigned int *)t35);
    t15 = (~(t14));
    t16 = *((unsigned int *)t33);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t35) != 0)
        goto LAB38;

LAB39:    t37 = (t34 + 4);
    t19 = *((unsigned int *)t34);
    t20 = *((unsigned int *)t37);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB40;

LAB41:    memcpy(t48, t34, 8);

LAB42:    memset(t32, 0, 8);
    t80 = (t48 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t48);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t80) != 0)
        goto LAB57;

LAB58:    t87 = (t32 + 4);
    t88 = *((unsigned int *)t32);
    t89 = *((unsigned int *)t87);
    t90 = (t88 || t89);
    if (t90 > 0)
        goto LAB59;

LAB60:    t96 = *((unsigned int *)t32);
    t97 = (~(t96));
    t98 = *((unsigned int *)t87);
    t99 = (t97 || t98);
    if (t99 > 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t87) > 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t32) > 0)
        goto LAB65;

LAB66:    memcpy(t31, t101, 8);

LAB67:    t100 = (t0 + 1928);
    t103 = (t100 + 56U);
    t104 = *((char **)t103);
    xsi_vlog_get_part_select_value(t102, 48, t104, 47, 0);
    xsi_vlogtype_concat(t30, 56, 56, 2U, t102, 48, t31, 8);
    t105 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t105, t30, 0, 0, 56, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t32, 0, 8);
    t3 = (t2 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB69;

LAB68:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB69;

LAB72:    if (*((unsigned int *)t2) > *((unsigned int *)t4))
        goto LAB71;

LAB70:    *((unsigned int *)t32) = 1;

LAB71:    memset(t33, 0, 8);
    t12 = (t32 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t32);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t12) != 0)
        goto LAB75;

LAB76:    t27 = (t33 + 4);
    t14 = *((unsigned int *)t33);
    t15 = *((unsigned int *)t27);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB77;

LAB78:    memcpy(t44, t33, 8);

LAB79:    memset(t31, 0, 8);
    t52 = (t44 + 4);
    t75 = *((unsigned int *)t52);
    t76 = (~(t75));
    t77 = *((unsigned int *)t44);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t52) != 0)
        goto LAB94;

LAB95:    t54 = (t31 + 4);
    t81 = *((unsigned int *)t31);
    t82 = *((unsigned int *)t54);
    t83 = (t81 || t82);
    if (t83 > 0)
        goto LAB96;

LAB97:    t84 = *((unsigned int *)t31);
    t85 = (~(t84));
    t88 = *((unsigned int *)t54);
    t89 = (t85 || t88);
    if (t89 > 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t54) > 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t31) > 0)
        goto LAB102;

LAB103:    memcpy(t13, t87, 8);

LAB104:    t86 = (t0 + 1928);
    t91 = (t86 + 56U);
    t92 = *((char **)t91);
    xsi_vlog_get_part_select_value(t102, 48, t92, 47, 0);
    xsi_vlogtype_concat(t30, 56, 56, 2U, t102, 48, t13, 8);
    t94 = ((char*)((ng12)));
    xsi_vlog_unsigned_equal(t106, 56, t30, 56, t94, 56);
    t100 = (t106 + 4);
    t90 = *((unsigned int *)t100);
    t96 = (~(t90));
    t97 = *((unsigned int *)t106);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB105;

LAB106:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t32, 0, 8);
    t3 = (t2 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB135;

LAB134:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB135;

LAB138:    if (*((unsigned int *)t2) > *((unsigned int *)t4))
        goto LAB137;

LAB136:    *((unsigned int *)t32) = 1;

LAB137:    memset(t33, 0, 8);
    t12 = (t32 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t32);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB139;

LAB140:    if (*((unsigned int *)t12) != 0)
        goto LAB141;

LAB142:    t27 = (t33 + 4);
    t14 = *((unsigned int *)t33);
    t15 = *((unsigned int *)t27);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB143;

LAB144:    memcpy(t44, t33, 8);

LAB145:    memset(t31, 0, 8);
    t52 = (t44 + 4);
    t75 = *((unsigned int *)t52);
    t76 = (~(t75));
    t77 = *((unsigned int *)t44);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB158;

LAB159:    if (*((unsigned int *)t52) != 0)
        goto LAB160;

LAB161:    t54 = (t31 + 4);
    t81 = *((unsigned int *)t31);
    t82 = *((unsigned int *)t54);
    t83 = (t81 || t82);
    if (t83 > 0)
        goto LAB162;

LAB163:    t84 = *((unsigned int *)t31);
    t85 = (~(t84));
    t88 = *((unsigned int *)t54);
    t89 = (t85 || t88);
    if (t89 > 0)
        goto LAB164;

LAB165:    if (*((unsigned int *)t54) > 0)
        goto LAB166;

LAB167:    if (*((unsigned int *)t31) > 0)
        goto LAB168;

LAB169:    memcpy(t13, t87, 8);

LAB170:    t86 = (t0 + 1928);
    t91 = (t86 + 56U);
    t92 = *((char **)t91);
    xsi_vlog_get_part_select_value(t102, 48, t92, 47, 0);
    xsi_vlogtype_concat(t30, 56, 56, 2U, t102, 48, t13, 8);
    t94 = ((char*)((ng13)));
    xsi_vlog_unsigned_equal(t106, 56, t30, 56, t94, 56);
    t100 = (t106 + 4);
    t90 = *((unsigned int *)t100);
    t96 = (~(t90));
    t97 = *((unsigned int *)t106);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB171;

LAB172:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng12)));
    xsi_vlog_unsigned_equal(t30, 56, t4, 56, t5, 56);
    t11 = (t30 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t30);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB200;

LAB201:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng13)));
    xsi_vlog_unsigned_equal(t30, 56, t4, 56, t5, 56);
    t11 = (t30 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t30);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB211;

LAB212:
LAB213:
LAB202:
LAB173:
LAB107:    goto LAB29;

LAB32:    t29 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB34;

LAB36:    *((unsigned int *)t34) = 1;
    goto LAB39;

LAB38:    t36 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB39;

LAB40:    t38 = (t0 + 1368U);
    t39 = *((char **)t38);
    t38 = ((char*)((ng10)));
    memset(t40, 0, 8);
    t41 = (t39 + 4);
    if (*((unsigned int *)t41) != 0)
        goto LAB44;

LAB43:    t42 = (t38 + 4);
    if (*((unsigned int *)t42) != 0)
        goto LAB44;

LAB47:    if (*((unsigned int *)t39) > *((unsigned int *)t38))
        goto LAB46;

LAB45:    *((unsigned int *)t40) = 1;

LAB46:    memset(t44, 0, 8);
    t45 = (t40 + 4);
    t22 = *((unsigned int *)t45);
    t23 = (~(t22));
    t24 = *((unsigned int *)t40);
    t25 = (t24 & t23);
    t46 = (t25 & 1U);
    if (t46 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t45) != 0)
        goto LAB50;

LAB51:    t49 = *((unsigned int *)t34);
    t50 = *((unsigned int *)t44);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t52 = (t34 + 4);
    t53 = (t44 + 4);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t52);
    t56 = *((unsigned int *)t53);
    t57 = (t55 | t56);
    *((unsigned int *)t54) = t57;
    t58 = *((unsigned int *)t54);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB42;

LAB44:    t43 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB46;

LAB48:    *((unsigned int *)t44) = 1;
    goto LAB51;

LAB50:    t47 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB51;

LAB52:    t60 = *((unsigned int *)t48);
    t61 = *((unsigned int *)t54);
    *((unsigned int *)t48) = (t60 | t61);
    t62 = (t34 + 4);
    t63 = (t44 + 4);
    t64 = *((unsigned int *)t34);
    t65 = (~(t64));
    t66 = *((unsigned int *)t62);
    t67 = (~(t66));
    t68 = *((unsigned int *)t44);
    t69 = (~(t68));
    t70 = *((unsigned int *)t63);
    t71 = (~(t70));
    t72 = (t65 & t67);
    t73 = (t69 & t71);
    t74 = (~(t72));
    t75 = (~(t73));
    t76 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t76 & t74);
    t77 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t77 & t75);
    t78 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t78 & t74);
    t79 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t79 & t75);
    goto LAB54;

LAB55:    *((unsigned int *)t32) = 1;
    goto LAB58;

LAB57:    t86 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB58;

LAB59:    t91 = (t0 + 1368U);
    t92 = *((char **)t91);
    t91 = ((char*)((ng9)));
    memset(t93, 0, 8);
    xsi_vlog_unsigned_minus(t93, 8, t92, 8, t91, 8);
    t94 = ((char*)((ng11)));
    memset(t95, 0, 8);
    xsi_vlog_unsigned_add(t95, 8, t93, 8, t94, 8);
    goto LAB60;

LAB61:    t100 = (t0 + 1368U);
    t101 = *((char **)t100);
    goto LAB62;

LAB63:    xsi_vlog_unsigned_bit_combine(t31, 8, t95, 8, t101, 8);
    goto LAB67;

LAB65:    memcpy(t31, t95, 8);
    goto LAB67;

LAB69:    t11 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB71;

LAB73:    *((unsigned int *)t33) = 1;
    goto LAB76;

LAB75:    t26 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB76;

LAB77:    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng10)));
    memset(t34, 0, 8);
    t35 = (t29 + 4);
    if (*((unsigned int *)t35) != 0)
        goto LAB81;

LAB80:    t36 = (t28 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB81;

LAB84:    if (*((unsigned int *)t29) > *((unsigned int *)t28))
        goto LAB83;

LAB82:    *((unsigned int *)t34) = 1;

LAB83:    memset(t40, 0, 8);
    t38 = (t34 + 4);
    t17 = *((unsigned int *)t38);
    t18 = (~(t17));
    t19 = *((unsigned int *)t34);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t38) != 0)
        goto LAB87;

LAB88:    t22 = *((unsigned int *)t33);
    t23 = *((unsigned int *)t40);
    t24 = (t22 & t23);
    *((unsigned int *)t44) = t24;
    t41 = (t33 + 4);
    t42 = (t40 + 4);
    t43 = (t44 + 4);
    t25 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t42);
    t49 = (t25 | t46);
    *((unsigned int *)t43) = t49;
    t50 = *((unsigned int *)t43);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB79;

LAB81:    t37 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB83;

LAB85:    *((unsigned int *)t40) = 1;
    goto LAB88;

LAB87:    t39 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB88;

LAB89:    t55 = *((unsigned int *)t44);
    t56 = *((unsigned int *)t43);
    *((unsigned int *)t44) = (t55 | t56);
    t45 = (t33 + 4);
    t47 = (t40 + 4);
    t57 = *((unsigned int *)t33);
    t58 = (~(t57));
    t59 = *((unsigned int *)t45);
    t60 = (~(t59));
    t61 = *((unsigned int *)t40);
    t64 = (~(t61));
    t65 = *((unsigned int *)t47);
    t66 = (~(t65));
    t72 = (t58 & t60);
    t73 = (t64 & t66);
    t67 = (~(t72));
    t68 = (~(t73));
    t69 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t69 & t67);
    t70 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t70 & t68);
    t71 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t71 & t67);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t68);
    goto LAB91;

LAB92:    *((unsigned int *)t31) = 1;
    goto LAB95;

LAB94:    t53 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB95;

LAB96:    t62 = (t0 + 1368U);
    t63 = *((char **)t62);
    t62 = ((char*)((ng9)));
    memset(t48, 0, 8);
    xsi_vlog_unsigned_minus(t48, 8, t63, 8, t62, 8);
    t80 = ((char*)((ng11)));
    memset(t93, 0, 8);
    xsi_vlog_unsigned_add(t93, 8, t48, 8, t80, 8);
    goto LAB97;

LAB98:    t86 = (t0 + 1368U);
    t87 = *((char **)t86);
    goto LAB99;

LAB100:    xsi_vlog_unsigned_bit_combine(t13, 8, t93, 8, t87, 8);
    goto LAB104;

LAB102:    memcpy(t13, t93, 8);
    goto LAB104;

LAB105:    xsi_set_current_line(58, ng0);

LAB108:    xsi_set_current_line(59, ng0);
    t101 = (t0 + 2248);
    t103 = (t101 + 56U);
    t104 = *((char **)t103);
    t105 = ((char*)((ng6)));
    memset(t95, 0, 8);
    t107 = (t104 + 4);
    t108 = (t105 + 4);
    t109 = *((unsigned int *)t104);
    t110 = *((unsigned int *)t105);
    t111 = (t109 ^ t110);
    t112 = *((unsigned int *)t107);
    t113 = *((unsigned int *)t108);
    t114 = (t112 ^ t113);
    t115 = (t111 | t114);
    t116 = *((unsigned int *)t107);
    t117 = *((unsigned int *)t108);
    t118 = (t116 | t117);
    t119 = (~(t118));
    t120 = (t115 & t119);
    if (t120 != 0)
        goto LAB110;

LAB109:    if (t118 != 0)
        goto LAB111;

LAB112:    memset(t122, 0, 8);
    t123 = (t95 + 4);
    t124 = *((unsigned int *)t123);
    t125 = (~(t124));
    t126 = *((unsigned int *)t95);
    t127 = (t126 & t125);
    t128 = (t127 & 1U);
    if (t128 != 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t123) != 0)
        goto LAB115;

LAB116:    t130 = (t122 + 4);
    t131 = *((unsigned int *)t122);
    t132 = *((unsigned int *)t130);
    t133 = (t131 || t132);
    if (t133 > 0)
        goto LAB117;

LAB118:    memcpy(t162, t122, 8);

LAB119:    t194 = (t162 + 4);
    t195 = *((unsigned int *)t194);
    t196 = (~(t195));
    t197 = *((unsigned int *)t162);
    t198 = (t197 & t196);
    t199 = (t198 != 0);
    if (t199 > 0)
        goto LAB131;

LAB132:
LAB133:    goto LAB107;

LAB110:    *((unsigned int *)t95) = 1;
    goto LAB112;

LAB111:    t121 = (t95 + 4);
    *((unsigned int *)t95) = 1;
    *((unsigned int *)t121) = 1;
    goto LAB112;

LAB113:    *((unsigned int *)t122) = 1;
    goto LAB116;

LAB115:    t129 = (t122 + 4);
    *((unsigned int *)t122) = 1;
    *((unsigned int *)t129) = 1;
    goto LAB116;

LAB117:    t134 = (t0 + 2248);
    t135 = (t134 + 56U);
    t136 = *((char **)t135);
    t137 = ((char*)((ng7)));
    memset(t138, 0, 8);
    t139 = (t136 + 4);
    t140 = (t137 + 4);
    t141 = *((unsigned int *)t136);
    t142 = *((unsigned int *)t137);
    t143 = (t141 ^ t142);
    t144 = *((unsigned int *)t139);
    t145 = *((unsigned int *)t140);
    t146 = (t144 ^ t145);
    t147 = (t143 | t146);
    t148 = *((unsigned int *)t139);
    t149 = *((unsigned int *)t140);
    t150 = (t148 | t149);
    t151 = (~(t150));
    t152 = (t147 & t151);
    if (t152 != 0)
        goto LAB121;

LAB120:    if (t150 != 0)
        goto LAB122;

LAB123:    memset(t154, 0, 8);
    t155 = (t138 + 4);
    t156 = *((unsigned int *)t155);
    t157 = (~(t156));
    t158 = *((unsigned int *)t138);
    t159 = (t158 & t157);
    t160 = (t159 & 1U);
    if (t160 != 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t155) != 0)
        goto LAB126;

LAB127:    t163 = *((unsigned int *)t122);
    t164 = *((unsigned int *)t154);
    t165 = (t163 & t164);
    *((unsigned int *)t162) = t165;
    t166 = (t122 + 4);
    t167 = (t154 + 4);
    t168 = (t162 + 4);
    t169 = *((unsigned int *)t166);
    t170 = *((unsigned int *)t167);
    t171 = (t169 | t170);
    *((unsigned int *)t168) = t171;
    t172 = *((unsigned int *)t168);
    t173 = (t172 != 0);
    if (t173 == 1)
        goto LAB128;

LAB129:
LAB130:    goto LAB119;

LAB121:    *((unsigned int *)t138) = 1;
    goto LAB123;

LAB122:    t153 = (t138 + 4);
    *((unsigned int *)t138) = 1;
    *((unsigned int *)t153) = 1;
    goto LAB123;

LAB124:    *((unsigned int *)t154) = 1;
    goto LAB127;

LAB126:    t161 = (t154 + 4);
    *((unsigned int *)t154) = 1;
    *((unsigned int *)t161) = 1;
    goto LAB127;

LAB128:    t174 = *((unsigned int *)t162);
    t175 = *((unsigned int *)t168);
    *((unsigned int *)t162) = (t174 | t175);
    t176 = (t122 + 4);
    t177 = (t154 + 4);
    t178 = *((unsigned int *)t122);
    t179 = (~(t178));
    t180 = *((unsigned int *)t176);
    t181 = (~(t180));
    t182 = *((unsigned int *)t154);
    t183 = (~(t182));
    t184 = *((unsigned int *)t177);
    t185 = (~(t184));
    t186 = (t179 & t181);
    t187 = (t183 & t185);
    t188 = (~(t186));
    t189 = (~(t187));
    t190 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t190 & t188);
    t191 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t191 & t189);
    t192 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t192 & t188);
    t193 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t193 & t189);
    goto LAB130;

LAB131:    xsi_set_current_line(60, ng0);
    t200 = (t0 + 2248);
    t201 = (t200 + 56U);
    t202 = *((char **)t201);
    t203 = ((char*)((ng2)));
    memset(t204, 0, 8);
    xsi_vlog_unsigned_add(t204, 32, t202, 32, t203, 32);
    t205 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t205, t204, 0, 0, 32, 0LL);
    goto LAB133;

LAB135:    t11 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB137;

LAB139:    *((unsigned int *)t33) = 1;
    goto LAB142;

LAB141:    t26 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB142;

LAB143:    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng10)));
    memset(t34, 0, 8);
    t35 = (t29 + 4);
    if (*((unsigned int *)t35) != 0)
        goto LAB147;

LAB146:    t36 = (t28 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB147;

LAB150:    if (*((unsigned int *)t29) > *((unsigned int *)t28))
        goto LAB149;

LAB148:    *((unsigned int *)t34) = 1;

LAB149:    memset(t40, 0, 8);
    t38 = (t34 + 4);
    t17 = *((unsigned int *)t38);
    t18 = (~(t17));
    t19 = *((unsigned int *)t34);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB151;

LAB152:    if (*((unsigned int *)t38) != 0)
        goto LAB153;

LAB154:    t22 = *((unsigned int *)t33);
    t23 = *((unsigned int *)t40);
    t24 = (t22 & t23);
    *((unsigned int *)t44) = t24;
    t41 = (t33 + 4);
    t42 = (t40 + 4);
    t43 = (t44 + 4);
    t25 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t42);
    t49 = (t25 | t46);
    *((unsigned int *)t43) = t49;
    t50 = *((unsigned int *)t43);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB155;

LAB156:
LAB157:    goto LAB145;

LAB147:    t37 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB149;

LAB151:    *((unsigned int *)t40) = 1;
    goto LAB154;

LAB153:    t39 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB154;

LAB155:    t55 = *((unsigned int *)t44);
    t56 = *((unsigned int *)t43);
    *((unsigned int *)t44) = (t55 | t56);
    t45 = (t33 + 4);
    t47 = (t40 + 4);
    t57 = *((unsigned int *)t33);
    t58 = (~(t57));
    t59 = *((unsigned int *)t45);
    t60 = (~(t59));
    t61 = *((unsigned int *)t40);
    t64 = (~(t61));
    t65 = *((unsigned int *)t47);
    t66 = (~(t65));
    t72 = (t58 & t60);
    t73 = (t64 & t66);
    t67 = (~(t72));
    t68 = (~(t73));
    t69 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t69 & t67);
    t70 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t70 & t68);
    t71 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t71 & t67);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t68);
    goto LAB157;

LAB158:    *((unsigned int *)t31) = 1;
    goto LAB161;

LAB160:    t53 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB161;

LAB162:    t62 = (t0 + 1368U);
    t63 = *((char **)t62);
    t62 = ((char*)((ng9)));
    memset(t48, 0, 8);
    xsi_vlog_unsigned_minus(t48, 8, t63, 8, t62, 8);
    t80 = ((char*)((ng11)));
    memset(t93, 0, 8);
    xsi_vlog_unsigned_add(t93, 8, t48, 8, t80, 8);
    goto LAB163;

LAB164:    t86 = (t0 + 1368U);
    t87 = *((char **)t86);
    goto LAB165;

LAB166:    xsi_vlog_unsigned_bit_combine(t13, 8, t93, 8, t87, 8);
    goto LAB170;

LAB168:    memcpy(t13, t93, 8);
    goto LAB170;

LAB171:    xsi_set_current_line(62, ng0);

LAB174:    xsi_set_current_line(63, ng0);
    t101 = (t0 + 2248);
    t103 = (t101 + 56U);
    t104 = *((char **)t103);
    t105 = ((char*)((ng6)));
    memset(t95, 0, 8);
    t107 = (t104 + 4);
    t108 = (t105 + 4);
    t109 = *((unsigned int *)t104);
    t110 = *((unsigned int *)t105);
    t111 = (t109 ^ t110);
    t112 = *((unsigned int *)t107);
    t113 = *((unsigned int *)t108);
    t114 = (t112 ^ t113);
    t115 = (t111 | t114);
    t116 = *((unsigned int *)t107);
    t117 = *((unsigned int *)t108);
    t118 = (t116 | t117);
    t119 = (~(t118));
    t120 = (t115 & t119);
    if (t120 != 0)
        goto LAB176;

LAB175:    if (t118 != 0)
        goto LAB177;

LAB178:    memset(t122, 0, 8);
    t123 = (t95 + 4);
    t124 = *((unsigned int *)t123);
    t125 = (~(t124));
    t126 = *((unsigned int *)t95);
    t127 = (t126 & t125);
    t128 = (t127 & 1U);
    if (t128 != 0)
        goto LAB179;

LAB180:    if (*((unsigned int *)t123) != 0)
        goto LAB181;

LAB182:    t130 = (t122 + 4);
    t131 = *((unsigned int *)t122);
    t132 = *((unsigned int *)t130);
    t133 = (t131 || t132);
    if (t133 > 0)
        goto LAB183;

LAB184:    memcpy(t162, t122, 8);

LAB185:    t194 = (t162 + 4);
    t195 = *((unsigned int *)t194);
    t196 = (~(t195));
    t197 = *((unsigned int *)t162);
    t198 = (t197 & t196);
    t199 = (t198 != 0);
    if (t199 > 0)
        goto LAB197;

LAB198:
LAB199:    goto LAB173;

LAB176:    *((unsigned int *)t95) = 1;
    goto LAB178;

LAB177:    t121 = (t95 + 4);
    *((unsigned int *)t95) = 1;
    *((unsigned int *)t121) = 1;
    goto LAB178;

LAB179:    *((unsigned int *)t122) = 1;
    goto LAB182;

LAB181:    t129 = (t122 + 4);
    *((unsigned int *)t122) = 1;
    *((unsigned int *)t129) = 1;
    goto LAB182;

LAB183:    t134 = (t0 + 2248);
    t135 = (t134 + 56U);
    t136 = *((char **)t135);
    t137 = ((char*)((ng7)));
    memset(t138, 0, 8);
    t139 = (t136 + 4);
    t140 = (t137 + 4);
    t141 = *((unsigned int *)t136);
    t142 = *((unsigned int *)t137);
    t143 = (t141 ^ t142);
    t144 = *((unsigned int *)t139);
    t145 = *((unsigned int *)t140);
    t146 = (t144 ^ t145);
    t147 = (t143 | t146);
    t148 = *((unsigned int *)t139);
    t149 = *((unsigned int *)t140);
    t150 = (t148 | t149);
    t151 = (~(t150));
    t152 = (t147 & t151);
    if (t152 != 0)
        goto LAB187;

LAB186:    if (t150 != 0)
        goto LAB188;

LAB189:    memset(t154, 0, 8);
    t155 = (t138 + 4);
    t156 = *((unsigned int *)t155);
    t157 = (~(t156));
    t158 = *((unsigned int *)t138);
    t159 = (t158 & t157);
    t160 = (t159 & 1U);
    if (t160 != 0)
        goto LAB190;

LAB191:    if (*((unsigned int *)t155) != 0)
        goto LAB192;

LAB193:    t163 = *((unsigned int *)t122);
    t164 = *((unsigned int *)t154);
    t165 = (t163 & t164);
    *((unsigned int *)t162) = t165;
    t166 = (t122 + 4);
    t167 = (t154 + 4);
    t168 = (t162 + 4);
    t169 = *((unsigned int *)t166);
    t170 = *((unsigned int *)t167);
    t171 = (t169 | t170);
    *((unsigned int *)t168) = t171;
    t172 = *((unsigned int *)t168);
    t173 = (t172 != 0);
    if (t173 == 1)
        goto LAB194;

LAB195:
LAB196:    goto LAB185;

LAB187:    *((unsigned int *)t138) = 1;
    goto LAB189;

LAB188:    t153 = (t138 + 4);
    *((unsigned int *)t138) = 1;
    *((unsigned int *)t153) = 1;
    goto LAB189;

LAB190:    *((unsigned int *)t154) = 1;
    goto LAB193;

LAB192:    t161 = (t154 + 4);
    *((unsigned int *)t154) = 1;
    *((unsigned int *)t161) = 1;
    goto LAB193;

LAB194:    t174 = *((unsigned int *)t162);
    t175 = *((unsigned int *)t168);
    *((unsigned int *)t162) = (t174 | t175);
    t176 = (t122 + 4);
    t177 = (t154 + 4);
    t178 = *((unsigned int *)t122);
    t179 = (~(t178));
    t180 = *((unsigned int *)t176);
    t181 = (~(t180));
    t182 = *((unsigned int *)t154);
    t183 = (~(t182));
    t184 = *((unsigned int *)t177);
    t185 = (~(t184));
    t186 = (t179 & t181);
    t187 = (t183 & t185);
    t188 = (~(t186));
    t189 = (~(t187));
    t190 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t190 & t188);
    t191 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t191 & t189);
    t192 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t192 & t188);
    t193 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t193 & t189);
    goto LAB196;

LAB197:    xsi_set_current_line(64, ng0);
    t200 = (t0 + 2248);
    t201 = (t200 + 56U);
    t202 = *((char **)t201);
    t203 = ((char*)((ng2)));
    memset(t204, 0, 8);
    xsi_vlog_unsigned_minus(t204, 32, t202, 32, t203, 32);
    t205 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t205, t204, 0, 0, 32, 0LL);
    goto LAB199;

LAB200:    xsi_set_current_line(66, ng0);

LAB203:    xsi_set_current_line(67, ng0);
    t12 = (t0 + 2248);
    t26 = (t12 + 56U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t29 = (t27 + 4);
    t35 = (t28 + 4);
    t14 = *((unsigned int *)t27);
    t15 = *((unsigned int *)t28);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t29);
    t18 = *((unsigned int *)t35);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t29);
    t22 = *((unsigned int *)t35);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB205;

LAB204:    if (t23 != 0)
        goto LAB206;

LAB207:    t37 = (t13 + 4);
    t46 = *((unsigned int *)t37);
    t49 = (~(t46));
    t50 = *((unsigned int *)t13);
    t51 = (t50 & t49);
    t55 = (t51 != 0);
    if (t55 > 0)
        goto LAB208;

LAB209:
LAB210:    goto LAB202;

LAB205:    *((unsigned int *)t13) = 1;
    goto LAB207;

LAB206:    t36 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB207;

LAB208:    xsi_set_current_line(68, ng0);
    t38 = (t0 + 2248);
    t39 = (t38 + 56U);
    t41 = *((char **)t39);
    t42 = ((char*)((ng2)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_minus(t31, 32, t41, 32, t42, 32);
    t43 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t43, t31, 0, 0, 32, 0LL);
    goto LAB210;

LAB211:    xsi_set_current_line(70, ng0);

LAB214:    xsi_set_current_line(71, ng0);
    t12 = (t0 + 2248);
    t26 = (t12 + 56U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t29 = (t27 + 4);
    t35 = (t28 + 4);
    t14 = *((unsigned int *)t27);
    t15 = *((unsigned int *)t28);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t29);
    t18 = *((unsigned int *)t35);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t29);
    t22 = *((unsigned int *)t35);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB216;

LAB215:    if (t23 != 0)
        goto LAB217;

LAB218:    t37 = (t13 + 4);
    t46 = *((unsigned int *)t37);
    t49 = (~(t46));
    t50 = *((unsigned int *)t13);
    t51 = (t50 & t49);
    t55 = (t51 != 0);
    if (t55 > 0)
        goto LAB219;

LAB220:
LAB221:    goto LAB213;

LAB216:    *((unsigned int *)t13) = 1;
    goto LAB218;

LAB217:    t36 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB218;

LAB219:    xsi_set_current_line(72, ng0);
    t38 = (t0 + 2248);
    t39 = (t38 + 56U);
    t41 = *((char **)t39);
    t42 = ((char*)((ng2)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t41, 32, t42, 32);
    t43 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t43, t31, 0, 0, 32, 0LL);
    goto LAB221;

}


extern void work_m_10778381604492500815_1075435344_init()
{
	static char *pe[] = {(void *)Cont_39_0,(void *)Always_41_1};
	xsi_register_didat("work_m_10778381604492500815_1075435344", "isim/BlockCheck_tb_isim_beh.exe.sim/work/m_10778381604492500815_1075435344.didat");
	xsi_register_executes(pe);
}
