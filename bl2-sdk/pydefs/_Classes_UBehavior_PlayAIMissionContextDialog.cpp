#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_PlayAIMissionContextDialog()
{
    py::class_< UBehavior_PlayAIMissionContextDialog,  UBehaviorBase   >("UBehavior_PlayAIMissionContextDialog")
        .def_readwrite("PlayerWhoUsedMe", &UBehavior_PlayAIMissionContextDialog::PlayerWhoUsedMe)
        .def("StaticClass", &UBehavior_PlayAIMissionContextDialog::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_PlayAIMissionContextDialog::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}