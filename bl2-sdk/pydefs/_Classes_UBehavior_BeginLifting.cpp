#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_BeginLifting(py::module &m)
{
    py::class_< UBehavior_BeginLifting,  UBehaviorBase   >(m, "UBehavior_BeginLifting")
		.def_static("StaticClass", &UBehavior_BeginLifting::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LifterSkillContext", &UBehavior_BeginLifting::LifterSkillContext)
        .def_readwrite("LifterPawnContext", &UBehavior_BeginLifting::LifterPawnContext)
        .def_readwrite("HeightFromGroundFormula", &UBehavior_BeginLifting::HeightFromGroundFormula)
        .def("ApplyBehaviorToContext", &UBehavior_BeginLifting::ApplyBehaviorToContext)
          ;
}