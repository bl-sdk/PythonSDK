#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxManagerDefinition(py::module &m)
{
    py::class_< UGFxManagerDefinition,  UGBXDefinition   >(m, "UGFxManagerDefinition")
		.def_static("StaticClass", &UGFxManagerDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ManagerClass", &UGFxManagerDefinition::ManagerClass)
        .def_readwrite("GFxDialogBox", &UGFxManagerDefinition::GFxDialogBox)
        .def_readwrite("InteractionSounds", &UGFxManagerDefinition::InteractionSounds)
          ;
}