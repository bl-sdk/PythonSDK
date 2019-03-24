#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstMorphWeight(py::module &m)
{
    py::class_< UInterpTrackInstMorphWeight,  UInterpTrackInst   >(m, "UInterpTrackInstMorphWeight")
		.def_static("StaticClass", &UInterpTrackInstMorphWeight::StaticClass, py::return_value_policy::reference)
          ;
}