#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInst(py::module &m)
{
    py::class_< UInterpTrackInst,  UObject   >(m, "UInterpTrackInst")
		.def_static("StaticClass", &UInterpTrackInst::StaticClass, py::return_value_policy::reference)
          ;
}