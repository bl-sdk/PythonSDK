#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_GFxMovieSetState()
{
    class_< UBehavior_GFxMovieSetState, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_GFxMovieSetState", no_init)
        .def_readwrite("StateToChange", &UBehavior_GFxMovieSetState::StateToChange)
        .def("StaticClass", &UBehavior_GFxMovieSetState::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_GFxMovieSetState::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}