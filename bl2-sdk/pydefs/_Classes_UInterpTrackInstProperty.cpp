#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstProperty(py::module &m)
{
    py::class_< UInterpTrackInstProperty,  UInterpTrackInst   >(m, "UInterpTrackInstProperty")
		.def_static("StaticClass", &UInterpTrackInstProperty::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PropertyUpdateCallback", &UInterpTrackInstProperty::PropertyUpdateCallback)
        .def_readwrite("PropertyOuterObjectInst", &UInterpTrackInstProperty::PropertyOuterObjectInst)
          ;
}