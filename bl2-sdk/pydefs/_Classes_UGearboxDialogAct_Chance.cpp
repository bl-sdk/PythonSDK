#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogAct_Chance(py::module &m)
{
    py::class_< UGearboxDialogAct_Chance,  UGearboxDialogAction   >(m, "UGearboxDialogAct_Chance")
        .def_readwrite("Chance", &UGearboxDialogAct_Chance::Chance)
        .def_readwrite("QuietTimeMin", &UGearboxDialogAct_Chance::QuietTimeMin)
        .def_readwrite("QuietTimeMax", &UGearboxDialogAct_Chance::QuietTimeMax)
        .def_readwrite("NextFireTime", &UGearboxDialogAct_Chance::NextFireTime)
        .def("StaticClass", &UGearboxDialogAct_Chance::StaticClass, py::return_value_policy::reference)
        .def("eventActivate", &UGearboxDialogAct_Chance::eventActivate)
          ;
}