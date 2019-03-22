#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm_Automatic(py::module &m)
{
    py::class_< UAnimationCompressionAlgorithm_Automatic,  UAnimationCompressionAlgorithm   >(m, "UAnimationCompressionAlgorithm_Automatic")
        .def_readwrite("MaxEndEffectorError", &UAnimationCompressionAlgorithm_Automatic::MaxEndEffectorError)
        .def("StaticClass", &UAnimationCompressionAlgorithm_Automatic::StaticClass, py::return_value_policy::reference)
          ;
}