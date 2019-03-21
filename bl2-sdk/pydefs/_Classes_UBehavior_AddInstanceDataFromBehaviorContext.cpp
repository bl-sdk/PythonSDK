#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AddInstanceDataFromBehaviorContext()
{
    py::class_< UBehavior_AddInstanceDataFromBehaviorContext,  UBehaviorBase   >("UBehavior_AddInstanceDataFromBehaviorContext")
        .def_readwrite("DatumName", &UBehavior_AddInstanceDataFromBehaviorContext::DatumName)
        .def_readwrite("ObjectContext", &UBehavior_AddInstanceDataFromBehaviorContext::ObjectContext)
        .def("StaticClass", &UBehavior_AddInstanceDataFromBehaviorContext::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AddInstanceDataFromBehaviorContext::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}