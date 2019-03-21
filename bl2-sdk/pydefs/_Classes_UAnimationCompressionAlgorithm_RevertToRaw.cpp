#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm_RevertToRaw()
{
    py::class_< UAnimationCompressionAlgorithm_RevertToRaw,  UAnimationCompressionAlgorithm   >("UAnimationCompressionAlgorithm_RevertToRaw")
        .def("StaticClass", &UAnimationCompressionAlgorithm_RevertToRaw::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}