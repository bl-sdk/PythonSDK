#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_ViewShake(py::module &m)
{
    py::class_< UPlayerBehavior_ViewShake,  UPlayerBehaviorBase   >(m, "UPlayerBehavior_ViewShake")
        .def_readwrite("ShakeInfo", &UPlayerBehavior_ViewShake::ShakeInfo)
        .def("ApplyBehaviorToContext", &UPlayerBehavior_ViewShake::ApplyBehaviorToContext)
          ;
}