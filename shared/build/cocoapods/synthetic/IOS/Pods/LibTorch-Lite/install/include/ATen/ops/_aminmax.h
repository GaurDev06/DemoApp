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



#include <ATen/ops/_aminmax_ops.h>

namespace at {


// aten::_aminmax(Tensor self) -> (Tensor, Tensor)
TORCH_API inline ::std::tuple<at::Tensor,at::Tensor> _aminmax(const at::Tensor & self) {
    return at::_ops::_aminmax::call(self);
}

// aten::_aminmax.dim(Tensor self, int dim, bool keepdim=False) -> (Tensor, Tensor)
TORCH_API inline ::std::tuple<at::Tensor,at::Tensor> _aminmax(const at::Tensor & self, int64_t dim, bool keepdim=false) {
    return at::_ops::_aminmax_dim::call(self, dim, keepdim);
}

}
