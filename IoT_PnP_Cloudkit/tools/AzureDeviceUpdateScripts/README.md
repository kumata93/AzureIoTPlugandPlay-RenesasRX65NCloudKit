# Device Update for IoT Hub Scripts (PowerShell)

CreateRX65NCKUpdate.ps1 for creating import manifest for RX65N-Cloud-Kit project. User can use this script to create three types of import manifest. Note: the path of firmware must include the version string. You can also type **!?** for help. 

## 1. Create import manifest for host update.
Input version and path of host firmware, then firmware **firmware_2.0.0.bin** and manifest **RENESAS.RX65N-CK.2.0.0.importmanifest.json** will be generated in **RENESAS.RX65N-CK.2.0.0** folder.
```
PS > .\CreateRX65NCKUpdate.ps1

cmdlet CreateRX65NCKUpdate.ps1 at command pipeline position 1
Supply values for the following parameters:
(Type !? for Help.)
Version: 2.0.0
HostPath: firmware_2.0.0.bin
```

## 2. Create import manifest for host update and leaf update
Input version, path of host firmware and path of leaf firmware, then firmware **firmware_2.0.0.bin**, **leaf_firmware_2.0.0.bin** and manifest **RENESAS.RX65N-CK.2.0.0.importmanifest.json**, **RENESAS.RX65N-CK-Leaf.2.0.0.importmanifest.json** will be generated in **RENESAS.RX65N-CK.2.0.0** folder.
```
PS > .\CreateRX65NCKUpdate.ps1

cmdlet CreateRX65NCKUpdate.ps1 at command pipeline position 1
Supply values for the following parameters:
(Type !? for Help.)
Version: 2.0.0
HostPath: firmware_2.0.0.bin
LeafPath: ./leaf_firmware_2.0.0.bin
```

## 3. Create import manifest for leaf update
Input version, path of leaf firmware, then firmware **leaf_firmware_2.0.0.bin** and manifest **RENESAS.RX65N-CK.2.0.0.importmanifest.json**, **RENESAS.RX65N-CK-Leaf.2.0.0.importmanifest.json** will be generated in **RENESAS.RX65N-CK.2.0.0** folder.
```
PS > .\CreateRX65NCKUpdate.ps1

cmdlet CreateRX65NCKUpdate.ps1 at command pipeline position 1
Supply values for the following parameters:
(Type !? for Help.)
Version: 2.0.0
HostPath:
LeafPath: ./leaf_firmware_2.0.0.bin
```