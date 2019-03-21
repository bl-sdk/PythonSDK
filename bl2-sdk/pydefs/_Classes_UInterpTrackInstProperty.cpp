#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstProperty()
{
    py::class_< UInterpTrackInstProperty,  UInterpTrackInst   >("UInterpTrackInstProperty")
        .def_readwrite("PropertyUpdateCallback", &UInterpTrackInstProperty::PropertyUpdateCallback)
        .def_readwrite("PropertyOuterObjectInst", &UInterpTrackInstProperty::PropertyOuterObjectInst)
        .def("StaticClass", &UInterpTrackInstProperty::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}