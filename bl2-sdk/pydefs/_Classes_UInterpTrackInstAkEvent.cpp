#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstAkEvent()
{
    py::class_< UInterpTrackInstAkEvent,  UInterpTrackInst   >("UInterpTrackInstAkEvent")
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstAkEvent::LastUpdatePosition)
        .def("StaticClass", &UInterpTrackInstAkEvent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}