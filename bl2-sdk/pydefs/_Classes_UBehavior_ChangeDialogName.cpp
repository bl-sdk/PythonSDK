#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeDialogName(py::module &m)
{
    py::class_< UBehavior_ChangeDialogName,  UBehaviorBase   >(m, "UBehavior_ChangeDialogName")
        .def_readwrite("NewNameTag", &UBehavior_ChangeDialogName::NewNameTag)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeDialogName::ApplyBehaviorToContext)
          ;
}