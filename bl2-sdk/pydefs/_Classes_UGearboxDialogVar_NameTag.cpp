#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogVar_NameTag(py::module &m)
{
    py::class_< UGearboxDialogVar_NameTag,  UGearboxDialogVariable   >(m, "UGearboxDialogVar_NameTag")
        .def_readwrite("NameTag", &UGearboxDialogVar_NameTag::NameTag)
          ;
}