#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DestroyBeamsForSource()
{
    py::class_< UBehavior_DestroyBeamsForSource,  UBehaviorBase   >("UBehavior_DestroyBeamsForSource")
        .def_readwrite("SourceContext", &UBehavior_DestroyBeamsForSource::SourceContext)
        .def_readwrite("SourceSocket", &UBehavior_DestroyBeamsForSource::SourceSocket)
        .def("StaticClass", &UBehavior_DestroyBeamsForSource::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_DestroyBeamsForSource::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}