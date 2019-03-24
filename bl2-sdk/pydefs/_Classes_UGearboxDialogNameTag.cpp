#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogNameTag(py::module &m)
{
    py::class_< UGearboxDialogNameTag,  UGBXDefinition   >(m, "UGearboxDialogNameTag")
		.def_static("StaticClass", &UGearboxDialogNameTag::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NameTag", &UGearboxDialogNameTag::NameTag)
        .def_readwrite("ParentTag", &UGearboxDialogNameTag::ParentTag)
          ;
}