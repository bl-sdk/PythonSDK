#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_GFxMovieStop()
{
    class_< UBehavior_GFxMovieStop, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_GFxMovieStop", no_init)
        .def_readwrite("Tag", &UBehavior_GFxMovieStop::Tag)
        .def("StaticClass", &UBehavior_GFxMovieStop::StaticClass, return_value_policy< reference_existing_object >())
        .def("ResolveController", &UBehavior_GFxMovieStop::ResolveController, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_GFxMovieStop::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}