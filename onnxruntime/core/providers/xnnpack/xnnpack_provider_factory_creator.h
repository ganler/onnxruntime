// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include <memory>

#include "core/framework/provider_options.h"
#include "core/providers/providers.h"

namespace onnxruntime {

struct XnnpackProviderFactoryCreator {
  static std::shared_ptr<IExecutionProviderFactory> Create(const ProviderOptions& provider_options);
};

}  // namespace onnxruntime
