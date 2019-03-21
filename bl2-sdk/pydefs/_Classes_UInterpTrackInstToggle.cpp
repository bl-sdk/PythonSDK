#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstToggle()
{
    py::class_< UInterpTrackInstToggle,  UInterpTrackInst   >("UInterpTrackInstToggle")
        .def_readwrite("Action", &UInterpTrackInstToggle::Action)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstToggle::LastUpdatePosition)
        .def("StaticClass", &UInterpTrackInstToggle::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}