#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeBlendSwitch(py::object m)
{
    py::class_< UWillowAnimNodeBlendSwitch,  UAnimNodeBlendList   >(m, "UWillowAnimNodeBlendSwitch")
        .def_readwrite("BlendTime", &UWillowAnimNodeBlendSwitch::BlendTime)
        .def_readwrite("ChildSwitches", &UWillowAnimNodeBlendSwitch::ChildSwitches)
        .def_readwrite("CurrentSwitch", &UWillowAnimNodeBlendSwitch::CurrentSwitch)
        .def_readwrite("DesiredSwitch", &UWillowAnimNodeBlendSwitch::DesiredSwitch)
        .def_readwrite("DefaultSwitch", &UWillowAnimNodeBlendSwitch::DefaultSwitch)
        .def("StaticClass", &UWillowAnimNodeBlendSwitch::StaticClass, py::return_value_policy::reference)
        .def("SetCurrentSwitch", &UWillowAnimNodeBlendSwitch::SetCurrentSwitch)
          ;
}