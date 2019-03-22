#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogEventTag(py::module &m)
{
    py::class_< UGearboxDialogEventTag,  UGBXDefinition   >(m, "UGearboxDialogEventTag")
        .def_readwrite("Priority", &UGearboxDialogEventTag::Priority)
        .def("StaticClass", &UGearboxDialogEventTag::StaticClass, py::return_value_policy::reference)
          ;
}