#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowLANGameSearch()
{
    class_< UWillowLANGameSearch, bases< UWillowOnlineGameSearch >  , boost::noncopyable>("UWillowLANGameSearch", no_init)
        .def("StaticClass", &UWillowLANGameSearch::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}