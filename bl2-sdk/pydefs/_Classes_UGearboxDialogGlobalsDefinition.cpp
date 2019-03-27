#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogGlobalsDefinition(py::module &m)
{
    py::class_< UGearboxDialogGlobalsDefinition,  UGBXDefinition   >(m, "UGearboxDialogGlobalsDefinition")
		.def_static("StaticClass", &UGearboxDialogGlobalsDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PitchRTPC", &UGearboxDialogGlobalsDefinition::PitchRTPC)
        .def_readwrite("Priorities", &UGearboxDialogGlobalsDefinition::Priorities)
          ;
}