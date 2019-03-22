#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstTeleport(py::module &m)
{
    py::class_< UInterpTrackInstTeleport,  UInterpTrackInst   >(m, "UInterpTrackInstTeleport")
        .def_readwrite("ResetLocation", &UInterpTrackInstTeleport::ResetLocation)
        .def_readwrite("ResetRotation", &UInterpTrackInstTeleport::ResetRotation)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstTeleport::LastUpdatePosition)
        .def("StaticClass", &UInterpTrackInstTeleport::StaticClass, py::return_value_policy::reference)
          ;
}