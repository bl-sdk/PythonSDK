#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDmgType_Crushed()
{
    py::class_< UDmgType_Crushed,  UDamageType   >("UDmgType_Crushed")
        .def("StaticClass", &UDmgType_Crushed::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}