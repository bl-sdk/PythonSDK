#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeInstanceDataSwitch(py::object m)
{
    py::class_< UBehavior_ChangeInstanceDataSwitch,  UBehaviorBase   >(m, "UBehavior_ChangeInstanceDataSwitch")
        .def_readwrite("SwitchName", &UBehavior_ChangeInstanceDataSwitch::SwitchName)
        .def_readwrite("NewValue", &UBehavior_ChangeInstanceDataSwitch::NewValue)
        .def("StaticClass", &UBehavior_ChangeInstanceDataSwitch::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeInstanceDataSwitch::ApplyBehaviorToContext)
          ;
}