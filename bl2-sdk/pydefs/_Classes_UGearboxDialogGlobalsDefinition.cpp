#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogGlobalsDefinition()
{
    py::class_< UGearboxDialogGlobalsDefinition,  UGBXDefinition   >("UGearboxDialogGlobalsDefinition")
        .def_readwrite("PitchRTPC", &UGearboxDialogGlobalsDefinition::PitchRTPC)
        .def_readwrite("Priorities", &UGearboxDialogGlobalsDefinition::Priorities)
        .def("StaticClass", &UGearboxDialogGlobalsDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}