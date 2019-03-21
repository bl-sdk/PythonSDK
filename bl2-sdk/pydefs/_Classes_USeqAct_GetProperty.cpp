#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_GetProperty(py::object m)
{
    py::class_< USeqAct_GetProperty,  USequenceAction   >(m, "USeqAct_GetProperty")
        .def_readwrite("PropertyName", &USeqAct_GetProperty::PropertyName)
        .def("StaticClass", &USeqAct_GetProperty::StaticClass, py::return_value_policy::reference)
          ;
}