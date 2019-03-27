#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstVisibility(py::module &m)
{
    py::class_< UInterpTrackInstVisibility,  UInterpTrackInst   >(m, "UInterpTrackInstVisibility")
		.def_static("StaticClass", &UInterpTrackInstVisibility::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Action", &UInterpTrackInstVisibility::Action)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstVisibility::LastUpdatePosition)
          ;
}