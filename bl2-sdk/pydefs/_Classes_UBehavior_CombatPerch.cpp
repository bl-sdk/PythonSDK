#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_CombatPerch(py::module &m)
{
    py::class_< UBehavior_CombatPerch,  UBehaviorBase   >(m, "UBehavior_CombatPerch")
        .def_readwrite("AttachmentName", &UBehavior_CombatPerch::AttachmentName)
        .def_readwrite("Action", &UBehavior_CombatPerch::Action)
        .def("StaticClass", &UBehavior_CombatPerch::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_CombatPerch::ApplyBehaviorToContext)
          ;
}