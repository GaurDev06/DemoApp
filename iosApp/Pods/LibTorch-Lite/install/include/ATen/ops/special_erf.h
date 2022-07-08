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



#include <ATen/ops/special_erf_ops.h>

namespace at {


// aten::special_erf(Tensor self) -> Tensor
TORCH_API inline at::Tensor special_erf(const at::Tensor & self) {
    return at::_ops::special_erf::call(self);
}

// aten::special_erf.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & special_erf_out(at::Tensor & out, const at::Tensor & self) {
    return at::_ops::special_erf_out::call(self, out);
}

// aten::special_erf.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & special_erf_outf(const at::Tensor & self, at::Tensor & out) {
    return at::_ops::special_erf_out::call(self, out);
}

}