#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackFloatProp(py::module &m)
{
    py::class_< UInterpTrackFloatProp,  UInterpTrackFloatBase   >(m, "UInterpTrackFloatProp")
        .def_readwrite("PropertyName", &UInterpTrackFloatProp::PropertyName)
        .def("StaticClass", &UInterpTrackFloatProp::StaticClass, py::return_value_policy::reference)
          ;
}