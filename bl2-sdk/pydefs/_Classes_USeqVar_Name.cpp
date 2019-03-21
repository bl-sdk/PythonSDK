#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_Name()
{
    py::class_< USeqVar_Name,  USequenceVariable   >("USeqVar_Name")
        .def("StaticClass", &USeqVar_Name::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}