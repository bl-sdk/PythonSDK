#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstEvent(py::module &m)
{
    py::class_< UInterpTrackInstEvent,  UInterpTrackInst   >(m, "UInterpTrackInstEvent")
		.def_static("StaticClass", &UInterpTrackInstEvent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstEvent::LastUpdatePosition)
          ;
}