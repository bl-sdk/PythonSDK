#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogPriority(py::object m)
{
    py::class_< UGearboxDialogPriority,  UGBXDefinition   >(m, "UGearboxDialogPriority")
        .def("StaticClass", &UGearboxDialogPriority::StaticClass, py::return_value_policy::reference)
          ;
}