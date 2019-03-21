#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstEvent()
{
    py::class_< UInterpTrackInstEvent,  UInterpTrackInst   >("UInterpTrackInstEvent")
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstEvent::LastUpdatePosition)
        .def("StaticClass", &UInterpTrackInstEvent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}