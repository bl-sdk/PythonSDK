#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm_RemoveEverySecondKey(py::module &m)
{
    py::class_< UAnimationCompressionAlgorithm_RemoveEverySecondKey,  UAnimationCompressionAlgorithm   >(m, "UAnimationCompressionAlgorithm_RemoveEverySecondKey")
        .def_readwrite("MinKeys", &UAnimationCompressionAlgorithm_RemoveEverySecondKey::MinKeys)
        .def("StaticClass", &UAnimationCompressionAlgorithm_RemoveEverySecondKey::StaticClass, py::return_value_policy::reference)
          ;
}