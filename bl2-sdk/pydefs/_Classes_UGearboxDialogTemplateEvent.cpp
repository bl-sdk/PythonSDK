#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogTemplateEvent(py::module &m)
{
    py::class_< UGearboxDialogTemplateEvent,  UGearboxDialogEvent   >(m, "UGearboxDialogTemplateEvent")
		.def_static("StaticClass", &UGearboxDialogTemplateEvent::StaticClass, py::return_value_policy::reference)
          ;
}