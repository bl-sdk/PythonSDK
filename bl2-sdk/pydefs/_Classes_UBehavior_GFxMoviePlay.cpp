#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_GFxMoviePlay(py::module &m)
{
    py::class_< UBehavior_GFxMoviePlay,  UBehaviorBase   >(m, "UBehavior_GFxMoviePlay")
		.def_static("StaticClass", &UBehavior_GFxMoviePlay::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MovieDefinition", &UBehavior_GFxMoviePlay::MovieDefinition)
        .def_readwrite("OtherContext", &UBehavior_GFxMoviePlay::OtherContext)
        .def_readwrite("Tag", &UBehavior_GFxMoviePlay::Tag)
        .def("ResolveController", &UBehavior_GFxMoviePlay::ResolveController, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_GFxMoviePlay::ApplyBehaviorToContext)
          ;
}