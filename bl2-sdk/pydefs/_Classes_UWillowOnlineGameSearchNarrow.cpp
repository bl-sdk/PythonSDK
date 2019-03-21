#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowOnlineGameSearchNarrow()
{
    class_< UWillowOnlineGameSearchNarrow, bases< UWillowOnlineGameSearch >  , boost::noncopyable>("UWillowOnlineGameSearchNarrow", no_init)
        .def("StaticClass", &UWillowOnlineGameSearchNarrow::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}