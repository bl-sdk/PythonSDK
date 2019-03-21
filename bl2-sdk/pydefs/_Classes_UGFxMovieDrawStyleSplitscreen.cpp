#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxMovieDrawStyleSplitscreen()
{
    class_< UGFxMovieDrawStyleSplitscreen, bases< UGFxMovieDrawStyle >  , boost::noncopyable>("UGFxMovieDrawStyleSplitscreen", no_init)
        .def("StaticClass", &UGFxMovieDrawStyleSplitscreen::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventRequiresClientInstance", &UGFxMovieDrawStyleSplitscreen::eventRequiresClientInstance)
        .staticmethod("StaticClass")
  ;
}