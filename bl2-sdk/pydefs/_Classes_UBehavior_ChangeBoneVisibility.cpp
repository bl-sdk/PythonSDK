#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeBoneVisibility(py::module &m)
{
    py::class_< UBehavior_ChangeBoneVisibility,  UBehaviorBase   >(m, "UBehavior_ChangeBoneVisibility")
		.def_static("StaticClass", &UBehavior_ChangeBoneVisibility::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Status", &UBehavior_ChangeBoneVisibility::Status)
        .def_readwrite("BoneName", &UBehavior_ChangeBoneVisibility::BoneName)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeBoneVisibility::ApplyBehaviorToContext)
          ;
}