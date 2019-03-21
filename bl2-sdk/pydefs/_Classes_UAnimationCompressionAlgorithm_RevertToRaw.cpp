#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm_RevertToRaw(py::object m)
{
    py::class_< UAnimationCompressionAlgorithm_RevertToRaw,  UAnimationCompressionAlgorithm   >(m, "UAnimationCompressionAlgorithm_RevertToRaw")
        .def("StaticClass", &UAnimationCompressionAlgorithm_RevertToRaw::StaticClass, py::return_value_policy::reference)
          ;
}