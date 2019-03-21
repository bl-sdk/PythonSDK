#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_Dodge()
{
    py::class_< USpecialMove_Dodge,  USpecialMove_Motion   >("USpecialMove_Dodge")
        .def("StaticClass", &USpecialMove_Dodge::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}