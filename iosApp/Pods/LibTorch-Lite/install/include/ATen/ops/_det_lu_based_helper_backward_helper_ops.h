#pragma once

// @generated by torchgen/gen.py from Operator.h

#include <tuple>
#include <vector>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {
namespace _ops {


struct TORCH_API _det_lu_based_helper_backward_helper {
  using schema = at::Tensor (const at::Tensor &, const at::Tensor &, const at::Tensor &, const at::Tensor &, const at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::_det_lu_based_helper_backward_helper")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "_det_lu_based_helper_backward_helper(Tensor det_grad, Tensor det, Tensor self, Tensor lu, Tensor pivs) -> Tensor")
  static at::Tensor call(const at::Tensor & det_grad, const at::Tensor & det, const at::Tensor & self, const at::Tensor & lu, const at::Tensor & pivs);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & det_grad, const at::Tensor & det, const at::Tensor & self, const at::Tensor & lu, const at::Tensor & pivs);
};

}} // namespace at::_ops
