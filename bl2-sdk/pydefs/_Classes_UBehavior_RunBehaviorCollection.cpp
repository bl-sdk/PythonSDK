#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RunBehaviorCollection(py::module &m)
{
    py::class_< UBehavior_RunBehaviorCollection,  UBehaviorBase   >(m, "UBehavior_RunBehaviorCollection")
        .def_readwrite("CollectionDefinition", &UBehavior_RunBehaviorCollection::CollectionDefinition)
        .def_readwrite("OverrideName", &UBehavior_RunBehaviorCollection::OverrideName)
        .def_readwrite("OverrideContext", &UBehavior_RunBehaviorCollection::OverrideContext)
        .def("StaticClass", &UBehavior_RunBehaviorCollection::StaticClass, py::return_value_policy::reference)
        .def("RunBehaviorCollection", &UBehavior_RunBehaviorCollection::RunBehaviorCollection)
        .def("ApplyBehaviorToContext", &UBehavior_RunBehaviorCollection::ApplyBehaviorToContext)
        .def("ApplyBehavior", &UBehavior_RunBehaviorCollection::ApplyBehavior)
          ;
}