#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>


MODULE_LICENSE("GPL");
MODULE_AUTHOR("Andres Silva Ortega");
MODULE_DESCRIPTION("Example Linux Kernel Module.");
MODULE_VERSION("0.01");

static int __init example_init(void) {
 printk(KERN_INFO "MODULO INICALIZADO\n");
 return 0;
}

static void __exit example_exit(void) {
 printk(KERN_INFO "MODULO FINALIZADO\n");
}

module_init(example_init);
module_exit(example_exit);
