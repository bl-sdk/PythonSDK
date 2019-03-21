#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm_RemoveEverySecondKey()
{
    py::class_< UAnimationCompressionAlgorithm_RemoveEverySecondKey,  UAnimationCompressionAlgorithm   >("UAnimationCompressionAlgorithm_RemoveEverySecondKey")
        .def_readwrite("MinKeys", &UAnimationCompressionAlgorithm_RemoveEverySecondKey::MinKeys)
        .def("StaticClass", &UAnimationCompressionAlgorithm_RemoveEverySecondKey::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}