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


struct TORCH_API mode {
  using schema = ::std::tuple<at::Tensor,at::Tensor> (const at::Tensor &, int64_t, bool);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::mode")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "mode(Tensor self, int dim=-1, bool keepdim=False) -> (Tensor values, Tensor indices)")
  static ::std::tuple<at::Tensor,at::Tensor> call(const at::Tensor & self, int64_t dim, bool keepdim);
  static ::std::tuple<at::Tensor,at::Tensor> redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool keepdim);
};

struct TORCH_API mode_values {
  using schema = ::std::tuple<at::Tensor &,at::Tensor &> (const at::Tensor &, int64_t, bool, at::Tensor &, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::mode")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "values")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "mode.values(Tensor self, int dim=-1, bool keepdim=False, *, Tensor(a!) values, Tensor(b!) indices) -> (Tensor(a!) values, Tensor(b!) indices)")
  static ::std::tuple<at::Tensor &,at::Tensor &> call(const at::Tensor & self, int64_t dim, bool keepdim, at::Tensor & values, at::Tensor & indices);
  static ::std::tuple<at::Tensor &,at::Tensor &> redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, bool keepdim, at::Tensor & values, at::Tensor & indices);
};

struct TORCH_API mode_dimname {
  using schema = ::std::tuple<at::Tensor,at::Tensor> (const at::Tensor &, at::Dimname, bool);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::mode")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "dimname")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "mode.dimname(Tensor self, Dimname dim, bool keepdim=False) -> (Tensor values, Tensor indices)")
  static ::std::tuple<at::Tensor,at::Tensor> call(const at::Tensor & self, at::Dimname dim, bool keepdim);
  static ::std::tuple<at::Tensor,at::Tensor> redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, bool keepdim);
};

struct TORCH_API mode_dimname_out {
  using schema = ::std::tuple<at::Tensor &,at::Tensor &> (const at::Tensor &, at::Dimname, bool, at::Tensor &, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::mode")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "dimname_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "mode.dimname_out(Tensor self, Dimname dim, bool keepdim=False, *, Tensor(a!) values, Tensor(b!) indices) -> (Tensor(a!) values, Tensor(b!) indices)")
  static ::std::tuple<at::Tensor &,at::Tensor &> call(const at::Tensor & self, at::Dimname dim, bool keepdim, at::Tensor & values, at::Tensor & indices);
  static ::std::tuple<at::Tensor &,at::Tensor &> redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, bool keepdim, at::Tensor & values, at::Tensor & indices);
};

}} // namespace at::_ops
