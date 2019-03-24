#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm_LeastDestructive(py::module &m)
{
    py::class_< UAnimationCompressionAlgorithm_LeastDestructive,  UAnimationCompressionAlgorithm   >(m, "UAnimationCompressionAlgorithm_LeastDestructive")
		.def_static("StaticClass", &UAnimationCompressionAlgorithm_LeastDestructive::StaticClass, py::return_value_policy::reference)
          ;
}