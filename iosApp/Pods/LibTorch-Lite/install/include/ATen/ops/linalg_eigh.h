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



#include <ATen/ops/linalg_eigh_ops.h>

namespace at {


// aten::linalg_eigh(Tensor self, str UPLO="L") -> (Tensor eigenvalues, Tensor eigenvectors)
TORCH_API inline ::std::tuple<at::Tensor,at::Tensor> linalg_eigh(const at::Tensor & self, c10::string_view UPLO="L") {
    return at::_ops::linalg_eigh::call(self, UPLO);
}

// aten::linalg_eigh.eigvals(Tensor self, str UPLO="L", *, Tensor(a!) eigvals, Tensor(b!) eigvecs) -> (Tensor(a!) eigenvalues, Tensor(b!) eigenvectors)
TORCH_API inline ::std::tuple<at::Tensor &,at::Tensor &> linalg_eigh_out(at::Tensor & eigvals, at::Tensor & eigvecs, const at::Tensor & self, c10::string_view UPLO="L") {
    return at::_ops::linalg_eigh_eigvals::call(self, UPLO, eigvals, eigvecs);
}

// aten::linalg_eigh.eigvals(Tensor self, str UPLO="L", *, Tensor(a!) eigvals, Tensor(b!) eigvecs) -> (Tensor(a!) eigenvalues, Tensor(b!) eigenvectors)
TORCH_API inline ::std::tuple<at::Tensor &,at::Tensor &> linalg_eigh_outf(const at::Tensor & self, c10::string_view UPLO, at::Tensor & eigvals, at::Tensor & eigvecs) {
    return at::_ops::linalg_eigh_eigvals::call(self, UPLO, eigvals, eigvecs);
}

}