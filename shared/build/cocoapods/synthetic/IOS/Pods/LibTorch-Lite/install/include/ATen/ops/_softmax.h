#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/_softmax_ops.h>

namespace at {


// aten::_softmax(Tensor self, int dim, bool half_to_float) -> Tensor
TORCH_API inline at::Tensor _softmax(const at::Tensor & self, int64_t dim, bool half_to_float) {
    return at::_ops::_softmax::call(self, dim, half_to_float);
}

// aten::_softmax.out(Tensor self, int dim, bool half_to_float, *, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & _softmax_out(at::Tensor & out, const at::Tensor & self, int64_t dim, bool half_to_float) {
    return at::_ops::_softmax_out::call(self, dim, half_to_float, out);
}

// aten::_softmax.out(Tensor self, int dim, bool half_to_float, *, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & _softmax_outf(const at::Tensor & self, int64_t dim, bool half_to_float, at::Tensor & out) {
    return at::_ops::_softmax_out::call(self, dim, half_to_float, out);
}

}
