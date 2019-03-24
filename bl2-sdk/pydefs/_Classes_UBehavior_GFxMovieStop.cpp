#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_GFxMovieStop(py::module &m)
{
    py::class_< UBehavior_GFxMovieStop,  UBehaviorBase   >(m, "UBehavior_GFxMovieStop")
		.def_static("StaticClass", &UBehavior_GFxMovieStop::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Tag", &UBehavior_GFxMovieStop::Tag)
        .def("ResolveController", &UBehavior_GFxMovieStop::ResolveController, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_GFxMovieStop::ApplyBehaviorToContext)
          ;
}