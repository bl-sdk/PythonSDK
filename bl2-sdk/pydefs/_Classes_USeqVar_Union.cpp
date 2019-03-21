#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_Union(py::object m)
{
    py::class_< USeqVar_Union,  USequenceVariable   >(m, "USeqVar_Union")
        .def("StaticClass", &USeqVar_Union::StaticClass, py::return_value_policy::reference)
          ;
}