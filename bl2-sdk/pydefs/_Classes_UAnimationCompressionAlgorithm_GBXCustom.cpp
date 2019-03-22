#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm_GBXCustom(py::module &m)
{
    py::class_< UAnimationCompressionAlgorithm_GBXCustom,  UAnimationCompressionAlgorithm   >(m, "UAnimationCompressionAlgorithm_GBXCustom")
        .def_readwrite("MinKeys", &UAnimationCompressionAlgorithm_GBXCustom::MinKeys)
        .def_readwrite("MaxPosDiff", &UAnimationCompressionAlgorithm_GBXCustom::MaxPosDiff)
        .def_readwrite("MaxAngleDiff", &UAnimationCompressionAlgorithm_GBXCustom::MaxAngleDiff)
          ;
}