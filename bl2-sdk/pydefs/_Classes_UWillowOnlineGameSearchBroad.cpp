#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowOnlineGameSearchBroad()
{
    class_< UWillowOnlineGameSearchBroad, bases< UWillowOnlineGameSearch >  , boost::noncopyable>("UWillowOnlineGameSearchBroad", no_init)
        .def("StaticClass", &UWillowOnlineGameSearchBroad::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}