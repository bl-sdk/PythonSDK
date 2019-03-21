#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DamageArea(py::object m)
{
    py::class_< UBehavior_DamageArea,  UBehaviorBase   >(m, "UBehavior_DamageArea")
        .def_readwrite("Action", &UBehavior_DamageArea::Action)
        .def("StaticClass", &UBehavior_DamageArea::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_DamageArea::ApplyBehaviorToContext)
          ;
}