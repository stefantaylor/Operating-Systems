#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0x64e8435, "struct_module" },
	{ 0x5e1389a, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0x7c9049bf, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0x446b1a3e, "complete_and_exit" },
	{ 0xbaadbd11, "__wake_up" },
	{ 0x1b7d4074, "printk" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0x7e9ebb05, "kernel_thread" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E82EC08E02B063536E29B3A");
