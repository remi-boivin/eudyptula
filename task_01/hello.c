#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");              ///< The license type -- this affects runtime behavior
MODULE_AUTHOR("Remi Boivin");      ///< The author -- visible when you use modinfo
MODULE_DESCRIPTION("A simple Linux module.");  ///< The description -- see modinfo


static int __init hello_init(void)
{
    printk(KERN_DEBUG "Hello world!\n");
    return(0);
}

static void __exit hello_cleanup(void)
{
    printk(KERN_DEBUG "ByeBye!\n");
}

module_init(hello_init);
module_exit(hello_cleanup);

