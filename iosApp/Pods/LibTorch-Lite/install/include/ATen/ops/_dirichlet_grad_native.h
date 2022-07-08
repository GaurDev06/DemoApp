#pragma once

// @generated by torchgen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>


namespace at {
namespace native {

TORCH_API at::Tensor _dirichlet_grad_cpu(const at::Tensor & x, const at::Tensor & alpha, const at::Tensor & total);
TORCH_API at::Tensor _dirichlet_grad_cuda(const at::Tensor & x, const at::Tensor & alpha, const at::Tensor & total);

} // namespace native
} // namespace at
