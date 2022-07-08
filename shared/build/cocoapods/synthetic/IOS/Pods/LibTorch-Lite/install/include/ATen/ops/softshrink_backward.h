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



#include <ATen/ops/softshrink_backward_ops.h>

namespace at {


// aten::softshrink_backward.grad_input(Tensor grad_output, Tensor self, Scalar lambd, *, Tensor(a!) grad_input) -> Tensor(a!)
TORCH_API inline at::Tensor & softshrink_backward_out(at::Tensor & grad_input, const at::Tensor & grad_output, const at::Tensor & self, const at::Scalar & lambd) {
    return at::_ops::softshrink_backward_grad_input::call(grad_output, self, lambd, grad_input);
}

// aten::softshrink_backward.grad_input(Tensor grad_output, Tensor self, Scalar lambd, *, Tensor(a!) grad_input) -> Tensor(a!)
TORCH_API inline at::Tensor & softshrink_backward_outf(const at::Tensor & grad_output, const at::Tensor & self, const at::Scalar & lambd, at::Tensor & grad_input) {
    return at::_ops::softshrink_backward_grad_input::call(grad_output, self, lambd, grad_input);
}

// aten::softshrink_backward(Tensor grad_output, Tensor self, Scalar lambd) -> Tensor
TORCH_API inline at::Tensor softshrink_backward(const at::Tensor & grad_output, const at::Tensor & self, const at::Scalar & lambd) {
    return at::_ops::softshrink_backward::call(grad_output, self, lambd);
}

}
