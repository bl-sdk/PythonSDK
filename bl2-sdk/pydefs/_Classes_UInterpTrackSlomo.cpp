#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackSlomo(py::module &m)
{
    py::class_< UInterpTrackSlomo,  UInterpTrackFloatBase   >(m, "UInterpTrackSlomo")
		.def_static("StaticClass", &UInterpTrackSlomo::StaticClass, py::return_value_policy::reference)
          ;
}