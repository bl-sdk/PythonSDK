#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetableList(py::module &m)
{
    py::class_< UTargetableList,  UObject   >(m, "UTargetableList")
        .def_readwrite("TargetableAllegianceMap", &UTargetableList::TargetableAllegianceMap)
        .def_readwrite("FullTargetableList", &UTargetableList::FullTargetableList)
        .def("StaticClass", &UTargetableList::StaticClass, py::return_value_policy::reference)
        .def("GetDebugInfo", &UTargetableList::GetDebugInfo)
        .def("ResetAllegiance", &UTargetableList::ResetAllegiance)
        .def("GetNext", &UTargetableList::GetNext, py::return_value_policy::reference)
        .def("StartSearch", &UTargetableList::StartSearch, py::return_value_policy::reference)
        .def("UnRegisterTargetable", &UTargetableList::UnRegisterTargetable)
        .def("RegisterTargetable", &UTargetableList::RegisterTargetable)
          ;
}