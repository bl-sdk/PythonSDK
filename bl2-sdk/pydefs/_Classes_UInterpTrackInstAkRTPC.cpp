#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstAkRTPC(py::module &m)
{
    py::class_< UInterpTrackInstAkRTPC,  UInterpTrackInst   >(m, "UInterpTrackInstAkRTPC")
		.def_static("StaticClass", &UInterpTrackInstAkRTPC::StaticClass, py::return_value_policy::reference)
          ;
}