#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstAkEvent(py::module &m)
{
    py::class_< UInterpTrackInstAkEvent,  UInterpTrackInst   >(m, "UInterpTrackInstAkEvent")
		.def_static("StaticClass", &UInterpTrackInstAkEvent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstAkEvent::LastUpdatePosition)
          ;
}