#define pr_fmt(fmt)	KBUILD_MODNAME "->%s:%d:  " fmt, __func__,__LINE__
#define iamhere(x)	pr_info("IAMHERE: " x "\n")

#include<linux/module.h>
#include<linux/init.h>


static int __init lkm_init(void) {

	pr_info("Hello Cruel World of Kernel Programming!\n");
	iamhere("Before returning");
	return 0;

}


static void __exit lkm_exit(void) {

	pr_info("Wow! You exited early\n");

	iamhere("exiting");
}

module_init(lkm_init);
module_exit(lkm_exit);

MODULE_AUTHOR("Ry");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("A Hello World Module");