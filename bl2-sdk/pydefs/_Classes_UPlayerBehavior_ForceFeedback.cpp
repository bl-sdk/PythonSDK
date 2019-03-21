#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_ForceFeedback(py::object m)
{
    py::class_< UPlayerBehavior_ForceFeedback,  UPlayerBehaviorBase   >(m, "UPlayerBehavior_ForceFeedback")
        .def_readwrite("FFWaveform", &UPlayerBehavior_ForceFeedback::FFWaveform)
        .def("StaticClass", &UPlayerBehavior_ForceFeedback::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UPlayerBehavior_ForceFeedback::ApplyBehaviorToContext)
          ;
}