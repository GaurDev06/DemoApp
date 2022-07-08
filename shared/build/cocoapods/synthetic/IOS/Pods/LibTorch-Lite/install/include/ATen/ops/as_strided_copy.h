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



#include <ATen/ops/as_strided_copy_ops.h>

namespace at {


// aten::as_strided_copy(Tensor self, int[] size, int[] stride, int? storage_offset=None) -> Tensor
TORCH_API inline at::Tensor as_strided_copy(const at::Tensor & self, at::IntArrayRef size, at::IntArrayRef stride, c10::optional<int64_t> storage_offset=c10::nullopt) {
    return at::_ops::as_strided_copy::call(self, size, stride, storage_offset);
}

// aten::as_strided_copy.out(Tensor self, int[] size, int[] stride, int? storage_offset=None, *, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & as_strided_copy_out(at::Tensor & out, const at::Tensor & self, at::IntArrayRef size, at::IntArrayRef stride, c10::optional<int64_t> storage_offset=c10::nullopt) {
    return at::_ops::as_strided_copy_out::call(self, size, stride, storage_offset, out);
}

// aten::as_strided_copy.out(Tensor self, int[] size, int[] stride, int? storage_offset=None, *, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & as_strided_copy_outf(const at::Tensor & self, at::IntArrayRef size, at::IntArrayRef stride, c10::optional<int64_t> storage_offset, at::Tensor & out) {
    return at::_ops::as_strided_copy_out::call(self, size, stride, storage_offset, out);
}

}
