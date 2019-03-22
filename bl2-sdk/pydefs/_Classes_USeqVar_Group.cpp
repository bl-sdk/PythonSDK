#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_Group(py::module &m)
{
    py::class_< USeqVar_Group,  USeqVar_Object   >(m, "USeqVar_Group")
        .def_readwrite("GroupName", &USeqVar_Group::GroupName)
        .def_readwrite("Actors", &USeqVar_Group::Actors)
        .def("StaticClass", &USeqVar_Group::StaticClass, py::return_value_policy::reference)
          ;
}