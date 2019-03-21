#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackSkelControlStrength()
{
    py::class_< UInterpTrackSkelControlStrength,  UInterpTrackFloatBase   >("UInterpTrackSkelControlStrength")
        .def_readwrite("SkelControlName", &UInterpTrackSkelControlStrength::SkelControlName)
        .def("StaticClass", &UInterpTrackSkelControlStrength::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}