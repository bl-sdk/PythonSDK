#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogAction()
{
    py::class_< UGearboxDialogAction,  UGearboxDialogNode   >("UGearboxDialogAction")
        .def("StaticClass", &UGearboxDialogAction::StaticClass, py::return_value_policy::reference)
        .def("eventActivate", &UGearboxDialogAction::eventActivate)
        .staticmethod("StaticClass")
  ;
}