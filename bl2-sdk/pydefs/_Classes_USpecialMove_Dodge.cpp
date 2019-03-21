#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_Dodge(py::object m)
{
    py::class_< USpecialMove_Dodge,  USpecialMove_Motion   >(m, "USpecialMove_Dodge")
        .def("StaticClass", &USpecialMove_Dodge::StaticClass, py::return_value_policy::reference)
          ;
}