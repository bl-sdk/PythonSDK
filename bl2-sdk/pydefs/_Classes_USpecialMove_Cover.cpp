#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_Cover(py::module &m)
{
    py::class_< USpecialMove_Cover,  UWillowAnimDefinition   >(m, "USpecialMove_Cover")
        .def("StaticClass", &USpecialMove_Cover::StaticClass, py::return_value_policy::reference)
        .def("GetSMNode", &USpecialMove_Cover::GetSMNode, py::return_value_policy::reference)
          ;
}