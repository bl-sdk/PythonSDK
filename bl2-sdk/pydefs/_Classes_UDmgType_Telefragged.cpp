#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDmgType_Telefragged()
{
    py::class_< UDmgType_Telefragged,  UDamageType   >("UDmgType_Telefragged")
        .def("StaticClass", &UDmgType_Telefragged::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}