#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackColorProp()
{
    py::class_< UInterpTrackColorProp,  UInterpTrackVectorBase   >("UInterpTrackColorProp")
        .def_readwrite("PropertyName", &UInterpTrackColorProp::PropertyName)
        .def("StaticClass", &UInterpTrackColorProp::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}