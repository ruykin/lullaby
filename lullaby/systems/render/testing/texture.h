/*
Copyright 2017-2019 Google Inc. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS-IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef LULLABY_SYSTEMS_RENDER_TESTING_TEXTURE_H_
#define LULLABY_SYSTEMS_RENDER_TESTING_TEXTURE_H_

#include "lullaby/systems/render/texture.h"

namespace lull {

// A mock texture implementation that can be used to create non-null
// TexturePtrs in test code.
class Texture {};

}  // namespace lull

#endif  // LULLABY_SYSTEMS_RENDER_TESTING_TEXTURE_H__
