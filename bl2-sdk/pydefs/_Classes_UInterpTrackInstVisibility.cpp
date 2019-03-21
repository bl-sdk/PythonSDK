#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstVisibility()
{
    py::class_< UInterpTrackInstVisibility,  UInterpTrackInst   >("UInterpTrackInstVisibility")
        .def_readwrite("Action", &UInterpTrackInstVisibility::Action)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstVisibility::LastUpdatePosition)
        .def("StaticClass", &UInterpTrackInstVisibility::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}