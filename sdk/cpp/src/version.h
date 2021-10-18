/**
 *   Copyright 2021 Alibaba, Inc. and its affiliates. All Rights Reserved.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.

 *   \author   Haichao.chc
 *   \date     Apr 2021
 *   \brief    Proxima Search Client version information
 */

#pragma once

#ifdef proxima_search_client_VERSION
#define PROXIMA_SEARCH_CLIENT_VERSION_STRING proxima_search_client_VERSION
#else
#define PROXIMA_SEARCH_CLIENT_VERSION_STRING "unknown"
#endif

namespace proxima {
namespace be {

struct Version {
  static const char *String(void) {
    return PROXIMA_SEARCH_CLIENT_VERSION_STRING;
  }
};


}  // namespace be
}  // end namespace proxima