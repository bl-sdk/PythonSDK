#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_IsSequenceEnabled(py::object m)
{
    py::class_< UBehavior_IsSequenceEnabled,  UBehaviorBase   >(m, "UBehavior_IsSequenceEnabled")
        .def_readwrite("SequenceName", &UBehavior_IsSequenceEnabled::SequenceName)
        .def_readwrite("SequenceProvider", &UBehavior_IsSequenceEnabled::SequenceProvider)
        .def_readwrite("ProviderDefinitionPathName", &UBehavior_IsSequenceEnabled::ProviderDefinitionPathName)
        .def("StaticClass", &UBehavior_IsSequenceEnabled::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_IsSequenceEnabled::ApplyBehaviorToContext)
          ;
}