#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIGFxActorMovie()
{
    class_< UIGFxActorMovie, bases< UInterface >  , boost::noncopyable>("UIGFxActorMovie", no_init)
        .def("StaticClass", &UIGFxActorMovie::StaticClass, return_value_policy< reference_existing_object >())
        .def("GFx_NotifyMovieDestroy", &UIGFxActorMovie::GFx_NotifyMovieDestroy)
        .def("GFx_NotifyMovieCreate", &UIGFxActorMovie::GFx_NotifyMovieCreate)
        .def("GFx_GetMovieActor", &UIGFxActorMovie::GFx_GetMovieActor, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}