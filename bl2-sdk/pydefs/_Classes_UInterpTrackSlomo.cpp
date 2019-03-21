#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackSlomo(py::object m)
{
    py::class_< UInterpTrackSlomo,  UInterpTrackFloatBase   >(m, "UInterpTrackSlomo")
        .def("StaticClass", &UInterpTrackSlomo::StaticClass, py::return_value_policy::reference)
          ;
}