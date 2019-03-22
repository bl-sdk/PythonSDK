#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_GFxMovieSetState(py::module &m)
{
    py::class_< UBehavior_GFxMovieSetState,  UBehaviorBase   >(m, "UBehavior_GFxMovieSetState")
        .def_readwrite("StateToChange", &UBehavior_GFxMovieSetState::StateToChange)
        .def("StaticClass", &UBehavior_GFxMovieSetState::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_GFxMovieSetState::ApplyBehaviorToContext)
          ;
}