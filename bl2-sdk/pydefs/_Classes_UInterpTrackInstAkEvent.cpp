#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstAkEvent(py::module &m)
{
    py::class_< UInterpTrackInstAkEvent,  UInterpTrackInst   >(m, "UInterpTrackInstAkEvent")
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstAkEvent::LastUpdatePosition)
          ;
}