#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_InterpMenu(py::object m)
{
    py::class_< UWillowSeqAct_InterpMenu,  USeqAct_Interp   >(m, "UWillowSeqAct_InterpMenu")
        .def_readwrite("IdleTime", &UWillowSeqAct_InterpMenu::IdleTime)
        .def_readwrite("ControllerSensitivityScale", &UWillowSeqAct_InterpMenu::ControllerSensitivityScale)
        .def_readwrite("MouseSensitivityScale", &UWillowSeqAct_InterpMenu::MouseSensitivityScale)
        .def_readwrite("AutoPlayRate", &UWillowSeqAct_InterpMenu::AutoPlayRate)
        .def_readwrite("ManualPlayRate", &UWillowSeqAct_InterpMenu::ManualPlayRate)
        .def_readwrite("InputDelta", &UWillowSeqAct_InterpMenu::InputDelta)
        .def_readwrite("InputTime", &UWillowSeqAct_InterpMenu::InputTime)
        .def("StaticClass", &UWillowSeqAct_InterpMenu::StaticClass, py::return_value_policy::reference)
        .def("InputAxis", &UWillowSeqAct_InterpMenu::InputAxis)
          ;
}