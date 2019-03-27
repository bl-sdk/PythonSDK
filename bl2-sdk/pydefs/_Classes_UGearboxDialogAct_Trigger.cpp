#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogAct_Trigger(py::module &m)
{
    py::class_< UGearboxDialogAct_Trigger,  UGearboxDialogAction   >(m, "UGearboxDialogAct_Trigger")
		.def_static("StaticClass", &UGearboxDialogAct_Trigger::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DialogEvent", &UGearboxDialogAct_Trigger::DialogEvent)
        .def("ActivateOutput", &UGearboxDialogAct_Trigger::ActivateOutput)
        .def("eventActivate", &UGearboxDialogAct_Trigger::eventActivate)
          ;
}