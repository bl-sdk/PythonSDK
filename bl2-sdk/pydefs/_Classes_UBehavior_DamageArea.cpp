#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DamageArea(py::module &m)
{
    py::class_< UBehavior_DamageArea,  UBehaviorBase   >(m, "UBehavior_DamageArea")
		.def_static("StaticClass", &UBehavior_DamageArea::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Action", &UBehavior_DamageArea::Action)
        .def("ApplyBehaviorToContext", &UBehavior_DamageArea::ApplyBehaviorToContext)
          ;
}