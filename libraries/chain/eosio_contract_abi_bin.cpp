namespace eosio { namespace chain {

// Initial value for eosio ABI. This value affects consensus; if different
// nodefoc versions have different versions of the initial eosio ABI, then
// they could potentially fork. See https://github.com/FOC/eos/issues/7794
//
// This is a capture of the ABI produced by versions 1.7 and 1.8.

unsigned char eosio_abi_bin[2132] = {
   0x0e, 0x65, 0x6f, 0x73, 0x69, 0x6f, 0x3a, 0x3a, 0x61, 0x62, 0x69, 0x2f,
   0x31, 0x2e, 0x30, 0x07, 0x0c, 0x61, 0x63, 0x63, 0x6f, 0x75, 0x6e, 0x74,
   0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x0f, 0x70,
   0x65, 0x72, 0x6d, 0x69, 0x73, 0x73, 0x69, 0x6f, 0x6e, 0x5f, 0x6e, 0x61,
   0x6d, 0x65, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x0b, 0x61, 0x63, 0x74, 0x69,
   0x6f, 0x6e, 0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x04, 0x6e, 0x61, 0x6d, 0x65,
   0x0a, 0x74, 0x61, 0x62, 0x6c, 0x65, 0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x04,
   0x6e, 0x61, 0x6d, 0x65, 0x13, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x61, 0x63,
   0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x69, 0x64, 0x5f, 0x74, 0x79, 0x70, 0x65,
   0x0b, 0x63, 0x68, 0x65, 0x63, 0x6b, 0x73, 0x75, 0x6d, 0x32, 0x35, 0x36,
   0x0d, 0x62, 0x6c, 0x6f, 0x63, 0x6b, 0x5f, 0x69, 0x64, 0x5f, 0x74, 0x79,
   0x70, 0x65, 0x0b, 0x63, 0x68, 0x65, 0x63, 0x6b, 0x73, 0x75, 0x6d, 0x32,
   0x35, 0x36, 0x0b, 0x77, 0x65, 0x69, 0x67, 0x68, 0x74, 0x5f, 0x74, 0x79,
   0x70, 0x65, 0x06, 0x75, 0x69, 0x6e, 0x74, 0x31, 0x36, 0x16, 0x10, 0x70,
   0x65, 0x72, 0x6d, 0x69, 0x73, 0x73, 0x69, 0x6f, 0x6e, 0x5f, 0x6c, 0x65,
   0x76, 0x65, 0x6c, 0x00, 0x02, 0x05, 0x61, 0x63, 0x74, 0x6f, 0x72, 0x0c,
   0x61, 0x63, 0x63, 0x6f, 0x75, 0x6e, 0x74, 0x5f, 0x6e, 0x61, 0x6d, 0x65,
   0x0a, 0x70, 0x65, 0x72, 0x6d, 0x69, 0x73, 0x73, 0x69, 0x6f, 0x6e, 0x0f,
   0x70, 0x65, 0x72, 0x6d, 0x69, 0x73, 0x73, 0x69, 0x6f, 0x6e, 0x5f, 0x6e,
   0x61, 0x6d, 0x65, 0x06, 0x61, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x04,
   0x07, 0x61, 0x63, 0x63, 0x6f, 0x75, 0x6e, 0x74, 0x0c, 0x61, 0x63, 0x63,
   0x6f, 0x75, 0x6e, 0x74, 0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x04, 0x6e, 0x61,
   0x6d, 0x65, 0x0b, 0x61, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x6e, 0x61,
   0x6d, 0x65, 0x0d, 0x61, 0x75, 0x74, 0x68, 0x6f, 0x72, 0x69, 0x7a, 0x61,
   0x74, 0x69, 0x6f, 0x6e, 0x12, 0x70, 0x65, 0x72, 0x6d, 0x69, 0x73, 0x73,
   0x69, 0x6f, 0x6e, 0x5f, 0x6c, 0x65, 0x76, 0x65, 0x6c, 0x5b, 0x5d, 0x04,
   0x64, 0x61, 0x74, 0x61, 0x05, 0x62, 0x79, 0x74, 0x65, 0x73, 0x09, 0x65,
   0x78, 0x74, 0x65, 0x6e, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x02, 0x04, 0x74,
   0x79, 0x70, 0x65, 0x06, 0x75, 0x69, 0x6e, 0x74, 0x31, 0x36, 0x04, 0x64,
   0x61, 0x74, 0x61, 0x05, 0x62, 0x79, 0x74, 0x65, 0x73, 0x12, 0x74, 0x72,
   0x61, 0x6e, 0x73, 0x61, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x68, 0x65,
   0x61, 0x64, 0x65, 0x72, 0x00, 0x06, 0x0a, 0x65, 0x78, 0x70, 0x69, 0x72,
   0x61, 0x74, 0x69, 0x6f, 0x6e, 0x0e, 0x74, 0x69, 0x6d, 0x65, 0x5f, 0x70,
   0x6f, 0x69, 0x6e, 0x74, 0x5f, 0x73, 0x65, 0x63, 0x0d, 0x72, 0x65, 0x66,
   0x5f, 0x62, 0x6c, 0x6f, 0x63, 0x6b, 0x5f, 0x6e, 0x75, 0x6d, 0x06, 0x75,
   0x69, 0x6e, 0x74, 0x31, 0x36, 0x10, 0x72, 0x65, 0x66, 0x5f, 0x62, 0x6c,
   0x6f, 0x63, 0x6b, 0x5f, 0x70, 0x72, 0x65, 0x66, 0x69, 0x78, 0x06, 0x75,
   0x69, 0x6e, 0x74, 0x33, 0x32, 0x13, 0x6d, 0x61, 0x78, 0x5f, 0x6e, 0x65,
   0x74, 0x5f, 0x75, 0x73, 0x61, 0x67, 0x65, 0x5f, 0x77, 0x6f, 0x72, 0x64,
   0x73, 0x09, 0x76, 0x61, 0x72, 0x75, 0x69, 0x6e, 0x74, 0x33, 0x32, 0x10,
   0x6d, 0x61, 0x78, 0x5f, 0x63, 0x70, 0x75, 0x5f, 0x75, 0x73, 0x61, 0x67,
   0x65, 0x5f, 0x6d, 0x73, 0x05, 0x75, 0x69, 0x6e, 0x74, 0x38, 0x09, 0x64,
   0x65, 0x6c, 0x61, 0x79, 0x5f, 0x73, 0x65, 0x63, 0x09, 0x76, 0x61, 0x72,
   0x75, 0x69, 0x6e, 0x74, 0x33, 0x32, 0x0b, 0x74, 0x72, 0x61, 0x6e, 0x73,
   0x61, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x12, 0x74, 0x72, 0x61, 0x6e, 0x73,
   0x61, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x68, 0x65, 0x61, 0x64, 0x65,
   0x72, 0x03, 0x14, 0x63, 0x6f, 0x6e, 0x74, 0x65, 0x78, 0x74, 0x5f, 0x66,
   0x72, 0x65, 0x65, 0x5f, 0x61, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x08,
   0x61, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5b, 0x5d, 0x07, 0x61, 0x63, 0x74,
   0x69, 0x6f, 0x6e, 0x73, 0x08, 0x61, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5b,
   0x5d, 0x16, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x61, 0x63, 0x74, 0x69, 0x6f,
   0x6e, 0x5f, 0x65, 0x78, 0x74, 0x65, 0x6e, 0x73, 0x69, 0x6f, 0x6e, 0x73,
   0x0b, 0x65, 0x78, 0x74, 0x65, 0x6e, 0x73, 0x69, 0x6f, 0x6e, 0x5b, 0x5d,
   0x0c, 0x70, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x65, 0x72, 0x5f, 0x6b, 0x65,
   0x79, 0x00, 0x02, 0x0d, 0x70, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x65, 0x72,
   0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x0c, 0x61, 0x63, 0x63, 0x6f, 0x75, 0x6e,
   0x74, 0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x11, 0x62, 0x6c, 0x6f, 0x63, 0x6b,
   0x5f, 0x73, 0x69, 0x67, 0x6e, 0x69, 0x6e, 0x67, 0x5f, 0x6b, 0x65, 0x79,
   0x0a, 0x70, 0x75, 0x62, 0x6c, 0x69, 0x63, 0x5f, 0x6b, 0x65, 0x79, 0x11,
   0x70, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x65, 0x72, 0x5f, 0x73, 0x63, 0x68,
   0x65, 0x64, 0x75, 0x6c, 0x65, 0x00, 0x02, 0x07, 0x76, 0x65, 0x72, 0x73,
   0x69, 0x6f, 0x6e, 0x06, 0x75, 0x69, 0x6e, 0x74, 0x33, 0x32, 0x09, 0x70,
   0x72, 0x6f, 0x64, 0x75, 0x63, 0x65, 0x72, 0x73, 0x0e, 0x70, 0x72, 0x6f,
   0x64, 0x75, 0x63, 0x65, 0x72, 0x5f, 0x6b, 0x65, 0x79, 0x5b, 0x5d, 0x0c,
   0x62, 0x6c, 0x6f, 0x63, 0x6b, 0x5f, 0x68, 0x65, 0x61, 0x64, 0x65, 0x72,
   0x00, 0x09, 0x09, 0x74, 0x69, 0x6d, 0x65, 0x73, 0x74, 0x61, 0x6d, 0x70,
   0x06, 0x75, 0x69, 0x6e, 0x74, 0x33, 0x32, 0x08, 0x70, 0x72, 0x6f, 0x64,
   0x75, 0x63, 0x65, 0x72, 0x0c, 0x61, 0x63, 0x63, 0x6f, 0x75, 0x6e, 0x74,
   0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x09, 0x63, 0x6f, 0x6e, 0x66, 0x69, 0x72,
   0x6d, 0x65, 0x64, 0x06, 0x75, 0x69, 0x6e, 0x74, 0x31, 0x36, 0x08, 0x70,
   0x72, 0x65, 0x76, 0x69, 0x6f, 0x75, 0x73, 0x0d, 0x62, 0x6c, 0x6f, 0x63,
   0x6b, 0x5f, 0x69, 0x64, 0x5f, 0x74, 0x79, 0x70, 0x65, 0x11, 0x74, 0x72,
   0x61, 0x6e, 0x73, 0x61, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x6d, 0x72,
   0x6f, 0x6f, 0x74, 0x0b, 0x63, 0x68, 0x65, 0x63, 0x6b, 0x73, 0x75, 0x6d,
   0x32, 0x35, 0x36, 0x0c, 0x61, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x6d,
   0x72, 0x6f, 0x6f, 0x74, 0x0b, 0x63, 0x68, 0x65, 0x63, 0x6b, 0x73, 0x75,
   0x6d, 0x32, 0x35, 0x36, 0x10, 0x73, 0x63, 0x68, 0x65, 0x64, 0x75, 0x6c,
   0x65, 0x5f, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x06, 0x75, 0x69,
   0x6e, 0x74, 0x33, 0x32, 0x0d, 0x6e, 0x65, 0x77, 0x5f, 0x70, 0x72, 0x6f,
   0x64, 0x75, 0x63, 0x65, 0x72, 0x73, 0x12, 0x70, 0x72, 0x6f, 0x64, 0x75,
   0x63, 0x65, 0x72, 0x5f, 0x73, 0x63, 0x68, 0x65, 0x64, 0x75, 0x6c, 0x65,
   0x3f, 0x11, 0x68, 0x65, 0x61, 0x64, 0x65, 0x72, 0x5f, 0x65, 0x78, 0x74,
   0x65, 0x6e, 0x73, 0x69, 0x6f, 0x6e, 0x73, 0x0b, 0x65, 0x78, 0x74, 0x65,
   0x6e, 0x73, 0x69, 0x6f, 0x6e, 0x5b, 0x5d, 0x0a, 0x6b, 0x65, 0x79, 0x5f,
   0x77, 0x65, 0x69, 0x67, 0x68, 0x74, 0x00, 0x02, 0x03, 0x6b, 0x65, 0x79,
   0x0a, 0x70, 0x75, 0x62, 0x6c, 0x69, 0x63, 0x5f, 0x6b, 0x65, 0x79, 0x06,
   0x77, 0x65, 0x69, 0x67, 0x68, 0x74, 0x0b, 0x77, 0x65, 0x69, 0x67, 0x68,
   0x74, 0x5f, 0x74, 0x79, 0x70, 0x65, 0x17, 0x70, 0x65, 0x72, 0x6d, 0x69,
   0x73, 0x73, 0x69, 0x6f, 0x6e, 0x5f, 0x6c, 0x65, 0x76, 0x65, 0x6c, 0x5f,
   0x77, 0x65, 0x69, 0x67, 0x68, 0x74, 0x00, 0x02, 0x0a, 0x70, 0x65, 0x72,
   0x6d, 0x69, 0x73, 0x73, 0x69, 0x6f, 0x6e, 0x10, 0x70, 0x65, 0x72, 0x6d,
   0x69, 0x73, 0x73, 0x69, 0x6f, 0x6e, 0x5f, 0x6c, 0x65, 0x76, 0x65, 0x6c,
   0x06, 0x77, 0x65, 0x69, 0x67, 0x68, 0x74, 0x0b, 0x77, 0x65, 0x69, 0x67,
   0x68, 0x74, 0x5f, 0x74, 0x79, 0x70, 0x65, 0x0b, 0x77, 0x61, 0x69, 0x74,
   0x5f, 0x77, 0x65, 0x69, 0x67, 0x68, 0x74, 0x00, 0x02, 0x08, 0x77, 0x61,
   0x69, 0x74, 0x5f, 0x73, 0x65, 0x63, 0x06, 0x75, 0x69, 0x6e, 0x74, 0x33,
   0x32, 0x06, 0x77, 0x65, 0x69, 0x67, 0x68, 0x74, 0x0b, 0x77, 0x65, 0x69,
   0x67, 0x68, 0x74, 0x5f, 0x74, 0x79, 0x70, 0x65, 0x09, 0x61, 0x75, 0x74,
   0x68, 0x6f, 0x72, 0x69, 0x74, 0x79, 0x00, 0x04, 0x09, 0x74, 0x68, 0x72,
   0x65, 0x73, 0x68, 0x6f, 0x6c, 0x64, 0x06, 0x75, 0x69, 0x6e, 0x74, 0x33,
   0x32, 0x04, 0x6b, 0x65, 0x79, 0x73, 0x0c, 0x6b, 0x65, 0x79, 0x5f, 0x77,
   0x65, 0x69, 0x67, 0x68, 0x74, 0x5b, 0x5d, 0x08, 0x61, 0x63, 0x63, 0x6f,
   0x75, 0x6e, 0x74, 0x73, 0x19, 0x70, 0x65, 0x72, 0x6d, 0x69, 0x73, 0x73,
   0x69, 0x6f, 0x6e, 0x5f, 0x6c, 0x65, 0x76, 0x65, 0x6c, 0x5f, 0x77, 0x65,
   0x69, 0x67, 0x68, 0x74, 0x5b, 0x5d, 0x05, 0x77, 0x61, 0x69, 0x74, 0x73,
   0x0d, 0x77, 0x61, 0x69, 0x74, 0x5f, 0x77, 0x65, 0x69, 0x67, 0x68, 0x74,
   0x5b, 0x5d, 0x0a, 0x6e, 0x65, 0x77, 0x61, 0x63, 0x63, 0x6f, 0x75, 0x6e,
   0x74, 0x00, 0x04, 0x07, 0x63, 0x72, 0x65, 0x61, 0x74, 0x6f, 0x72, 0x0c,
   0x61, 0x63, 0x63, 0x6f, 0x75, 0x6e, 0x74, 0x5f, 0x6e, 0x61, 0x6d, 0x65,
   0x04, 0x6e, 0x61, 0x6d, 0x65, 0x0c, 0x61, 0x63, 0x63, 0x6f, 0x75, 0x6e,
   0x74, 0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x05, 0x6f, 0x77, 0x6e, 0x65, 0x72,
   0x09, 0x61, 0x75, 0x74, 0x68, 0x6f, 0x72, 0x69, 0x74, 0x79, 0x06, 0x61,
   0x63, 0x74, 0x69, 0x76, 0x65, 0x09, 0x61, 0x75, 0x74, 0x68, 0x6f, 0x72,
   0x69, 0x74, 0x79, 0x07, 0x73, 0x65, 0x74, 0x63, 0x6f, 0x64, 0x65, 0x00,
   0x04, 0x07, 0x61, 0x63, 0x63, 0x6f, 0x75, 0x6e, 0x74, 0x0c, 0x61, 0x63,
   0x63, 0x6f, 0x75, 0x6e, 0x74, 0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x06, 0x76,
   0x6d, 0x74, 0x79, 0x70, 0x65, 0x05, 0x75, 0x69, 0x6e, 0x74, 0x38, 0x09,
   0x76, 0x6d, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x05, 0x75, 0x69,
   0x6e, 0x74, 0x38, 0x04, 0x63, 0x6f, 0x64, 0x65, 0x05, 0x62, 0x79, 0x74,
   0x65, 0x73, 0x06, 0x73, 0x65, 0x74, 0x61, 0x62, 0x69, 0x00, 0x02, 0x07,
   0x61, 0x63, 0x63, 0x6f, 0x75, 0x6e, 0x74, 0x0c, 0x61, 0x63, 0x63, 0x6f,
   0x75, 0x6e, 0x74, 0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x03, 0x61, 0x62, 0x69,
   0x05, 0x62, 0x79, 0x74, 0x65, 0x73, 0x0a, 0x75, 0x70, 0x64, 0x61, 0x74,
   0x65, 0x61, 0x75, 0x74, 0x68, 0x00, 0x04, 0x07, 0x61, 0x63, 0x63, 0x6f,
   0x75, 0x6e, 0x74, 0x0c, 0x61, 0x63, 0x63, 0x6f, 0x75, 0x6e, 0x74, 0x5f,
   0x6e, 0x61, 0x6d, 0x65, 0x0a, 0x70, 0x65, 0x72, 0x6d, 0x69, 0x73, 0x73,
   0x69, 0x6f, 0x6e, 0x0f, 0x70, 0x65, 0x72, 0x6d, 0x69, 0x73, 0x73, 0x69,
   0x6f, 0x6e, 0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x06, 0x70, 0x61, 0x72, 0x65,
   0x6e, 0x74, 0x0f, 0x70, 0x65, 0x72, 0x6d, 0x69, 0x73, 0x73, 0x69, 0x6f,
   0x6e, 0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x04, 0x61, 0x75, 0x74, 0x68, 0x09,
   0x61, 0x75, 0x74, 0x68, 0x6f, 0x72, 0x69, 0x74, 0x79, 0x0a, 0x64, 0x65,
   0x6c, 0x65, 0x74, 0x65, 0x61, 0x75, 0x74, 0x68, 0x00, 0x02, 0x07, 0x61,
   0x63, 0x63, 0x6f, 0x75, 0x6e, 0x74, 0x0c, 0x61, 0x63, 0x63, 0x6f, 0x75,
   0x6e, 0x74, 0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x0a, 0x70, 0x65, 0x72, 0x6d,
   0x69, 0x73, 0x73, 0x69, 0x6f, 0x6e, 0x0f, 0x70, 0x65, 0x72, 0x6d, 0x69,
   0x73, 0x73, 0x69, 0x6f, 0x6e, 0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x08, 0x6c,
   0x69, 0x6e, 0x6b, 0x61, 0x75, 0x74, 0x68, 0x00, 0x04, 0x07, 0x61, 0x63,
   0x63, 0x6f, 0x75, 0x6e, 0x74, 0x0c, 0x61, 0x63, 0x63, 0x6f, 0x75, 0x6e,
   0x74, 0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x04, 0x63, 0x6f, 0x64, 0x65, 0x0c,
   0x61, 0x63, 0x63, 0x6f, 0x75, 0x6e, 0x74, 0x5f, 0x6e, 0x61, 0x6d, 0x65,
   0x04, 0x74, 0x79, 0x70, 0x65, 0x0b, 0x61, 0x63, 0x74, 0x69, 0x6f, 0x6e,
   0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x0b, 0x72, 0x65, 0x71, 0x75, 0x69, 0x72,
   0x65, 0x6d, 0x65, 0x6e, 0x74, 0x0f, 0x70, 0x65, 0x72, 0x6d, 0x69, 0x73,
   0x73, 0x69, 0x6f, 0x6e, 0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x0a, 0x75, 0x6e,
   0x6c, 0x69, 0x6e, 0x6b, 0x61, 0x75, 0x74, 0x68, 0x00, 0x03, 0x07, 0x61,
   0x63, 0x63, 0x6f, 0x75, 0x6e, 0x74, 0x0c, 0x61, 0x63, 0x63, 0x6f, 0x75,
   0x6e, 0x74, 0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x04, 0x63, 0x6f, 0x64, 0x65,
   0x0c, 0x61, 0x63, 0x63, 0x6f, 0x75, 0x6e, 0x74, 0x5f, 0x6e, 0x61, 0x6d,
   0x65, 0x04, 0x74, 0x79, 0x70, 0x65, 0x0b, 0x61, 0x63, 0x74, 0x69, 0x6f,
   0x6e, 0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x0b, 0x63, 0x61, 0x6e, 0x63, 0x65,
   0x6c, 0x64, 0x65, 0x6c, 0x61, 0x79, 0x00, 0x02, 0x0e, 0x63, 0x61, 0x6e,
   0x63, 0x65, 0x6c, 0x69, 0x6e, 0x67, 0x5f, 0x61, 0x75, 0x74, 0x68, 0x10,
   0x70, 0x65, 0x72, 0x6d, 0x69, 0x73, 0x73, 0x69, 0x6f, 0x6e, 0x5f, 0x6c,
   0x65, 0x76, 0x65, 0x6c, 0x06, 0x74, 0x72, 0x78, 0x5f, 0x69, 0x64, 0x13,
   0x74, 0x72, 0x61, 0x6e, 0x73, 0x61, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x5f,
   0x69, 0x64, 0x5f, 0x74, 0x79, 0x70, 0x65, 0x07, 0x6f, 0x6e, 0x65, 0x72,
   0x72, 0x6f, 0x72, 0x00, 0x02, 0x09, 0x73, 0x65, 0x6e, 0x64, 0x65, 0x72,
   0x5f, 0x69, 0x64, 0x07, 0x75, 0x69, 0x6e, 0x74, 0x31, 0x32, 0x38, 0x08,
   0x73, 0x65, 0x6e, 0x74, 0x5f, 0x74, 0x72, 0x78, 0x05, 0x62, 0x79, 0x74,
   0x65, 0x73, 0x07, 0x6f, 0x6e, 0x62, 0x6c, 0x6f, 0x63, 0x6b, 0x00, 0x01,
   0x06, 0x68, 0x65, 0x61, 0x64, 0x65, 0x72, 0x0c, 0x62, 0x6c, 0x6f, 0x63,
   0x6b, 0x5f, 0x68, 0x65, 0x61, 0x64, 0x65, 0x72, 0x0a, 0x00, 0x40, 0x9e,
   0x9a, 0x22, 0x64, 0xb8, 0x9a, 0x0a, 0x6e, 0x65, 0x77, 0x61, 0x63, 0x63,
   0x6f, 0x75, 0x6e, 0x74, 0x00, 0x00, 0x00, 0x00, 0x40, 0x25, 0x8a, 0xb2,
   0xc2, 0x07, 0x73, 0x65, 0x74, 0x63, 0x6f, 0x64, 0x65, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xb8, 0x63, 0xb2, 0xc2, 0x06, 0x73, 0x65, 0x74, 0x61, 0x62,
   0x69, 0x00, 0x00, 0x40, 0xcb, 0xda, 0xa8, 0x6c, 0x52, 0xd5, 0x0a, 0x75,
   0x70, 0x64, 0x61, 0x74, 0x65, 0x61, 0x75, 0x74, 0x68, 0x00, 0x00, 0x40,
   0xcb, 0xda, 0xa8, 0xac, 0xa2, 0x4a, 0x0a, 0x64, 0x65, 0x6c, 0x65, 0x74,
   0x65, 0x61, 0x75, 0x74, 0x68, 0x00, 0x00, 0x00, 0x00, 0x2d, 0x6b, 0x03,
   0xa7, 0x8b, 0x08, 0x6c, 0x69, 0x6e, 0x6b, 0x61, 0x75, 0x74, 0x68, 0x00,
   0x00, 0x40, 0xcb, 0xda, 0xc0, 0xe9, 0xe2, 0xd4, 0x0a, 0x75, 0x6e, 0x6c,
   0x69, 0x6e, 0x6b, 0x61, 0x75, 0x74, 0x68, 0x00, 0x00, 0xbc, 0x89, 0x2a,
   0x45, 0x85, 0xa6, 0x41, 0x0b, 0x63, 0x61, 0x6e, 0x63, 0x65, 0x6c, 0x64,
   0x65, 0x6c, 0x61, 0x79, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xd2, 0x7b, 0xd5,
   0xa4, 0x07, 0x6f, 0x6e, 0x65, 0x72, 0x72, 0x6f, 0x72, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x22, 0x1a, 0xcf, 0xa4, 0x07, 0x6f, 0x6e, 0x62, 0x6c, 0x6f,
   0x63, 0x6b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

} } /// eosio::chain
