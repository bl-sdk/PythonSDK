#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogTemplateAction(py::module &m)
{
    py::class_< UGearboxDialogTemplateAction,  UGearboxDialogAction   >(m, "UGearboxDialogTemplateAction")
		.def_static("StaticClass", &UGearboxDialogTemplateAction::StaticClass, py::return_value_policy::reference)
          ;
}