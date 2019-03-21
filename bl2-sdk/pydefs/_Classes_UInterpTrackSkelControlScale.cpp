#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackSkelControlScale()
{
    py::class_< UInterpTrackSkelControlScale,  UInterpTrackFloatBase   >("UInterpTrackSkelControlScale")
        .def_readwrite("SkelControlName", &UInterpTrackSkelControlScale::SkelControlName)
        .def("StaticClass", &UInterpTrackSkelControlScale::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}