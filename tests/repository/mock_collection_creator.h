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

 *   \author   Dianzhang.Chen
 *   \date     Jan 2021
 *   \brief    Interface of mock collection creator
 */

#pragma once

#include <gmock/gmock.h>
#include "repository/collection_creator.h"

using namespace proxima::be::repository;
using namespace ::testing;

namespace proxima {
namespace be {
namespace repository {

class MockCollectionCreator;
using MockCollectionCreatorPtr = std::shared_ptr<MockCollectionCreator>;

/*! Mysql Handler
 */
class MockCollectionCreator : public CollectionCreator {
 public:
  //! Constructor
  MockCollectionCreator() = default;

  //! Destructor
  ~MockCollectionCreator() = default;

  //! Init Mysql Handler
  MOCK_METHOD(CollectionPtr, create, (const CollectionInfo &info),
              (const override));
};

}  // namespace repository
}  // namespace be
}  // namespace proxima