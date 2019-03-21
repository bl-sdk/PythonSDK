#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_OverpowerLevel()
{
    py::class_< USeqVar_OverpowerLevel,  USeqVar_Int   >("USeqVar_OverpowerLevel")
        .def("StaticClass", &USeqVar_OverpowerLevel::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}