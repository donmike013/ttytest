#include <linux/types.h>
#include <linux/module.h>
#include <linux/init.h>

#define DEBUG 1

static int __init ttytest_init (void) {
	#if(DEBUG == 1)
	printk(KERN_ALERT "#### in ttytest_init\n");
	#endif
	return 0;
}

static void __exit ttytest_exit (void) {
	#if(DEBUG == 1)
	printk(KERN_ALERT "#### in ttytest_exit\n");
	printk(KERN_ALERT "####################\n");
	#endif
	return;
}

MODULE_AUTHOR("Don Michael <donmichael013@gmail.com>");
MODULE_DESCRIPTION("Driver for ttytest port");
MODULE_LICENSE("GPL");

module_init(ttytest_init);
module_exit(ttytest_exit);
