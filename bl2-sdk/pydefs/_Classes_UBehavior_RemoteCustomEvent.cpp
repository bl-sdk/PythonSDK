#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RemoteCustomEvent(py::module &m)
{
    py::class_< UBehavior_RemoteCustomEvent,  UBehaviorBase   >(m, "UBehavior_RemoteCustomEvent")
        .def_readwrite("SequenceProvider", &UBehavior_RemoteCustomEvent::SequenceProvider)
        .def_readwrite("ProviderDefinitionPathName", &UBehavior_RemoteCustomEvent::ProviderDefinitionPathName)
        .def_readwrite("CustomEventName", &UBehavior_RemoteCustomEvent::CustomEventName)
        .def("StaticClass", &UBehavior_RemoteCustomEvent::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_RemoteCustomEvent::ApplyBehaviorToContext)
          ;
}