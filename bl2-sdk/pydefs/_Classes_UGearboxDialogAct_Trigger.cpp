#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogAct_Trigger()
{
    py::class_< UGearboxDialogAct_Trigger,  UGearboxDialogAction   >("UGearboxDialogAct_Trigger")
        .def_readwrite("DialogEvent", &UGearboxDialogAct_Trigger::DialogEvent)
        .def("StaticClass", &UGearboxDialogAct_Trigger::StaticClass, py::return_value_policy::reference)
        .def("ActivateOutput", &UGearboxDialogAct_Trigger::ActivateOutput)
        .def("eventActivate", &UGearboxDialogAct_Trigger::eventActivate)
        .staticmethod("StaticClass")
  ;
}