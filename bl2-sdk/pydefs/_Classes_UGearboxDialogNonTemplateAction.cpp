#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogNonTemplateAction(py::object m)
{
    py::class_< UGearboxDialogNonTemplateAction,  UGearboxDialogNode   >(m, "UGearboxDialogNonTemplateAction")
        .def("StaticClass", &UGearboxDialogNonTemplateAction::StaticClass, py::return_value_policy::reference)
        .def("eventActivate", &UGearboxDialogAction::eventActivate)
          ;
}