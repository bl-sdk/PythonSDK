#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogVar_NameTag()
{
    py::class_< UGearboxDialogVar_NameTag,  UGearboxDialogVariable   >("UGearboxDialogVar_NameTag")
        .def_readwrite("NameTag", &UGearboxDialogVar_NameTag::NameTag)
        .def("StaticClass", &UGearboxDialogVar_NameTag::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}