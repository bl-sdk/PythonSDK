#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_UseObject(py::module &m)
{
    py::class_< UBehavior_UseObject,  UBehaviorBase   >(m, "UBehavior_UseObject")
        .def_readwrite("UseType", &UBehavior_UseObject::UseType)
        .def_readwrite("User", &UBehavior_UseObject::User)
        .def("ApplyBehaviorToContext", &UBehavior_UseObject::ApplyBehaviorToContext)
          ;
}