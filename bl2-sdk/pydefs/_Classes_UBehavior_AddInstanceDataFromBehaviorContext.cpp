#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AddInstanceDataFromBehaviorContext(py::module &m)
{
    py::class_< UBehavior_AddInstanceDataFromBehaviorContext,  UBehaviorBase   >(m, "UBehavior_AddInstanceDataFromBehaviorContext")
        .def_readwrite("DatumName", &UBehavior_AddInstanceDataFromBehaviorContext::DatumName)
        .def_readwrite("ObjectContext", &UBehavior_AddInstanceDataFromBehaviorContext::ObjectContext)
        .def("ApplyBehaviorToContext", &UBehavior_AddInstanceDataFromBehaviorContext::ApplyBehaviorToContext)
          ;
}