#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstFaceFX(py::module &m)
{
    py::class_< UInterpTrackInstFaceFX,  UInterpTrackInst   >(m, "UInterpTrackInstFaceFX")
		.def_static("StaticClass", &UInterpTrackInstFaceFX::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstFaceFX::LastUpdatePosition)
          ;
}