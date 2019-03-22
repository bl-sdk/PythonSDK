#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNode_Condition(py::module &m)
{
    py::class_< UWillowAnimNode_Condition,  UAnimNodeBlend   >(m, "UWillowAnimNode_Condition")
        .def_readwrite("BlendTime", &UWillowAnimNode_Condition::BlendTime)
        .def_readwrite("CheckRate", &UWillowAnimNode_Condition::CheckRate)
        .def_readwrite("FlagCondition", &UWillowAnimNode_Condition::FlagCondition)
        .def_readwrite("LastCheckTime", &UWillowAnimNode_Condition::LastCheckTime)
        .def("StaticClass", &UWillowAnimNode_Condition::StaticClass, py::return_value_policy::reference)
          ;
}