#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UISeeTargetable(py::object m)
{
    py::class_< UISeeTargetable,  UInterface   >(m, "UISeeTargetable")
        .def("StaticClass", &UISeeTargetable::StaticClass, py::return_value_policy::reference)
        .def("GetViewLocation", &UISeeTargetable::GetViewLocation)
        .def("GetWorldBody", &UISeeTargetable::GetWorldBody, py::return_value_policy::reference)
        .def("AddTargetable", &UISeeTargetable::AddTargetable)
          ;
}