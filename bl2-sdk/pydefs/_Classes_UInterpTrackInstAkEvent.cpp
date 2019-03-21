#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstAkEvent(py::object m)
{
    py::class_< UInterpTrackInstAkEvent,  UInterpTrackInst   >(m, "UInterpTrackInstAkEvent")
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstAkEvent::LastUpdatePosition)
        .def("StaticClass", &UInterpTrackInstAkEvent::StaticClass, py::return_value_policy::reference)
          ;
}