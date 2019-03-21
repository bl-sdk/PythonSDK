#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm_BitwiseCompressOnly(py::object m)
{
    py::class_< UAnimationCompressionAlgorithm_BitwiseCompressOnly,  UAnimationCompressionAlgorithm   >(m, "UAnimationCompressionAlgorithm_BitwiseCompressOnly")
        .def("StaticClass", &UAnimationCompressionAlgorithm_BitwiseCompressOnly::StaticClass, py::return_value_policy::reference)
          ;
}