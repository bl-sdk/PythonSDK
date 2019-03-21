#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogTemplateGroup()
{
    py::class_< UGearboxDialogTemplateGroup,  UGearboxDialogGroup   >("UGearboxDialogTemplateGroup")
        .def("StaticClass", &UGearboxDialogTemplateGroup::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}