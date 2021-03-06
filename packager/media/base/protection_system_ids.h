// Copyright 2018 Google LLC. All rights reserved.
//
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file or at
// https://developers.google.com/open-source/licenses/bsd

#ifndef PACKAGER_MEDIA_BASE_PROTECTION_SYSTEM_IDS_H_
#define PACKAGER_MEDIA_BASE_PROTECTION_SYSTEM_IDS_H_

namespace shaka {
namespace media {

// Common SystemID defined by EME, which requires Key System implementations
// supporting ISO Common Encryption to support this SystemID and format.
// https://goo.gl/kUv2Xd
const uint8_t kCommonSystemId[] = {0x10, 0x77, 0xef, 0xec, 0xc0, 0xb2,
                                   0x4d, 0x02, 0xac, 0xe3, 0x3c, 0x1e,
                                   0x52, 0xe2, 0xfb, 0x4b};

// Unofficial FairPlay system id extracted from
// https://forums.developer.apple.com/thread/6185.
const uint8_t kFairPlaySystemId[] = {0x29, 0x70, 0x1F, 0xE4, 0x3C, 0xC7,
                                     0x4A, 0x34, 0x8C, 0x5B, 0xAE, 0x90,
                                     0xC7, 0x43, 0x9A, 0x47};

const uint8_t kPlayReadySystemId[] = {0x9a, 0x04, 0xf0, 0x79, 0x98, 0x40,
                                      0x42, 0x86, 0xab, 0x92, 0xe6, 0x5b,
                                      0xe0, 0x88, 0x5f, 0x95};

const uint8_t kWidevineSystemId[] = {0xed, 0xef, 0x8b, 0xa9, 0x79, 0xd6,
                                     0x4a, 0xce, 0xa3, 0xc8, 0x27, 0xdc,
                                     0xd5, 0x1d, 0x21, 0xed};

}  // namespace media
}  // namespace shaka

#endif  // PACKAGER_MEDIA_BASE_PROTECTION_SYSTEM_IDS_H_
