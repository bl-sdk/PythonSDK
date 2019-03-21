#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogTemplateAction(py::object m)
{
    py::class_< UGearboxDialogTemplateAction,  UGearboxDialogAction   >(m, "UGearboxDialogTemplateAction")
        .def("StaticClass", &UGearboxDialogTemplateAction::StaticClass, py::return_value_policy::reference)
          ;
}