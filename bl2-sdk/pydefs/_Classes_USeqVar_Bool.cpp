#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_Bool(py::object m)
{
    py::class_< USeqVar_Bool,  USequenceVariable   >(m, "USeqVar_Bool")
        .def_readwrite("bValue", &USeqVar_Bool::bValue)
        .def("StaticClass", &USeqVar_Bool::StaticClass, py::return_value_policy::reference)
          ;
}