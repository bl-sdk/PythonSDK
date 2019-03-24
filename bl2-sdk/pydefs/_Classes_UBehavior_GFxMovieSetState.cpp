#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_GFxMovieSetState(py::module &m)
{
    py::class_< UBehavior_GFxMovieSetState,  UBehaviorBase   >(m, "UBehavior_GFxMovieSetState")
		.def_static("StaticClass", &UBehavior_GFxMovieSetState::StaticClass, py::return_value_policy::reference)
        .def_readwrite("StateToChange", &UBehavior_GFxMovieSetState::StateToChange)
        .def("ApplyBehaviorToContext", &UBehavior_GFxMovieSetState::ApplyBehaviorToContext)
          ;
}