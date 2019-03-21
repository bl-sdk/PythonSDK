#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackVectorProp(py::object m)
{
    py::class_< UInterpTrackVectorProp,  UInterpTrackVectorBase   >(m, "UInterpTrackVectorProp")
        .def_readwrite("PropertyName", &UInterpTrackVectorProp::PropertyName)
        .def("StaticClass", &UInterpTrackVectorProp::StaticClass, py::return_value_policy::reference)
          ;
}