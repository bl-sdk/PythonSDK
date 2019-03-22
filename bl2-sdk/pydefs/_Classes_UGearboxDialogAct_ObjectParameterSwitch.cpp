#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogAct_ObjectParameterSwitch(py::module &m)
{
    py::class_< UGearboxDialogAct_ObjectParameterSwitch,  UGearboxDialogAction   >(m, "UGearboxDialogAct_ObjectParameterSwitch")
        .def_readwrite("Outputs", &UGearboxDialogAct_ObjectParameterSwitch::Outputs)
        .def("eventActivate", &UGearboxDialogAct_ObjectParameterSwitch::eventActivate)
          ;
}