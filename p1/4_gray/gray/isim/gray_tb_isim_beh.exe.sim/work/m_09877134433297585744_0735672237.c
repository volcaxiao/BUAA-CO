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
static const char *ng0 = "/media/shared/p1/4_gray/gray/gray.v";
static unsigned int ng1[] = {4U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {7U, 0U};
static unsigned int ng8[] = {5U, 0U};



static void Cont_32_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4352);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 7U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 2);
    t18 = (t0 + 4224);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_33_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4416);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 4240);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_37_2(char *t0)
{
    char t8[8];
    char t32[8];
    char t33[8];
    char t47[8];
    char t48[8];
    char t53[8];
    char t85[8];
    char t86[8];
    char t91[8];
    char t123[8];
    char t124[8];
    char t129[8];
    char t161[8];
    char t162[8];
    char t167[8];
    char t199[8];
    char t200[8];
    char t205[8];
    char t237[8];
    char t238[8];
    char t243[8];
    char t275[8];
    char t276[8];
    char t281[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t49;
    char *t50;
    char *t51;
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
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t163;
    char *t164;
    char *t165;
    char *t166;
    char *t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    char *t182;
    char *t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    char *t189;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    char *t201;
    char *t202;
    char *t203;
    char *t204;
    char *t206;
    char *t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    char *t220;
    char *t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    char *t227;
    char *t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    char *t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    char *t239;
    char *t240;
    char *t241;
    char *t242;
    char *t244;
    char *t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    char *t258;
    char *t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    char *t265;
    char *t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    char *t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    char *t277;
    char *t278;
    char *t279;
    char *t280;
    char *t282;
    char *t283;
    unsigned int t284;
    unsigned int t285;
    unsigned int t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    char *t296;
    char *t297;
    unsigned int t298;
    unsigned int t299;
    unsigned int t300;
    unsigned int t301;
    unsigned int t302;
    char *t303;
    char *t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    char *t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    char *t313;
    char *t314;

LAB0:    t1 = (t0 + 3656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4256);
    *((int *)t2) = 1;
    t3 = (t0 + 3688);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
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
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB14;

LAB15:
LAB16:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(38, ng0);

LAB13:    xsi_set_current_line(39, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 1, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(41, ng0);

LAB17:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t33, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t7);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t10);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t25 = *((unsigned int *)t9);
    t26 = *((unsigned int *)t10);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t22 & t28);
    if (t29 != 0)
        goto LAB21;

LAB18:    if (t27 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t33) = 1;

LAB21:    memset(t32, 0, 8);
    t24 = (t33 + 4);
    t34 = *((unsigned int *)t24);
    t35 = (~(t34));
    t36 = *((unsigned int *)t33);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t24) != 0)
        goto LAB24;

LAB25:    t31 = (t32 + 4);
    t39 = *((unsigned int *)t32);
    t40 = *((unsigned int *)t31);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB26;

LAB27:    t43 = *((unsigned int *)t32);
    t44 = (~(t43));
    t45 = *((unsigned int *)t31);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t31) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t32) > 0)
        goto LAB32;

LAB33:    memcpy(t8, t47, 8);

LAB34:    t314 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t314, t8, 0, 0, 3, 0LL);
    goto LAB16;

LAB20:    t23 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB21;

LAB22:    *((unsigned int *)t32) = 1;
    goto LAB25;

LAB24:    t30 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB25;

LAB26:    t42 = ((char*)((ng2)));
    goto LAB27;

LAB28:    t49 = (t0 + 2088);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng2)));
    memset(t53, 0, 8);
    t54 = (t51 + 4);
    t55 = (t52 + 4);
    t56 = *((unsigned int *)t51);
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
        goto LAB38;

LAB35:    if (t65 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t53) = 1;

LAB38:    memset(t48, 0, 8);
    t69 = (t53 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t53);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t69) != 0)
        goto LAB41;

LAB42:    t76 = (t48 + 4);
    t77 = *((unsigned int *)t48);
    t78 = *((unsigned int *)t76);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB43;

LAB44:    t81 = *((unsigned int *)t48);
    t82 = (~(t81));
    t83 = *((unsigned int *)t76);
    t84 = (t82 || t83);
    if (t84 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t76) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t48) > 0)
        goto LAB49;

LAB50:    memcpy(t47, t85, 8);

LAB51:    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t8, 3, t42, 3, t47, 3);
    goto LAB34;

LAB32:    memcpy(t8, t42, 8);
    goto LAB34;

LAB37:    t68 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t48) = 1;
    goto LAB42;

LAB41:    t75 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB42;

LAB43:    t80 = ((char*)((ng4)));
    goto LAB44;

LAB45:    t87 = (t0 + 2088);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    t90 = ((char*)((ng4)));
    memset(t91, 0, 8);
    t92 = (t89 + 4);
    t93 = (t90 + 4);
    t94 = *((unsigned int *)t89);
    t95 = *((unsigned int *)t90);
    t96 = (t94 ^ t95);
    t97 = *((unsigned int *)t92);
    t98 = *((unsigned int *)t93);
    t99 = (t97 ^ t98);
    t100 = (t96 | t99);
    t101 = *((unsigned int *)t92);
    t102 = *((unsigned int *)t93);
    t103 = (t101 | t102);
    t104 = (~(t103));
    t105 = (t100 & t104);
    if (t105 != 0)
        goto LAB55;

LAB52:    if (t103 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t91) = 1;

LAB55:    memset(t86, 0, 8);
    t107 = (t91 + 4);
    t108 = *((unsigned int *)t107);
    t109 = (~(t108));
    t110 = *((unsigned int *)t91);
    t111 = (t110 & t109);
    t112 = (t111 & 1U);
    if (t112 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t107) != 0)
        goto LAB58;

LAB59:    t114 = (t86 + 4);
    t115 = *((unsigned int *)t86);
    t116 = *((unsigned int *)t114);
    t117 = (t115 || t116);
    if (t117 > 0)
        goto LAB60;

LAB61:    t119 = *((unsigned int *)t86);
    t120 = (~(t119));
    t121 = *((unsigned int *)t114);
    t122 = (t120 || t121);
    if (t122 > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t114) > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t86) > 0)
        goto LAB66;

LAB67:    memcpy(t85, t123, 8);

LAB68:    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t47, 3, t80, 3, t85, 3);
    goto LAB51;

LAB49:    memcpy(t47, t80, 8);
    goto LAB51;

LAB54:    t106 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t106) = 1;
    goto LAB55;

LAB56:    *((unsigned int *)t86) = 1;
    goto LAB59;

LAB58:    t113 = (t86 + 4);
    *((unsigned int *)t86) = 1;
    *((unsigned int *)t113) = 1;
    goto LAB59;

LAB60:    t118 = ((char*)((ng5)));
    goto LAB61;

LAB62:    t125 = (t0 + 2088);
    t126 = (t125 + 56U);
    t127 = *((char **)t126);
    t128 = ((char*)((ng5)));
    memset(t129, 0, 8);
    t130 = (t127 + 4);
    t131 = (t128 + 4);
    t132 = *((unsigned int *)t127);
    t133 = *((unsigned int *)t128);
    t134 = (t132 ^ t133);
    t135 = *((unsigned int *)t130);
    t136 = *((unsigned int *)t131);
    t137 = (t135 ^ t136);
    t138 = (t134 | t137);
    t139 = *((unsigned int *)t130);
    t140 = *((unsigned int *)t131);
    t141 = (t139 | t140);
    t142 = (~(t141));
    t143 = (t138 & t142);
    if (t143 != 0)
        goto LAB72;

LAB69:    if (t141 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t129) = 1;

LAB72:    memset(t124, 0, 8);
    t145 = (t129 + 4);
    t146 = *((unsigned int *)t145);
    t147 = (~(t146));
    t148 = *((unsigned int *)t129);
    t149 = (t148 & t147);
    t150 = (t149 & 1U);
    if (t150 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t145) != 0)
        goto LAB75;

LAB76:    t152 = (t124 + 4);
    t153 = *((unsigned int *)t124);
    t154 = *((unsigned int *)t152);
    t155 = (t153 || t154);
    if (t155 > 0)
        goto LAB77;

LAB78:    t157 = *((unsigned int *)t124);
    t158 = (~(t157));
    t159 = *((unsigned int *)t152);
    t160 = (t158 || t159);
    if (t160 > 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t152) > 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t124) > 0)
        goto LAB83;

LAB84:    memcpy(t123, t161, 8);

LAB85:    goto LAB63;

LAB64:    xsi_vlog_unsigned_bit_combine(t85, 3, t118, 3, t123, 3);
    goto LAB68;

LAB66:    memcpy(t85, t118, 8);
    goto LAB68;

LAB71:    t144 = (t129 + 4);
    *((unsigned int *)t129) = 1;
    *((unsigned int *)t144) = 1;
    goto LAB72;

LAB73:    *((unsigned int *)t124) = 1;
    goto LAB76;

LAB75:    t151 = (t124 + 4);
    *((unsigned int *)t124) = 1;
    *((unsigned int *)t151) = 1;
    goto LAB76;

LAB77:    t156 = ((char*)((ng6)));
    goto LAB78;

LAB79:    t163 = (t0 + 2088);
    t164 = (t163 + 56U);
    t165 = *((char **)t164);
    t166 = ((char*)((ng6)));
    memset(t167, 0, 8);
    t168 = (t165 + 4);
    t169 = (t166 + 4);
    t170 = *((unsigned int *)t165);
    t171 = *((unsigned int *)t166);
    t172 = (t170 ^ t171);
    t173 = *((unsigned int *)t168);
    t174 = *((unsigned int *)t169);
    t175 = (t173 ^ t174);
    t176 = (t172 | t175);
    t177 = *((unsigned int *)t168);
    t178 = *((unsigned int *)t169);
    t179 = (t177 | t178);
    t180 = (~(t179));
    t181 = (t176 & t180);
    if (t181 != 0)
        goto LAB89;

LAB86:    if (t179 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t167) = 1;

LAB89:    memset(t162, 0, 8);
    t183 = (t167 + 4);
    t184 = *((unsigned int *)t183);
    t185 = (~(t184));
    t186 = *((unsigned int *)t167);
    t187 = (t186 & t185);
    t188 = (t187 & 1U);
    if (t188 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t183) != 0)
        goto LAB92;

LAB93:    t190 = (t162 + 4);
    t191 = *((unsigned int *)t162);
    t192 = *((unsigned int *)t190);
    t193 = (t191 || t192);
    if (t193 > 0)
        goto LAB94;

LAB95:    t195 = *((unsigned int *)t162);
    t196 = (~(t195));
    t197 = *((unsigned int *)t190);
    t198 = (t196 || t197);
    if (t198 > 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t190) > 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t162) > 0)
        goto LAB100;

LAB101:    memcpy(t161, t199, 8);

LAB102:    goto LAB80;

LAB81:    xsi_vlog_unsigned_bit_combine(t123, 3, t156, 3, t161, 3);
    goto LAB85;

LAB83:    memcpy(t123, t156, 8);
    goto LAB85;

LAB88:    t182 = (t167 + 4);
    *((unsigned int *)t167) = 1;
    *((unsigned int *)t182) = 1;
    goto LAB89;

LAB90:    *((unsigned int *)t162) = 1;
    goto LAB93;

LAB92:    t189 = (t162 + 4);
    *((unsigned int *)t162) = 1;
    *((unsigned int *)t189) = 1;
    goto LAB93;

LAB94:    t194 = ((char*)((ng7)));
    goto LAB95;

LAB96:    t201 = (t0 + 2088);
    t202 = (t201 + 56U);
    t203 = *((char **)t202);
    t204 = ((char*)((ng7)));
    memset(t205, 0, 8);
    t206 = (t203 + 4);
    t207 = (t204 + 4);
    t208 = *((unsigned int *)t203);
    t209 = *((unsigned int *)t204);
    t210 = (t208 ^ t209);
    t211 = *((unsigned int *)t206);
    t212 = *((unsigned int *)t207);
    t213 = (t211 ^ t212);
    t214 = (t210 | t213);
    t215 = *((unsigned int *)t206);
    t216 = *((unsigned int *)t207);
    t217 = (t215 | t216);
    t218 = (~(t217));
    t219 = (t214 & t218);
    if (t219 != 0)
        goto LAB106;

LAB103:    if (t217 != 0)
        goto LAB105;

LAB104:    *((unsigned int *)t205) = 1;

LAB106:    memset(t200, 0, 8);
    t221 = (t205 + 4);
    t222 = *((unsigned int *)t221);
    t223 = (~(t222));
    t224 = *((unsigned int *)t205);
    t225 = (t224 & t223);
    t226 = (t225 & 1U);
    if (t226 != 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t221) != 0)
        goto LAB109;

LAB110:    t228 = (t200 + 4);
    t229 = *((unsigned int *)t200);
    t230 = *((unsigned int *)t228);
    t231 = (t229 || t230);
    if (t231 > 0)
        goto LAB111;

LAB112:    t233 = *((unsigned int *)t200);
    t234 = (~(t233));
    t235 = *((unsigned int *)t228);
    t236 = (t234 || t235);
    if (t236 > 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t228) > 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t200) > 0)
        goto LAB117;

LAB118:    memcpy(t199, t237, 8);

LAB119:    goto LAB97;

LAB98:    xsi_vlog_unsigned_bit_combine(t161, 3, t194, 3, t199, 3);
    goto LAB102;

LAB100:    memcpy(t161, t194, 8);
    goto LAB102;

LAB105:    t220 = (t205 + 4);
    *((unsigned int *)t205) = 1;
    *((unsigned int *)t220) = 1;
    goto LAB106;

LAB107:    *((unsigned int *)t200) = 1;
    goto LAB110;

LAB109:    t227 = (t200 + 4);
    *((unsigned int *)t200) = 1;
    *((unsigned int *)t227) = 1;
    goto LAB110;

LAB111:    t232 = ((char*)((ng8)));
    goto LAB112;

LAB113:    t239 = (t0 + 2088);
    t240 = (t239 + 56U);
    t241 = *((char **)t240);
    t242 = ((char*)((ng8)));
    memset(t243, 0, 8);
    t244 = (t241 + 4);
    t245 = (t242 + 4);
    t246 = *((unsigned int *)t241);
    t247 = *((unsigned int *)t242);
    t248 = (t246 ^ t247);
    t249 = *((unsigned int *)t244);
    t250 = *((unsigned int *)t245);
    t251 = (t249 ^ t250);
    t252 = (t248 | t251);
    t253 = *((unsigned int *)t244);
    t254 = *((unsigned int *)t245);
    t255 = (t253 | t254);
    t256 = (~(t255));
    t257 = (t252 & t256);
    if (t257 != 0)
        goto LAB123;

LAB120:    if (t255 != 0)
        goto LAB122;

LAB121:    *((unsigned int *)t243) = 1;

LAB123:    memset(t238, 0, 8);
    t259 = (t243 + 4);
    t260 = *((unsigned int *)t259);
    t261 = (~(t260));
    t262 = *((unsigned int *)t243);
    t263 = (t262 & t261);
    t264 = (t263 & 1U);
    if (t264 != 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t259) != 0)
        goto LAB126;

LAB127:    t266 = (t238 + 4);
    t267 = *((unsigned int *)t238);
    t268 = *((unsigned int *)t266);
    t269 = (t267 || t268);
    if (t269 > 0)
        goto LAB128;

LAB129:    t271 = *((unsigned int *)t238);
    t272 = (~(t271));
    t273 = *((unsigned int *)t266);
    t274 = (t272 || t273);
    if (t274 > 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t266) > 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t238) > 0)
        goto LAB134;

LAB135:    memcpy(t237, t275, 8);

LAB136:    goto LAB114;

LAB115:    xsi_vlog_unsigned_bit_combine(t199, 3, t232, 3, t237, 3);
    goto LAB119;

LAB117:    memcpy(t199, t232, 8);
    goto LAB119;

LAB122:    t258 = (t243 + 4);
    *((unsigned int *)t243) = 1;
    *((unsigned int *)t258) = 1;
    goto LAB123;

LAB124:    *((unsigned int *)t238) = 1;
    goto LAB127;

LAB126:    t265 = (t238 + 4);
    *((unsigned int *)t238) = 1;
    *((unsigned int *)t265) = 1;
    goto LAB127;

LAB128:    t270 = ((char*)((ng1)));
    goto LAB129;

LAB130:    t277 = (t0 + 2088);
    t278 = (t277 + 56U);
    t279 = *((char **)t278);
    t280 = ((char*)((ng1)));
    memset(t281, 0, 8);
    t282 = (t279 + 4);
    t283 = (t280 + 4);
    t284 = *((unsigned int *)t279);
    t285 = *((unsigned int *)t280);
    t286 = (t284 ^ t285);
    t287 = *((unsigned int *)t282);
    t288 = *((unsigned int *)t283);
    t289 = (t287 ^ t288);
    t290 = (t286 | t289);
    t291 = *((unsigned int *)t282);
    t292 = *((unsigned int *)t283);
    t293 = (t291 | t292);
    t294 = (~(t293));
    t295 = (t290 & t294);
    if (t295 != 0)
        goto LAB140;

LAB137:    if (t293 != 0)
        goto LAB139;

LAB138:    *((unsigned int *)t281) = 1;

LAB140:    memset(t276, 0, 8);
    t297 = (t281 + 4);
    t298 = *((unsigned int *)t297);
    t299 = (~(t298));
    t300 = *((unsigned int *)t281);
    t301 = (t300 & t299);
    t302 = (t301 & 1U);
    if (t302 != 0)
        goto LAB141;

LAB142:    if (*((unsigned int *)t297) != 0)
        goto LAB143;

LAB144:    t304 = (t276 + 4);
    t305 = *((unsigned int *)t276);
    t306 = *((unsigned int *)t304);
    t307 = (t305 || t306);
    if (t307 > 0)
        goto LAB145;

LAB146:    t309 = *((unsigned int *)t276);
    t310 = (~(t309));
    t311 = *((unsigned int *)t304);
    t312 = (t310 || t311);
    if (t312 > 0)
        goto LAB147;

LAB148:    if (*((unsigned int *)t304) > 0)
        goto LAB149;

LAB150:    if (*((unsigned int *)t276) > 0)
        goto LAB151;

LAB152:    memcpy(t275, t313, 8);

LAB153:    goto LAB131;

LAB132:    xsi_vlog_unsigned_bit_combine(t237, 3, t270, 3, t275, 3);
    goto LAB136;

LAB134:    memcpy(t237, t270, 8);
    goto LAB136;

LAB139:    t296 = (t281 + 4);
    *((unsigned int *)t281) = 1;
    *((unsigned int *)t296) = 1;
    goto LAB140;

LAB141:    *((unsigned int *)t276) = 1;
    goto LAB144;

LAB143:    t303 = (t276 + 4);
    *((unsigned int *)t276) = 1;
    *((unsigned int *)t303) = 1;
    goto LAB144;

LAB145:    t308 = ((char*)((ng3)));
    goto LAB146;

LAB147:    t313 = ((char*)((ng3)));
    goto LAB148;

LAB149:    xsi_vlog_unsigned_bit_combine(t275, 3, t308, 3, t313, 3);
    goto LAB153;

LAB151:    memcpy(t275, t308, 8);
    goto LAB153;

}

static void Always_53_3(char *t0)
{
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

LAB0:    t1 = (t0 + 3904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4272);
    *((int *)t2) = 1;
    t3 = (t0 + 3936);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
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

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(54, ng0);

LAB9:    xsi_set_current_line(55, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

}


extern void work_m_09877134433297585744_0735672237_init()
{
	static char *pe[] = {(void *)Cont_32_0,(void *)Cont_33_1,(void *)Always_37_2,(void *)Always_53_3};
	xsi_register_didat("work_m_09877134433297585744_0735672237", "isim/gray_tb_isim_beh.exe.sim/work/m_09877134433297585744_0735672237.didat");
	xsi_register_executes(pe);
}
