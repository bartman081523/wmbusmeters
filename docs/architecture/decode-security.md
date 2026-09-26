# Decode security (modes 5, 7 and 10)

Fail-closed behaviour with once-per-telegram warnings, decision 0002.

```mermaid
flowchart TD
    T["Encrypted telegram"] --> K{"Key configured?"}
    K -- "no" --> NK["No decode<br/>warn once"]
    K -- "yes" --> SM{"TPL security mode"}
    SM -- "5 (AES CBC, IV)" --> CBC["Decrypt blocks<br/>verify 2f2f check bytes"]
    SM -- "7 (AES CBC, no IV)" --> MAC["Verify MAC<br/>checkMAC"]
    SM -- "10 (OMS profile D)" --> CCM["Decrypt blocks<br/>verify aes-ccm tag"]
    MAC -- "mac ok" --> OK["Payload accepted"]
    MAC -- "mac failed" --> IG["telegram ignored<br/>warn once"]
    CBC -- "check bytes ok" --> OK
    CBC -- "check bytes failed" --> IG
    CCM -- "tag ok" --> OK
    CCM -- "tag failed" --> FD["FAILED_DECODE<br/>telegram ignored<br/>warn once"]
```

Mode 5 has no MAC: integrity is the 0x2f2f decrypt check bytes. Mode 7
is the variant that verifies the AFL MAC before decrypting (MAC key
from the KDF). Only mode 10 reports FAILED_DECODE, on tag failure. See
`Telegram::potentiallyDecrypt` in `src/wmbus.cc`.

Real telegrams for both paths live in `drivers/src/kamwater.xmq` and in
`tests/test_qwds_walkby_nokey.sh`.