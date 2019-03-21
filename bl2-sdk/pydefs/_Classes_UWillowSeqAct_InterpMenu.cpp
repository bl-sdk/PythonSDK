#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_InterpMenu()
{
    class_< UWillowSeqAct_InterpMenu, bases< USeqAct_Interp >  , boost::noncopyable>("UWillowSeqAct_InterpMenu", no_init)
        .def_readwrite("IdleTime", &UWillowSeqAct_InterpMenu::IdleTime)
        .def_readwrite("ControllerSensitivityScale", &UWillowSeqAct_InterpMenu::ControllerSensitivityScale)
        .def_readwrite("MouseSensitivityScale", &UWillowSeqAct_InterpMenu::MouseSensitivityScale)
        .def_readwrite("AutoPlayRate", &UWillowSeqAct_InterpMenu::AutoPlayRate)
        .def_readwrite("ManualPlayRate", &UWillowSeqAct_InterpMenu::ManualPlayRate)
        .def_readwrite("InputDelta", &UWillowSeqAct_InterpMenu::InputDelta)
        .def_readwrite("InputTime", &UWillowSeqAct_InterpMenu::InputTime)
        .def("StaticClass", &UWillowSeqAct_InterpMenu::StaticClass, return_value_policy< reference_existing_object >())
        .def("InputAxis", &UWillowSeqAct_InterpMenu::InputAxis)
        .staticmethod("StaticClass")
  ;
}