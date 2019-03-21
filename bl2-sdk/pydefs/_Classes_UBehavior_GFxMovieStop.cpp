#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_GFxMovieStop()
{
    py::class_< UBehavior_GFxMovieStop,  UBehaviorBase   >("UBehavior_GFxMovieStop")
        .def_readwrite("Tag", &UBehavior_GFxMovieStop::Tag)
        .def("StaticClass", &UBehavior_GFxMovieStop::StaticClass, py::return_value_policy::reference)
        .def("ResolveController", &UBehavior_GFxMovieStop::ResolveController, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_GFxMovieStop::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}