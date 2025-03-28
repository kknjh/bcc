/* SPDX-License-Identifier: (LGPL-2.1 OR BSD-2-Clause) */
#ifndef __IOCTL_NAMES_H
#define __IOCTL_NAMES_H

static const struct ioctl_name {
	const char *name;
	unsigned long value;
} ioctl_names[] = {
	/* generated from sockios.h by:
	 * grep -E '#define SIO\S*\s*0x' sockios.h | awk '{print "{\""$2"\", "$3"},"}'
	 */
	{"SIOCADDRT", 0x890B},
	{"SIOCDELRT", 0x890C},
	{"SIOCRTMSG", 0x890D},
	{"SIOCGIFNAME", 0x8910},
	{"SIOCSIFLINK", 0x8911},
	{"SIOCGIFCONF", 0x8912},
	{"SIOCGIFFLAGS", 0x8913},
	{"SIOCSIFFLAGS", 0x8914},
	{"SIOCGIFADDR", 0x8915},
	{"SIOCSIFADDR", 0x8916},
	{"SIOCGIFDSTADDR", 0x8917},
	{"SIOCSIFDSTADDR", 0x8918},
	{"SIOCGIFBRDADDR", 0x8919},
	{"SIOCSIFBRDADDR", 0x891a},
	{"SIOCGIFNETMASK", 0x891b},
	{"SIOCSIFNETMASK", 0x891c},
	{"SIOCGIFMETRIC", 0x891d},
	{"SIOCSIFMETRIC", 0x891e},
	{"SIOCGIFMEM", 0x891f},
	{"SIOCSIFMEM", 0x8920},
	{"SIOCGIFMTU", 0x8921},
	{"SIOCSIFMTU", 0x8922},
	{"SIOCSIFNAME", 0x8923},
	{"SIOCGIFENCAP", 0x8925},
	{"SIOCSIFENCAP", 0x8926},
	{"SIOCGIFHWADDR", 0x8927},
	{"SIOCGIFSLAVE", 0x8929},
	{"SIOCSIFSLAVE", 0x8930},
	{"SIOCADDMULTI", 0x8931},
	{"SIOCDELMULTI", 0x8932},
	{"SIOCGIFINDEX", 0x8933},
	{"SIOCSIFPFLAGS", 0x8934},
	{"SIOCGIFPFLAGS", 0x8935},
	{"SIOCDIFADDR", 0x8936},
	{"SIOCGIFCOUNT", 0x8938},
	{"SIOCGIFBR", 0x8940},
	{"SIOCSIFBR", 0x8941},
	{"SIOCGIFTXQLEN", 0x8942},
	{"SIOCSIFTXQLEN", 0x8943},
	{"SIOCETHTOOL", 0x8946},
	{"SIOCGMIIPHY", 0x8947},
	{"SIOCGMIIREG", 0x8948},
	{"SIOCSMIIREG", 0x8949},
	{"SIOCWANDEV", 0x894A},
	{"SIOCOUTQNSD", 0x894B},
	{"SIOCGSKNS", 0x894C},
	{"SIOCDARP", 0x8953},
	{"SIOCGARP", 0x8954},
	{"SIOCSARP", 0x8955},
	{"SIOCDRARP", 0x8960},
	{"SIOCGRARP", 0x8961},
	{"SIOCSRARP", 0x8962},
	{"SIOCGIFMAP", 0x8970},
	{"SIOCSIFMAP", 0x8971},
	{"SIOCADDDLCI", 0x8980},
	{"SIOCDELDLCI", 0x8981},
	{"SIOCGIFVLAN", 0x8982},
	{"SIOCSIFVLAN", 0x8983},
	{"SIOCBONDENSLAVE", 0x8990},
	{"SIOCBONDRELEASE", 0x8991},
	{"SIOCBONDSETHWADDR", 0x8992},
	{"SIOCBONDSLAVEINFOQUERY", 0x8993},
	{"SIOCBONDINFOQUERY", 0x8994},
	{"SIOCBONDCHANGEACTIVE", 0x8995},
	{"SIOCBRADDBR", 0x89a0},
	{"SIOCBRDELBR", 0x89a1},
	{"SIOCBRADDIF", 0x89a2},
	{"SIOCBRDELIF", 0x89a3},
	{"SIOCSHWTSTAMP", 0x89b0},
	{"SIOCGHWTSTAMP", 0x89b1},
	{"SIOCDEVPRIVATE", 0x89F0},
	{"SIOCPROTOPRIVATE", 0x89E0},
};
#endif
