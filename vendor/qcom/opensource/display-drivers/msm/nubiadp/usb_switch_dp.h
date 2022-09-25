#ifndef USB_SWITCH_DP_H
#define USB_SWITCH_DP_H

#include <linux/of.h>
#include <linux/notifier.h>

enum switcher_function {
	SWITCHER_MIC_GND_SWAP,
	SWITCHER_USBC_ORIENTATION_CC1,
	SWITCHER_USBC_ORIENTATION_CC2,
	SWITCHER_USBC_DISPLAYPORT_DISCONNECTED,
	SWITCHER_EVENT_MAX,
};

void nubia_usb_switch_dp_enable(int en);
int switcher_switch_event(struct device_node *node,
			  enum switcher_function event);
void get_dp_state(int *state);
#endif
