#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstSkelControlScale(py::module &m)
{
    py::class_< UInterpTrackInstSkelControlScale,  UInterpTrackInst   >(m, "UInterpTrackInstSkelControlScale")
		.def_static("StaticClass", &UInterpTrackInstSkelControlScale::StaticClass, py::return_value_policy::reference)
          ;
}