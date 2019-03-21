#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIGFxActorMovie()
{
    py::class_< UIGFxActorMovie,  UInterface   >("UIGFxActorMovie")
        .def("StaticClass", &UIGFxActorMovie::StaticClass, py::return_value_policy::reference)
        .def("GFx_NotifyMovieDestroy", &UIGFxActorMovie::GFx_NotifyMovieDestroy)
        .def("GFx_NotifyMovieCreate", &UIGFxActorMovie::GFx_NotifyMovieCreate)
        .def("GFx_GetMovieActor", &UIGFxActorMovie::GFx_GetMovieActor, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}