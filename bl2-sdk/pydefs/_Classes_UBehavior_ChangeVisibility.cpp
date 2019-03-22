#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeVisibility(py::module &m)
{
    py::class_< UBehavior_ChangeVisibility,  UBehaviorBase   >(m, "UBehavior_ChangeVisibility")
        .def_readwrite("Status", &UBehavior_ChangeVisibility::Status)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeVisibility::ApplyBehaviorToContext)
          ;
}