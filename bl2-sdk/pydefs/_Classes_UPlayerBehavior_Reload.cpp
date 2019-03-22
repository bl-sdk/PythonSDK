#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_Reload(py::module &m)
{
    py::class_< UPlayerBehavior_Reload,  UPlayerBehaviorBase   >(m, "UPlayerBehavior_Reload")
        .def("StaticClass", &UPlayerBehavior_Reload::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UPlayerBehavior_Reload::ApplyBehaviorToContext)
          ;
}