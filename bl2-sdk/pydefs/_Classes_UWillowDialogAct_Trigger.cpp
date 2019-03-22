#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDialogAct_Trigger(py::module &m)
{
    py::class_< UWillowDialogAct_Trigger,  UGearboxDialogAct_Trigger   >(m, "UWillowDialogAct_Trigger")
        .def("StaticClass", &UWillowDialogAct_Trigger::StaticClass, py::return_value_policy::reference)
          ;
}