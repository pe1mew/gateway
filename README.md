# The Things Gateway

## Software Modernization Effort

This repository represents an ongoing effort to modify and update the original gateway software with the assistance of Large Language Models (LLMs). The complete toolchain is currently running on a dedicated Ubuntu deployment, with development facilitated by Claude-code. This approach allows for systematic analysis, refactoring, and enhancement of the legacy codebase while maintaining compatibility with the existing hardware platform.

Currently, direct flashing via PICkit4 is not possible due to a defective programmer. However, firmware deployment using the SD-card method works reliably and is being used for testing and updates.

### Key Modifications

**18-4-2026 - WiFi Access Point Management:** The original firmware exhibited problematic behavior where the WiFi Access Point remained active even when an Ethernet connection was established and no WiFi credentials were configured. This resulted in unnecessary pollution of the 2,4 WiFi band and user confusion. The modification modifies AP management that automatically disables the Access Point when Ethernet connectivity is available, while ensuring the AP remains accessible for configuration when needed.

**18-4-2026 - Certificate Updates:** Critical security certificates embedded in the firmware have been updated to prevent TLS handshake failures. The original certificates (Baltimore CyberTrust Root expired May 12, 2025, and Amazon Root CA 1 expired October 19, 2025) have been replaced with renewed certificates valid until 2037-2038. The Baltimore CyberTrust Root was removed entirely as DigiCert Global Root G2 (valid to 2028) provides equivalent coverage.

![The Things Gateway](doc/header.png)

## Where to buy

A list of resellers can be found [here](https://www.thethingsnetwork.org/the-things-products).

## Enclosure

Designs of the enclosure can be found in the [enclosure](./enclosure) directory. These designs are licensed under a [Creative Commons Attribution-ShareAlike 4.0 International License](http://creativecommons.org/licenses/by-sa/4.0/).

## Hardware

Designs of the hardware can be found in the [hardware](./hardware) directory. These designs are licensed under a [Creative Commons Attribution-ShareAlike 4.0 International License](http://creativecommons.org/licenses/by-sa/4.0/).

## Firmware

Firmware source code is located in the [firmware](./firmware) directory. Firmware source code is released under a [MIT License](https://opensource.org/licenses/MIT).

## Feature Requests, Bug Reports and Support

- For feature requests and bug reports, create an [issue on Github](https://github.com/TheThingsProducts/gateway/issues)
- Community support on our [forum](https://www.thethingsnetwork.org/forum/c/gateways/the-things-gateway)
- Commercial support by [e-mail](mailto:support@thethingsproducts.com)
