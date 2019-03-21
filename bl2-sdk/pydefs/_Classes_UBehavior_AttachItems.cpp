#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AttachItems(py::object m)
{
    py::class_< UBehavior_AttachItems,  UBehaviorBase   >(m, "UBehavior_AttachItems")
        .def("StaticClass", &UBehavior_AttachItems::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AttachItems::ApplyBehaviorToContext)
          ;
}