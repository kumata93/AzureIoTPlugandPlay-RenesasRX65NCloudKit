/*
 * sample_network.h
 *
 *  Created on: 2023/02/19
 *      Author: airpl
 */

#ifndef SAMPLE_NETWORK_H_
#define SAMPLE_NETWORK_H_

/* Define the Wi-Fi network parameters. Only WPA2 security is supported.  */
#ifndef WIFI_SSID
#define WIFI_SSID                     ""
#endif /* WIFI_SSID  */

#ifndef WIFI_PASSWORD
#define WIFI_PASSWORD                 ""
#endif /* WIFI_PASSWORD  */

VOID sample_network_configure(NX_IP *ip_ptr, ULONG *dns_server_address);


#endif /* SAMPLE_NETWORK_H_ */
