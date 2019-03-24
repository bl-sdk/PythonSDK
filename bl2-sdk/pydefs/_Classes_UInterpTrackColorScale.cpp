#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackColorScale(py::module &m)
{
    py::class_< UInterpTrackColorScale,  UInterpTrackVectorBase   >(m, "UInterpTrackColorScale")
		.def_static("StaticClass", &UInterpTrackColorScale::StaticClass, py::return_value_policy::reference)
          ;
}