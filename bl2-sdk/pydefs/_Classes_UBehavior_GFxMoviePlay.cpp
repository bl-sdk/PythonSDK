#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_GFxMoviePlay()
{
    class_< UBehavior_GFxMoviePlay, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_GFxMoviePlay", no_init)
        .def_readwrite("MovieDefinition", &UBehavior_GFxMoviePlay::MovieDefinition)
        .def_readwrite("OtherContext", &UBehavior_GFxMoviePlay::OtherContext)
        .def_readwrite("Tag", &UBehavior_GFxMoviePlay::Tag)
        .def("StaticClass", &UBehavior_GFxMoviePlay::StaticClass, return_value_policy< reference_existing_object >())
        .def("ResolveController", &UBehavior_GFxMoviePlay::ResolveController, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_GFxMoviePlay::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}