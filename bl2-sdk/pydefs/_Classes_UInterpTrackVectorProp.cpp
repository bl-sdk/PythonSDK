#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackVectorProp()
{
    py::class_< UInterpTrackVectorProp,  UInterpTrackVectorBase   >("UInterpTrackVectorProp")
        .def_readwrite("PropertyName", &UInterpTrackVectorProp::PropertyName)
        .def("StaticClass", &UInterpTrackVectorProp::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}