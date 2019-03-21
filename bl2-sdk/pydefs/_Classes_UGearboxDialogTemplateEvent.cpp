#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogTemplateEvent(py::object m)
{
    py::class_< UGearboxDialogTemplateEvent,  UGearboxDialogEvent   >(m, "UGearboxDialogTemplateEvent")
        .def("StaticClass", &UGearboxDialogTemplateEvent::StaticClass, py::return_value_policy::reference)
          ;
}