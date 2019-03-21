#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstDirector()
{
    py::class_< UInterpTrackInstDirector,  UInterpTrackInst   >("UInterpTrackInstDirector")
        .def_readwrite("OldViewTarget", &UInterpTrackInstDirector::OldViewTarget)
        .def_readwrite("OldRenderingOverrides", &UInterpTrackInstDirector::OldRenderingOverrides)
        .def("StaticClass", &UInterpTrackInstDirector::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}