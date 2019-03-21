#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm_LeastDestructive()
{
    py::class_< UAnimationCompressionAlgorithm_LeastDestructive,  UAnimationCompressionAlgorithm   >("UAnimationCompressionAlgorithm_LeastDestructive")
        .def("StaticClass", &UAnimationCompressionAlgorithm_LeastDestructive::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}