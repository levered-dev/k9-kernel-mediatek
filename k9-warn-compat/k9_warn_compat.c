#include <linux/module.h>

void warn_slowpath_fmt(const char *file, int line, const char *fmt, ...)
{
    /*
     * Compatibility shim for the stock MediaTek bt_drv.ko.
     * Test-only: intentionally suppresses the vendor warning.
     */
    (void)file;
    (void)line;
    (void)fmt;
}
EXPORT_SYMBOL(warn_slowpath_fmt);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Oukitel K9 MediaTek bt_drv warning compatibility");
