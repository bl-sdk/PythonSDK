#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDmgType_Fell()
{
    py::class_< UDmgType_Fell,  UDamageType   >("UDmgType_Fell")
        .def("StaticClass", &UDmgType_Fell::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}