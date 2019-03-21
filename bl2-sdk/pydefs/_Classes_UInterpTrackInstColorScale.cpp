#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstColorScale(py::object m)
{
    py::class_< UInterpTrackInstColorScale,  UInterpTrackInst   >(m, "UInterpTrackInstColorScale")
        .def("StaticClass", &UInterpTrackInstColorScale::StaticClass, py::return_value_policy::reference)
          ;
}