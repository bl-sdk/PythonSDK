#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstEvent(py::object m)
{
    py::class_< UInterpTrackInstEvent,  UInterpTrackInst   >(m, "UInterpTrackInstEvent")
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstEvent::LastUpdatePosition)
        .def("StaticClass", &UInterpTrackInstEvent::StaticClass, py::return_value_policy::reference)
          ;
}