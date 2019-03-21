#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstMorphWeight(py::object m)
{
    py::class_< UInterpTrackInstMorphWeight,  UInterpTrackInst   >(m, "UInterpTrackInstMorphWeight")
        .def("StaticClass", &UInterpTrackInstMorphWeight::StaticClass, py::return_value_policy::reference)
          ;
}