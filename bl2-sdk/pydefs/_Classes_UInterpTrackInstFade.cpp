#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstFade(py::module &m)
{
    py::class_< UInterpTrackInstFade,  UInterpTrackInst   >(m, "UInterpTrackInstFade")
		.def_static("StaticClass", &UInterpTrackInstFade::StaticClass, py::return_value_policy::reference)
          ;
}