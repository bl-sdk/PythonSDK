#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeDialogName()
{
    py::class_< UBehavior_ChangeDialogName,  UBehaviorBase   >("UBehavior_ChangeDialogName")
        .def_readwrite("NewNameTag", &UBehavior_ChangeDialogName::NewNameTag)
        .def("StaticClass", &UBehavior_ChangeDialogName::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeDialogName::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}